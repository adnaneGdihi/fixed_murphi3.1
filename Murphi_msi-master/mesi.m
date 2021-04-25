-- three-state 3-hop MSI protocol

------------------------------------------
-- Constants
------------------------------------------

const
  ProcCount: 3;       -- number processors.
  ValueCount: 1;      -- number of data values.
  VC0: 0;
  VC1: 1;
  VC2: 2;
  QMax: 2;
  NumVCs: VC2 - VC0 + 1;
  NetMax: ProcCount + 1;

type
  Proc : scalarset(ProcCount);   -- unordered range of processors
  Value: scalarset(ValueCount);  -- arbitrary values for tracking coherence
  Home : enum { HomeType };      -- need enumeration for IsMember calls
  Acknowledge : 0..ProcCount;    -- type: range-restricted int
  Node : union { Home, Proc };

  VCType: VC0..NumVCs-1;

  MessageType: enum {  
    -- Send by rule
    GetS,
    GetM,
    PutS,
    PutE,
    PutM,
    --Send by Proc
    InvAck,
    Data,
    DataE,
    FwdAck,
    TranAck,
    -- Send by Home
    FwdGetS,
    FwdGetM,
    PutAck,
    Inv
  }; 
                      

  Message:
    record
      mtype: MessageType;
      src  : Node;
      dst  : Node;
      vc   : VCType;
      val  : Value;
      ack  : Acknowledge;
    end;

  HomeState:
    record
      state: enum { 
        H_I,
        H_S, 
        H_E,
        H_M,
        H_MM_Wait,
        H_MS_Wait,
        H_SM_Wait,
        H_IE_Wait,
        H_IM_Wait
      };
      owner: Node;
      sharers: multiset [ProcCount] of Node; 
      val  : Value;
    end;

  ProcState:
    record
      state: enum { 
        P_I,
        P_S,
        P_E,
        P_M,
        P_IS_D,
        P_IM_AD,
        P_IM_A,
        P_SM_AD,
        P_SM_A,
        P_SI_A,
        P_EI_A,
        P_MI_A,
        P_II_A
      };
      val  : Value;
      ack  : Acknowledge;
    end;
                    

-----------------------------------------------
-- Variables 
-----------------------------------------------
var
  HomeNode: HomeState;                                   -- The home node is represented by a HomeState (FSM of Home node)
  Procs   : array[Proc] of ProcState;                    -- each processor is represented by a ProcState (FSM of Processor)
  Net     : array[Node] of multiset [NetMax] of Message; -- One multiset for each destination - messages are arbitrarily reordered by the multiset
  InBox   : array[Node] of array [VCType] of Message;    -- Recieving-side buffer: If a message is not processed, it is placed in InBox, blocking that virtual channel
  msg_processed: boolean;
  LastWrite: Value;                                      -- Used to confirm that writes are not lost; this variable would not exist in real hardware
-----------------------------------------------
-- Procedures
-----------------------------------------------
procedure Send(
  mtype: MessageType;
  dst  : Node;
  src  : Node;
  vc   : VCType;
  val  : Value;
  ack  : Acknowledge;
);
var msg: Message;
begin
  Assert(MultiSetCount(i: Net[dst], true) < NetMax) "Too many messages";
  msg.mtype := mtype;
  msg.src   := src;
  msg.dst   := dst;
  msg.vc    := vc;
  msg.val   := val;
  msg.ack   := ack;
  MultiSetAdd(msg, Net[dst]);
end;

procedure ErrorUnhandledMsg(msg: Message; n: Node);
begin
  error "Unhandled message";
end;

procedure ErrorUnhandledState();
begin
  error "Unhandled state!";
end;

procedure AddToSharerList(n: Node);
begin
  if MultiSetCount(i: HomeNode.sharers, HomeNode.sharers[i] = n) = 0
  then
    MultiSetAdd(n, HomeNode.sharers);
  endif;
end;

function IsSharer(n: Node) : boolean;
begin
  return MultiSetCount(i: HomeNode.sharers, HomeNode.sharers[i] = n) > 0 
end;

procedure RemoveFromSharersList(n: Node);
begin
  MultiSetRemovePred(i: HomeNode.sharers, HomeNode.sharers[i] = n);
end;

procedure SendInvReqToSharers(rqst: Node);
begin
  for n: Node do
    if (IsMember(n, Proc) &
         MultiSetCount(i: HomeNode.sharers, HomeNode.sharers[i] = n) != 0)
    then
      if n != rqst
      then
        -- Send invalidation message here
        Send(Inv, n, rqst, VC1, UNDEFINED, UNDEFINED);  
      endif;
    endif;
  endfor;
end;

Procedure ClearSharersList();
Begin
  for n:Node do
    if (IsMember(n, Proc) &
        MultiSetCount(i:HomeNode.sharers, HomeNode.sharers[i] = n) != 0)
    then
      RemoveFromSharersList(n);
    endif;
  endfor;
End;

Procedure HomeReceive(msg:Message);
var cnt:0..ProcCount;  -- for counting sharers
Begin
-- The line below is not needed in Valid/Invalid protocol.  However, the 
  -- compiler barfs if we put this inside a switch, so it is useful to
  -- pre-calculate the sharer count here
  cnt := MultiSetCount(i:HomeNode.sharers, true);

  msg_processed := true;

  -- FSM for HomeNode upon receiving a message  
  switch HomeNode.state
    case H_I:
      switch msg.mtype
        case GetS:
          Assert ( cnt = 0 ) "H_I's cnt is not always zero";
          Send(DataE, msg.src, HomeType, VC2, HomeNode.val, cnt);
          HomeNode.owner := msg.src;
          HomeNode.state := H_IE_Wait;
        case GetM:
          Send(Data, msg.src, HomeType, VC2, HomeNode.val, cnt);
          HomeNode.owner := msg.src;
          HomeNode.state := H_IM_Wait;
        case PutS:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, cnt);
        case PutM:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, cnt);
        case PutE:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, cnt);  
        --case Data:
        --case FwdAck:
        --case TranAck:
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;
        
    case H_S:
      switch msg.mtype
        case GetS:
          Send(Data, msg.src, HomeType, VC2, HomeNode.val, UNDEFINED);
          AddToSharerList(msg.src);
        case GetM:
          if (IsSharer(msg.src)) then
            Send(Data, msg.src, HomeType, VC2, HomeNode.val, cnt-1);
          else
            Send(Data, msg.src, HomeType, VC2, HomeNode.val, cnt);
          endif;
          SendInvReqToSharers(msg.src);
          HomeNode.owner := msg.src;  
          HomeNode.state := H_SM_Wait;
        case PutS:
          if (cnt = 1) then
            ClearSharersList();
            HomeNode.state := H_I;
          endif;
            RemoveFromSharersList(msg.src);
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);  
        case PutM:
          RemoveFromSharersList(msg.src);
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutE:
          RemoveFromSharersList(msg.src);
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        --case Data:
        --case FwdAck:
        --case TranAck:
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

    case H_E:
      switch msg.mtype
        case GetS:
          Send(FwdGetS, HomeNode.owner, msg.src, VC1, UNDEFINED, UNDEFINED);
          AddToSharerList(msg.src);
          AddToSharerList(HomeNode.owner);
          HomeNode.state := H_MS_Wait; 
        case GetM:
          Send(FwdGetM, HomeNode.owner, msg.src, VC1, UNDEFINED, UNDEFINED);
          HomeNode.state := H_MM_Wait;
        case PutS:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutM:
          if (msg.src = HomeNode.owner) then
            HomeNode.val := msg.val;
            undefine HomeNode.owner;
            HomeNode.state := H_I;
          endif;
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutE:
          if (msg.src = HomeNode.owner) then
            undefine HomeNode.owner;
            HomeNode.state := H_I;
          endif;
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        --case Data:
        --case FwdAck:
        --case TranAck:
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;
 
    case H_M:
      switch msg.mtype
        case GetS:
          Send(FwdGetS, HomeNode.owner, msg.src, VC1, UNDEFINED, UNDEFINED);
          AddToSharerList(msg.src);
          AddToSharerList(HomeNode.owner);
          HomeNode.state := H_MS_Wait; 
        case GetM:
          Send(FwdGetM, HomeNode.owner, msg.src, VC1, UNDEFINED, UNDEFINED);
          HomeNode.state := H_MM_Wait;
        case PutS:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutM:
          if (msg.src = HomeNode.owner) then
            HomeNode.val := msg.val;
            undefine HomeNode.owner;
            HomeNode.state := H_I;
          endif;
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutE:
          if (msg.src != HomeNode.owner) then
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          else
            ErrorUnhandledMsg(msg, HomeType);
          endif;
        --case Data:
        --case FwdAck:
        --case TranAck:
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

    case H_MM_Wait:
      switch msg.mtype
        case GetS:
          msg_processed := false;
        case GetM:
          msg_processed := false;
        case PutS:
          if (msg.src != HomeNode.owner) then
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          else
            msg_processed := false;
          endif;
        case PutM:
          msg_processed := false;
        case PutE:
          msg_processed := false;
        --case Data:
        case FwdAck:
          HomeNode.owner := msg.src;
          HomeNode.state := H_M;
        case TranAck:
          msg_processed := false;
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

    case H_MS_Wait:
      switch msg.mtype
        case GetS:
          msg_processed := false;
        case GetM:
          msg_processed := false;
        case PutS:
          if (msg.src != HomeNode.owner) then
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
            RemoveFromSharersList(msg.src);
          else
            msg_processed := false;
          endif;
        case PutM:
          msg_processed := false;
        case PutE:
          msg_processed := false;
        case Data:
          if (HomeNode.owner = msg.src) then
            HomeNode.val := msg.val;
            undefine HomeNode.owner;
            HomeNode.state := H_S;
          else  
            ErrorUnhandledMsg(msg, HomeType);
          endif;
        case FwdAck:
          if (HomeNode.owner = msg.src) then
            undefine HomeNode.owner;
            HomeNode.state := H_S;
          else
            ErrorUnhandledMsg(msg, HomeType);
          endif;
        --case TranAck:
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

      case H_SM_Wait:
      switch msg.mtype
        case GetS:
          msg_processed := false;
        case GetM:
          msg_processed := false;
        case PutS:
          if (IsSharer(msg.src)) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        case PutM:
          if (IsSharer(msg.src) | HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        case PutE:
          if (IsSharer(msg.src) | HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        --case Data:
        --case FwdAck:
        case TranAck:
          ClearSharersList();
          HomeNode.state := H_M;
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

      case H_IE_Wait:
      switch msg.mtype
        case GetS:
          msg_processed := false;
        case GetM:
          msg_processed := false;
        case PutS:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutM:
          if (HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        case PutE:
          if (HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        --case Data:
        --case FwdAck:
        case TranAck:
          HomeNode.state := H_E;
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;

      case H_IM_Wait:
      switch msg.mtype
        case GetS:
          msg_processed := false;
        case GetM:
          msg_processed := false;
        case PutS:
          Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
        case PutM:
          if (HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        case PutE:
          if (HomeNode.owner = msg.src) then
            msg_processed := false;
          else
            Send(PutAck, msg.src, HomeType, VC1, UNDEFINED, UNDEFINED);
          endif;
        --case Data:
        --case FwdAck:
        case TranAck:
          HomeNode.state := H_M;
        else
          ErrorUnhandledMsg(msg, HomeType);
      endswitch;
  endswitch;

end;

procedure ProcReceive(msg: Message; p: Proc);
begin

  -- default to 'processing' message. set to  false otherwise
  msg_processed := true;

  alias ps: Procs[p].state do
  alias pv: Procs[p].val do
  alias pa: Procs[p].ack do

  switch ps
  case P_I:
    switch msg.mtype
    case FwdGetS: 
      Send(FwdAck, HomeType, p, VC2, UNDEFINED, UNDEFINED);
    case FwdGetM:
      Send(FwdAck, HomeType, p, VC2, UNDEFINED, UNDEFINED);
    --case Inv:
    --case PutAck:
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_S:
    switch msg.mtype
    --case FwdGetS: 
    --case FwdGetM:
    case Inv:
      Send(InvAck, msg.src, p, VC2, UNDEFINED, UNDEFINED);
      undefine pv;
      ps := P_I;
    --case PutAck:
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_E:
    Assert(pa = 0) "ack is not 0 in modified state";
    switch msg.mtype
    case FwdGetS:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(Data, HomeType, p, VC2, pv, UNDEFINED);
      pa := 0;
      ps := P_S;
    case FwdGetM:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(FwdAck, HomeType, msg.src, VC2, UNDEFINED, UNDEFINED); 
      undefine pv;
      ps := P_I;
    --case Inv:
    --case PutAck:
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_M:
    Assert(pa = 0) "ack is not 0 in modified state";
    switch msg.mtype
    case FwdGetS:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(Data, HomeType, p, VC2, pv, UNDEFINED);
      pa := 0;
      ps := P_S;
    case FwdGetM:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(FwdAck, HomeType, msg.src, VC2, UNDEFINED, UNDEFINED); 
      undefine pv;
      ps := P_I;
    --case Inv:
    --case PutAck:
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_IS_D:
    switch msg.mtype
    case FwdGetS:
      msg_processed := false;
    case FwdGetM:
      msg_processed := false;
    case Inv:
      msg_processed := false;
    --case PutAck:
    case Data:
      ps := P_S;
      pv := msg.val;
    case DataE:
      Send(TranAck, HomeType, p, VC2, UNDEFINED, UNDEFINED);
      ps := P_E;
      pv := msg.val;
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;
 
  case P_IM_AD:
    switch msg.mtype
    case FwdGetS:
      msg_processed := false;
    case FwdGetM:
      msg_processed := false;
    case Inv:
    --case PutAck:
    case Data:
      if (msg.src = HomeType) then
        pa := msg.ack - pa;
        if (msg.ack = 0 | pa = 0) then 
          Send(TranAck, HomeType, p, VC2, UNDEFINED, UNDEFINED);
          pv := msg.val;
          ps := P_M;
        else 
          pv := msg.val;
          ps := P_IM_A;
        endif
      else
        ps := P_M;
        pv := msg.val;
      endif;
    case InvAck:
      pa := pa + 1;
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_IM_A:
    switch msg.mtype
    case FwdGetS:
      msg_processed := false;
    case FwdGetM:
      msg_processed := false;
    --case Inv:
    --case PutAck:
    --case Data:    
    case InvAck:
      if (pa > 1) then
        pa := pa - 1;
      elsif (pa = 1) then
        Send(TranAck, HomeType, p, VC2, UNDEFINED, UNDEFINED);
        pa := pa - 1;
        ps := P_M;
      endif;
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;
 
  case P_SM_AD:
    switch msg.mtype
    case FwdGetS:
      msg_processed := false;
    case FwdGetM:
      msg_processed := false;
    case Inv:
      Send(InvAck, msg.src, p, VC2, UNDEFINED, UNDEFINED);
      pa := 0;
      ps := P_IM_AD
    --case PutAck:
    case Data:
      if (msg.src = HomeType) then
        pa := msg.ack - pa;
        if (pa = 0) then
          Send(TranAck, HomeType, p, VC2, UNDEFINED, UNDEFINED); 
          ps := P_M;
          pv := msg.val;
        else
          pv := msg.val;
          ps := P_SM_A;
        endif;
      else
        ps := P_M;
        pv := msg.val;
      endif;
    case InvAck:
      pa := pa + 1;
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_SM_A:
    switch msg.mtype
    case FwdGetS:
      msg_processed := false;
    case FwdGetM:
      msg_processed := false;
    --case Inv:
    --case PutAck:
    --case Data:
    case InvAck:
      if (pa > 1) then
        pa := pa - 1;
      else
        Send(TranAck, HomeType, p, VC2, UNDEFINED, UNDEFINED); 
        pa := pa -1;
        ps := P_M;
      endif
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_MI_A:
    switch msg.mtype
    case FwdGetS:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(Data, HomeType, p, VC2, pv, UNDEFINED);
      ps := P_SI_A;
    case FwdGetM:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(FwdAck, HomeType, msg.src, VC2, UNDEFINED, UNDEFINED);
      ps := P_II_A;
    --case Inv:
    case PutAck:
      undefine pv;
      ps := P_I;
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;


  case P_EI_A:
    switch msg.mtype
    case FwdGetS:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(Data, HomeType, p, VC2, pv, UNDEFINED);
      ps := P_SI_A;
    case FwdGetM:
      Send(Data, msg.src, p, VC2, pv, UNDEFINED);
      Send(FwdAck, HomeType, msg.src, VC2, UNDEFINED, UNDEFINED);
      ps := P_II_A;
    --case Inv:
    case PutAck:
      undefine pv;
      ps := P_I;
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_SI_A:
    switch msg.mtype
    --case FwdGetS: 
    --case FwdGetM:
    case Inv:
      Send(InvAck, msg.src, p, VC2, UNDEFINED, UNDEFINED);
      ps := P_II_A;
    case PutAck:
      undefine pv;
      ps := P_I;
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  case P_II_A:
    switch msg.mtype
    --case FwdGetS: 
    --case FwdGetM:
    --case Inv:
    case PutAck:
      undefine pv;
      ps := P_I;
    --case Data:
    --case InvAck:
    else
      ErrorUnhandledMsg(msg, p);
    endswitch;

  endswitch;
  endalias;
  endalias;
  endalias;
/*
  put "> - state    : "; put HomeNode.state; --put "\n";
  put "> - value    : "; put HomeNode.val; --put "\n";
  put "> - Owner    : "; put HomeNode.owner; --put "\n";
  put "> - ack      : "; put MultiSetCount(i:HomeNode.sharers, true); put "\n";
  put "> - LastWrite: "; put LastWrite; --put "\n";
  for i:Proc do
    put "> - "; put Procs[i].state;
    put "> - "; put Procs[i].val;
    put "> - "; put Procs[i].ack;
  endfor;
  if (msg_processed) then
    put "msg_processed is true\n";
  else
    put "msg_processed is false\n";
  endif;
  put "===========================\n";
*/
end;
 
 
----------------------------------------------------------------------
-- Rules
----------------------------------------------------------------------
 
ruleset n: Proc do
  alias p: Procs[n] do
    ruleset v: Value do
      rule "store new value on M"
        (p.state = P_M)
        ==> 
          p.val := v;
          LastWrite := v;
      endrule;

      rule "store request on E"
        (p.state = P_E)
        ==>
          p.val := v;
          LastWrite := v;
          p.state := P_M 
      endrule;
      rule "store request on S"
        (p.state = P_S)
        ==>
          Send(GetM, HomeType, n, VC0, UNDEFINED, UNDEFINED);
          p.ack := 0;
          p.state := P_SM_AD 
      endrule;
      rule "store request on I"
        (p.state = P_I)
        ==>
          Send(GetM, HomeType, n, VC0, UNDEFINED, UNDEFINED);
          p.ack := 0;
          p.state := P_IM_AD 
      endrule;
    endruleset;

    rule "read request"
      (p.state = P_I)
      ==>
        Send(GetS, HomeType, n, VC0, UNDEFINED, UNDEFINED);
        p.state := P_IS_D;
    endrule;
 
    rule "evict shared block"
      (p.state = P_S)
      ==>
        Send(PutS, HomeType, n, VC0, UNDEFINED, UNDEFINED);
        p.state := P_SI_A;
    endrule;

    rule "evict exclusive block"
      (p.state = P_E)
      ==>
        Send(PutE, HomeType, n, VC0, UNDEFINED, UNDEFINED);
        p.state := P_EI_A;
    endrule;
 
    rule "writeback"
      (p.state = P_M)
      ==>
        Send(PutM, HomeType, n, VC0, p.val, UNDEFINED);
        p.state := P_MI_A;
    endrule;
  endalias;
endruleset;
 
ruleset n: Node do
  choose midx: Net[n] do
    alias chan: Net[n] do
    alias msg: chan[midx] do
    alias box: InBox[n] do
    -- Pick a random message in the network and deliver it
    rule "receive-net"
      (isundefined(box[msg.vc].mtype))
      ==>
        if IsMember(n, Home)
        then
          HomeReceive(msg);
        else
          ProcReceive(msg, n);
        endif;

        if ! msg_processed
        then
          -- The node refused the mesage, stick it in the InBox to block the VC.
          box[msg.vc] := msg;
        endif;
        MultiSetRemove(midx, chan);

    endrule;
    endalias;
    endalias;
    endalias;
  endchoose;

  -- Try to deliver a message from a blocked VC; perhaps the node can handle it now
  ruleset vc: VCType do
    rule "receive-blocked-vc"
      (! isundefined(InBox[n][vc].mtype))
      ==>
        if IsMember(n, Home)
        then
          HomeReceive(InBox[n][vc]);
        else
          ProcReceive(InBox[n][vc], n);
        endif;
  
        if msg_processed
        then
          -- Message has been handled, forget it
          undefine InBox[n][vc];
        endif;
    endrule;
  endruleset;


endruleset;
 
 ----------------------------------------------------------------------
 -- Startstate
 ----------------------------------------------------------------------
 startstate
   For v: Value do
     HomeNode.state := H_I;
     undefine HomeNode.owner;
     HomeNode.val := v;
   endfor;
   LastWrite := HomeNode.val;
 
   for i: Proc do
     Procs[i].state := P_I;
     undefine Procs[i].val;
     Procs[i].ack := 0;
   endfor;
 
   undefine Net;
 endstartstate;
 
 
----------------------------------------------------------------------
-- Invariants
----------------------------------------------------------------------
 
invariant "Invalid implies empty owner"
  HomeNode.state = H_I
  ->
  IsUndefined(HomeNode.owner);

invariant "value in memory matches value of last write, when invalid"
  HomeNode.state = H_I 
  ->
  HomeNode.val = LastWrite;

invariant "values in valid state match last write"
  forall n : Proc do  
    Procs[n].state = P_S | Procs[n].state = P_M | Procs[n].state = P_E
    ->
    Procs[n].val = LastWrite 
    --LastWrite is updated whenever a new value is created 
  end;
  
invariant "value is undefined while invalid"
  forall n : Proc do  
    Procs[n].state = P_I
    ->
    IsUndefined(Procs[n].val)
  end;
 
 
invariant "modified implies empty sharers list"
  HomeNode.state = H_M
  ->
  MultiSetCount(i: HomeNode.sharers, true) = 0;

invariant "exclusive implies empty sharers list"
  HomeNode.state = H_E
  ->
  MultiSetCount(i: HomeNode.sharers, true) = 0;
 
invariant "Invalid implies empty sharer list"
  HomeNode.state = H_I
  ->
  MultiSetCount(i: HomeNode.sharers, true) = 0;
 
 
invariant "values in memory matches value of last write, when shared or invalid"
  forall n : Proc do  
    HomeNode.state = H_S | HomeNode.state = H_I
    ->
    HomeNode.val = LastWrite
  end;
 
invariant "values in shared state match memory"
  forall n : Proc do  
    HomeNode.state = H_S & Procs[n].state = P_S
    ->
    HomeNode.val = Procs[n].val
  end;
