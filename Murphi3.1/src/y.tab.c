/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 75 "mu.y" /* yacc.c:339  */


/* include files */
#include "mu.h"

/* global variables */
int enumval = 1;               /* current value for enum. */
int shiftenum=0;
enumtypedecl *enumdecl = NULL; /* old enumeration decl. */
bool hasreturn = FALSE;        /* whether currently-defined function has
				  a return statement yet. */
int localscope = 0;            /* all scopes within localscope will have
				* a scope value greater than localscope. */
bool sideeffects = FALSE;
typedecl *returntype = NULL;
static ste *curfields = NULL;
extern typedecl *switchtype;
extern int offset;
lexlist *not_yet_declared = NULL;
int paramclass = 0;
bool hasrule = FALSE;
bool has_startstate = FALSE;

/* variables for union */
static stelist *unionmembers = NULL;



#line 95 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 258,
    PROGRAM = 259,
    PROCESS = 260,
    PROCEDURE = 261,
    ENDPROCEDURE = 262,
    FUNCTION = 263,
    ENDFUNCTION = 264,
    RULE = 265,
    ENDRULE = 266,
    RULESET = 267,
    ENDRULESET = 268,
    ALIAS = 269,
    ENDALIAS = 270,
    IF = 271,
    THEN = 272,
    ELSIF = 273,
    ELSE = 274,
    ENDIF = 275,
    SWITCH = 276,
    CASE = 277,
    ENDSWITCH = 278,
    FOR = 279,
    FORALL = 280,
    EXISTS = 281,
    IN = 282,
    DO = 283,
    ENDFOR = 284,
    ENDFORALL = 285,
    ENDEXISTS = 286,
    WHILE = 287,
    ENDWHILE = 288,
    RETURN = 289,
    TO = 290,
    bEGIN = 291,
    BY = 292,
    OLDEND = 293,
    LONGARROW = 294,
    DOTDOT = 295,
    ASSIGN = 296,
    CLEAR = 297,
    ERROR = 298,
    ASSERT = 299,
    PUT = 300,
    CONST = 301,
    TYPE = 302,
    VAR = 303,
    ENUM = 304,
    INTERLEAVED = 305,
    RECORD = 306,
    ARRAY = 307,
    OF = 308,
    ENDRECORD = 309,
    STARTSTATE = 310,
    ENDSTARTSTATE = 311,
    INVARIANT = 312,
    TRACEUNTIL = 313,
    STRING = 314,
    ID = 315,
    INTCONST = 316,
    FAIRNESS = 317,
    LIVENESS = 318,
    ALWAYS = 319,
    EVENTUALLY = 320,
    UNTIL = 321,
    FAILED = 322,
    UNFAIR = 323,
    LIVENESSSET = 324,
    ENDLIVENESSSET = 325,
    FAIRNESSSET = 326,
    ENDFAIRNESSSET = 327,
    SCALARSET = 328,
    ISMEMBER = 329,
    UNDEFINE = 330,
    ISUNDEFINED = 331,
    UNDEFINED = 332,
    UNION = 333,
    MULTISET = 334,
    MULTISETREMOVE = 335,
    MULTISETREMOVEPRED = 336,
    MULTISETADD = 337,
    MULTISETCOUNT = 338,
    CHOOSE = 339,
    ENDCHOOSE = 340,
    IMPLIES = 341,
    NOT = 342,
    LEQ = 343,
    NEQ = 344,
    GEQ = 345
  };
#endif
/* Tokens.  */
#define END 258
#define PROGRAM 259
#define PROCESS 260
#define PROCEDURE 261
#define ENDPROCEDURE 262
#define FUNCTION 263
#define ENDFUNCTION 264
#define RULE 265
#define ENDRULE 266
#define RULESET 267
#define ENDRULESET 268
#define ALIAS 269
#define ENDALIAS 270
#define IF 271
#define THEN 272
#define ELSIF 273
#define ELSE 274
#define ENDIF 275
#define SWITCH 276
#define CASE 277
#define ENDSWITCH 278
#define FOR 279
#define FORALL 280
#define EXISTS 281
#define IN 282
#define DO 283
#define ENDFOR 284
#define ENDFORALL 285
#define ENDEXISTS 286
#define WHILE 287
#define ENDWHILE 288
#define RETURN 289
#define TO 290
#define bEGIN 291
#define BY 292
#define OLDEND 293
#define LONGARROW 294
#define DOTDOT 295
#define ASSIGN 296
#define CLEAR 297
#define ERROR 298
#define ASSERT 299
#define PUT 300
#define CONST 301
#define TYPE 302
#define VAR 303
#define ENUM 304
#define INTERLEAVED 305
#define RECORD 306
#define ARRAY 307
#define OF 308
#define ENDRECORD 309
#define STARTSTATE 310
#define ENDSTARTSTATE 311
#define INVARIANT 312
#define TRACEUNTIL 313
#define STRING 314
#define ID 315
#define INTCONST 316
#define FAIRNESS 317
#define LIVENESS 318
#define ALWAYS 319
#define EVENTUALLY 320
#define UNTIL 321
#define FAILED 322
#define UNFAIR 323
#define LIVENESSSET 324
#define ENDLIVENESSSET 325
#define FAIRNESSSET 326
#define ENDFAIRNESSSET 327
#define SCALARSET 328
#define ISMEMBER 329
#define UNDEFINE 330
#define ISUNDEFINED 331
#define UNDEFINED 332
#define UNION 333
#define MULTISET 334
#define MULTISETREMOVE 335
#define MULTISETREMOVEPRED 336
#define MULTISETADD 337
#define MULTISETCOUNT 338
#define CHOOSE 339
#define ENDCHOOSE 340
#define IMPLIES 341
#define NOT 342
#define LEQ 343
#define NEQ 344
#define GEQ 345

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 104 "mu.y" /* yacc.c:355  */

  TNode *node;
  expr *expr_p;		// an expression.
  designator *desig_p;  // a designator (l-value).
  decl *decl_p;		// a declaration.
  typedecl *typedecl_p; // a type declaration.
  ste *ste_p;		// a record field list or formal parameter list.
  stmt *stmt_p;		// a statement or sequence of statements.
  rule *rule_p;		// a sequence of rules.
  ifstmt *elsifs;	// a sequence of elsif clauses.
  caselist *cases;	// a sequence of cases of a switch statement.
  alias *aliases;	// a sequence of alias bindings.
  int integer;		// an integer constant.
  bool boolean;		// a boolean value--used with INTERLEAVED.
  lexid *lex;		// a lexeme, most usefully an ID.
  lexlist *lexlist_p;	// a list of lexemes.
  char *string;		// a string value.
  exprlist *exprlist_p;	// a list of expressions.

#line 335 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 352 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   102,    90,     2,
     109,   110,   100,    98,   106,    99,   111,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,   103,
      92,    94,    97,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   107,     2,   108,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,    89,   105,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    88,    91,    93,    95,    96
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   213,   213,   215,   217,   213,   238,   239,   244,   245,
     246,   251,   252,   258,   264,   273,   274,   279,   302,   303,
     304,   305,   306,   307,   308,   309,   314,   328,   327,   351,
     358,   366,   377,   386,   395,   385,   410,   411,   419,   424,
     426,   432,   439,   439,   460,   466,   478,   492,   504,   511,
     518,   519,   523,   547,   551,   563,   566,   572,   572,   590,
     595,   607,   608,   609,   615,   619,   627,   614,   641,   642,
     648,   652,   656,   676,   647,   700,   701,   706,   708,   713,
     714,   715,   716,   728,   727,   736,   736,   746,   771,   776,
     789,   790,   797,   805,   808,   817,   821,   824,   828,   832,
     836,   840,   844,   848,   852,   856,   860,   864,   868,   872,
     876,   880,   884,   888,   892,   896,   900,   904,   908,   911,
     910,   917,   916,   922,   928,   930,   927,   944,   945,   949,
     950,   955,   957,   964,   966,   968,   970,   980,   989,   998,
    1007,  1020,  1021,  1026,  1037,  1045,  1045,  1049,  1054,  1059,
    1061,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1083,  1084,  1088,  1095,  1106,  1114,
    1115,  1120,  1125,  1131,  1138,  1141,  1146,  1153,  1154,  1160,
    1166,  1159,  1177,  1178,  1183,  1194,  1199,  1206,  1205,  1216,
    1217,  1222,  1231,  1241,  1251,  1259,  1261,  1258,  1272,  1279,
    1285,  1291,  1293,  1300,  1299,  1309,  1310,  1315,  1316,  1320,
    1324,  1330,  1339,  1359,  1362,  1368,  1373,  1375,  1381,  1382,
    1383,  1384,  1385,  1388,  1390,  1396,  1395,  1416,  1417,  1420,
    1421,  1426,  1434,  1439,  1442,  1452,  1455,  1461,  1460,  1469,
    1468,  1476,  1477,  1483,  1485,  1482,  1505,  1506,  1512,  1511,
    1528,  1529,  1540
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "PROGRAM", "PROCESS", "PROCEDURE",
  "ENDPROCEDURE", "FUNCTION", "ENDFUNCTION", "RULE", "ENDRULE", "RULESET",
  "ENDRULESET", "ALIAS", "ENDALIAS", "IF", "THEN", "ELSIF", "ELSE",
  "ENDIF", "SWITCH", "CASE", "ENDSWITCH", "FOR", "FORALL", "EXISTS", "IN",
  "DO", "ENDFOR", "ENDFORALL", "ENDEXISTS", "WHILE", "ENDWHILE", "RETURN",
  "TO", "bEGIN", "BY", "OLDEND", "LONGARROW", "DOTDOT", "ASSIGN", "CLEAR",
  "ERROR", "ASSERT", "PUT", "CONST", "TYPE", "VAR", "ENUM", "INTERLEAVED",
  "RECORD", "ARRAY", "OF", "ENDRECORD", "STARTSTATE", "ENDSTARTSTATE",
  "INVARIANT", "TRACEUNTIL", "STRING", "ID", "INTCONST", "FAIRNESS",
  "LIVENESS", "ALWAYS", "EVENTUALLY", "UNTIL", "FAILED", "UNFAIR",
  "LIVENESSSET", "ENDLIVENESSSET", "FAIRNESSSET", "ENDFAIRNESSSET",
  "SCALARSET", "ISMEMBER", "UNDEFINE", "ISUNDEFINED", "UNDEFINED", "UNION",
  "MULTISET", "MULTISETREMOVE", "MULTISETREMOVEPRED", "MULTISETADD",
  "MULTISETCOUNT", "CHOOSE", "ENDCHOOSE", "'?'", "':'", "IMPLIES", "'|'",
  "'&'", "NOT", "'<'", "LEQ", "'='", "NEQ", "GEQ", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "';'", "'{'", "'}'", "','", "'['", "']'", "'('",
  "')'", "'.'", "$accept", "prog", "$@1", "$@2", "$@3", "decls", "decl",
  "constDecls", "semi", "constDecl", "typeDecls", "typeDecl", "typeExpr",
  "typeid", "enumtype", "$@4", "enums", "subrangetype", "recordtype", "@5",
  "@6", "endrecord", "optInterleaved", "fields", "field", "@7",
  "fieldtail", "arraytype", "multisettype", "scalarsettype", "uniontype",
  "unionlist", "unionlistelt", "varDecls", "varDecl", "@8", "vardecltail",
  "procDecls", "procDecl", "$@9", "@10", "$@11", "endprocedure",
  "funcDecl", "$@12", "@13", "@14", "@15", "endfunction", "optformals",
  "formals", "formal", "@16", "@17", "formalrest", "formaltail",
  "optdecls", "designator", "expr", "$@18", "$@19", "$@20", "$@21",
  "endforall", "endexists", "actuals", "exprlist", "quantifier",
  "quantifiers", "do", "optBy", "optstmts", "@22", "stmts", "stmt",
  "assignment", "ifstmt", "endif", "optElses", "elsif", "optElse",
  "whilestmt", "endwhile", "switchstmt", "@23", "@24", "endswitch",
  "optCases", "case", "forstmt", "$@25", "endfor", "proccall", "clearstmt",
  "undefinestmt", "multisetaddstmt", "multisetremovestmt", "$@26", "$@27",
  "errorstmt", "assertstmt", "putstmt", "aliasstmt", "$@28", "endalias",
  "aliases", "alias", "returnstmt", "optretexpr", "rules", "rule",
  "simplerule", "@29", "optFair", "endrule", "optCondition", "optString",
  "optPriority", "aliasrule", "$@30", "ruleset", "$@31", "endruleset",
  "choose", "$@32", "$@33", "endchoose", "startstate", "@34",
  "endstartstate", "invariant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    63,    58,   341,   124,
      38,   342,    60,   343,    61,   344,   345,    62,    43,    45,
      42,    47,    37,    59,   123,   125,    44,    91,    93,    40,
      41,    46
};
# endif

#define YYPACT_NINF -328

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-328)))

#define YYTABLE_NINF -233

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-233)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -328,    33,  -328,  -328,   194,  -328,  -328,  -328,  -328,  -328,
     -25,    12,    67,   270,    -8,     0,    64,     0,     0,   102,
     155,   160,   138,  -328,  -328,   558,  -328,  -328,   223,  -328,
    -328,   -44,  -328,  -328,  -328,    46,  -328,  -328,  -328,   177,
    -328,  -328,     0,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   136,  -328,   145,   148,   154,   558,   558,   558,
     558,   114,   983,  -328,  -328,  -328,    23,   168,   186,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   790,
     223,   221,  -328,   182,   183,  -328,   232,   234,   235,   177,
    -328,   558,   238,   380,   234,   234,   120,  -328,   240,   240,
    -328,   801,  -328,  -328,   835,   558,   243,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   200,  -328,   198,   558,   -18,   201,   558,  -328,
     -44,   108,   108,  -328,   177,   -20,   204,   -13,   222,    41,
    -328,   127,   983,   224,  -328,   -13,   -13,  -328,  -328,   983,
     122,  -328,    58,    72,   250,  -328,   911,  -328,   966,  1015,
    1028,   801,  1039,  1039,  1039,  1039,  1039,  1039,   151,   151,
    -328,  -328,  -328,   252,  -328,   223,   854,  -328,  -328,  -328,
      94,   207,   558,   983,  -328,  -328,   206,   141,  -328,   258,
     209,   324,   558,   223,   234,  -328,  -328,   138,   558,   235,
     235,   138,   142,    22,   240,   558,   558,   467,  -328,   223,
    -328,   233,  -328,   558,  -328,    48,  -328,   215,  -328,  -328,
     -18,   -18,   928,   258,     0,   276,   108,   -42,  -328,  -328,
     773,  -328,   739,  -328,  -328,   163,   983,  -328,  -328,    68,
    -328,    25,   741,   114,   576,   593,  -328,   983,   216,   240,
    1000,  -328,  -328,   268,     6,  -328,   269,   278,  -328,  -328,
     281,  -328,  -328,  -328,  -328,   223,   279,  -328,   249,  -328,
     127,   558,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   558,   558,  -328,   558,   427,   240,   282,   558,
     472,   136,   240,   237,   244,   245,   -31,     0,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,   -13,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,    95,  -328,  -328,  -328,   283,  -328,    43,   223,
     223,   127,  -328,   -42,   223,    37,   756,   235,   610,   983,
     234,   652,   983,  -328,   114,  -328,   818,  -328,   983,  -328,
     114,   558,  -328,   240,   512,   741,   138,  -328,  -328,   223,
     284,  -328,  -328,  -328,  -328,  -328,     0,   109,   558,  -328,
      41,   139,  -328,   -13,    19,  -328,   945,   292,   101,  -328,
     983,  -328,    17,   558,  -328,    43,   228,  -328,  -328,  -328,
    -328,   983,    70,   248,  -328,    21,    20,   240,   255,   240,
    -328,  -328,  -328,   873,  -328,   230,   127,    68,   558,    38,
      29,   248,  -328,   121,    27,  -328,  -328,  -328,   106,   240,
     116,  -328,  -328,  -328,     0,  -328,  -328,   627,  -328,  -328,
    -328,  -328,  -328,   552,    31,  -328,  -328,  -328,  -328,  -328,
     114,  -328,  -328,    54,   139,    49,  -328,  -328,  -328,   251,
     195,  -328,   115,   558,  -328,  -328,     0,  -328,   892,  -328,
    -328
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     7,     1,     3,    12,    16,    56,    63,     6,
       8,     9,    10,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,    13,    11,     0,    15,
      55,     0,    64,    70,   223,   228,   239,   237,   248,   234,
     243,     5,   217,   218,   219,   220,   224,   221,   222,   123,
     119,   121,    92,   113,     0,     0,     0,     0,     0,     0,
       0,   114,    14,    27,    38,    38,    92,     0,     0,    38,
      17,    18,    19,    20,    21,    22,    25,    23,    24,     0,
       0,     0,    58,     0,     0,   227,   236,     0,     0,   234,
     233,     0,     0,     0,     0,     0,     0,   115,     0,     0,
     124,    99,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,    60,
       0,    78,    78,   235,   234,     0,   140,     0,     0,     0,
     210,    91,   252,     0,   215,     0,     0,   136,   132,   134,
       0,    92,     0,     0,     0,   118,     0,    94,     0,    96,
      97,    98,   100,   101,   104,   105,   103,   102,   106,   107,
     110,   111,   112,     0,    34,     0,     0,    52,    54,    53,
       0,     0,     0,    32,    59,    83,     0,    77,    81,     0,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
     208,     0,     0,   145,     0,     0,     0,     0,   131,     0,
     116,     0,    93,     0,    31,     0,    42,     0,    48,    49,
       0,     0,     0,     0,     0,    85,    80,     0,    86,    71,
       0,   225,     0,   137,   139,     0,   211,   209,   207,     0,
      90,     0,     0,   244,     0,     0,   135,   133,     0,     0,
      95,    30,    28,     0,     0,    41,     0,     0,    50,    51,
       0,    84,    65,    82,    79,     0,     0,    87,     0,   231,
      91,     0,   242,   241,   240,   206,   205,   238,   251,   250,
     249,   203,     0,     0,   187,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,   146,   150,   151,
     152,   153,   154,   155,   156,   157,   163,   164,   165,   158,
     159,   160,   161,   162,     0,   128,   127,   120,   130,   129,
     122,   117,     0,    29,    37,    36,    40,    35,     0,     0,
       0,    91,    89,     0,     0,   145,   144,     0,     0,   179,
       0,     0,   213,   212,   192,   199,   234,   202,   201,   191,
     193,     0,   195,     0,     0,   149,     0,   125,    39,     0,
       0,    43,    46,    47,    66,    88,     0,     0,     0,   138,
       0,   145,   180,     0,   145,   200,     0,     0,     0,   167,
     166,   148,     0,     0,    45,     0,   145,    72,   230,   229,
     226,   143,   145,   175,   185,   145,     0,     0,     0,     0,
     247,   246,   245,     0,    44,     0,    91,     0,     0,   145,
       0,   175,   172,   175,     0,   178,   177,   176,     0,     0,
       0,   126,    69,    68,     0,    73,   204,     0,   174,   170,
     169,   168,   171,     0,     0,   184,   190,   189,   188,   198,
     196,   194,    67,   145,   145,     0,   183,   182,   181,     0,
       0,   173,   145,     0,    76,    75,     0,   186,     0,    74,
     197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,  -328,   353,  -328,  -328,   -15,  -328,
    -328,  -328,   -74,  -328,  -115,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   169,  -328,    35,  -328,   -26,  -328,  -328,   -97,
    -328,  -328,    59,  -328,  -328,  -328,   246,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   231,
    -328,    61,  -328,  -328,   150,    32,  -265,   -82,   -21,  -328,
    -328,  -328,  -328,  -328,  -328,    73,   -59,  -328,   -81,  -127,
    -328,  -327,  -328,  -328,    24,  -328,  -328,  -328,   -36,  -328,
     -35,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,   -30,    45,    89,  -328,  -328,   -86,
    -328,  -328,  -328,  -328,  -328,  -328,   -88,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,    22,   202,     9,    10,   200,    15,
      11,    17,    70,    71,    72,   122,   215,    73,    74,   174,
     216,   327,   123,   254,   255,   256,   361,    75,    76,    77,
      78,   180,   181,    12,    18,    19,    82,    13,    23,    83,
     331,   386,   424,    24,    84,   268,   406,   443,   456,   186,
     187,   188,   223,   189,   228,   267,   203,    61,    79,    94,
      95,   154,   383,   317,   320,    97,   150,   136,   137,   197,
     369,   241,   242,   297,   298,   299,   300,   431,   410,   411,
     412,   301,   417,   302,   372,   394,   448,   413,   435,   303,
     340,   438,   304,   305,   306,   307,   308,   377,   449,   309,
     310,   311,   312,   337,   277,   139,   140,   313,   343,    41,
      42,    43,   270,    86,   390,   231,    91,   134,    44,    88,
      45,    87,   274,    46,    92,   314,   402,    47,    89,   280,
      48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   141,    29,    30,    62,   335,   129,   144,   367,   324,
     354,   178,   201,   145,   146,   195,   152,   153,   205,   206,
     400,   192,  -147,   415,  -147,  -147,   -26,    93,   278,   179,
     436,    63,   429,     3,   446,    14,   101,   102,   103,   104,
    -147,  -147,   177,    80,   393,   265,   191,   396,  -147,   430,
    -147,   -26,  -147,   416,   447,    67,   437,  -147,  -147,   405,
     325,  -147,    81,  -147,   266,   407,   364,   193,   414,   195,
     142,   275,    16,  -147,   196,   149,   105,   -26,  -147,    25,
     106,   279,   428,   276,   156,  -147,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   217,   401,    26,   176,   178,   178,   183,   251,    26,
     -26,   235,   388,   234,    85,   239,   450,   451,  -147,   233,
     389,    49,   243,   179,   179,   457,   -26,   -57,   196,   -26,
     359,   -26,    96,   -26,  -147,   248,   452,  -147,  -147,    34,
     409,   425,  -147,   433,    26,    50,    51,   199,    35,   360,
      36,    28,    37,   252,   253,   207,   185,  -147,  -147,  -147,
     296,   222,    31,    -7,   209,   105,   272,   322,   -85,   106,
     230,   232,   226,    -7,    -7,    -7,   273,   236,   240,   105,
      52,    53,   210,   106,   244,   245,   247,   356,     5,     6,
       7,   332,   250,    38,    54,    39,    55,   147,   454,   219,
     220,   357,   105,    56,   455,   344,   106,   399,   105,   262,
     350,    57,   106,   105,   374,    32,   439,   106,    58,    59,
      33,   105,    40,   105,    49,   106,   441,   106,   207,    60,
     148,  -147,   208,   422,   124,  -147,    90,   423,   127,   326,
       5,     6,     7,   392,    26,    96,   395,   225,    50,    51,
     336,   119,   120,   121,    98,   362,   363,    99,   375,   373,
     366,   338,   339,   100,   341,   342,   408,   409,   346,   348,
     382,   378,    63,   296,    64,    65,    20,   125,    21,   258,
     259,   130,   355,    66,    53,   384,   263,   264,   237,   238,
     126,   131,   132,   133,   135,   138,    67,    54,   143,    55,
     151,    68,    69,   157,   173,   175,    56,   194,   182,   198,
     211,   204,   214,   221,    57,   418,   224,   420,   227,   229,
     249,    58,    59,   257,   185,    49,   321,  -232,   323,   328,
     376,   329,    60,   380,   330,  -232,   334,   440,  -232,   333,
    -232,   345,   419,   -42,   385,  -232,   351,   391,  -232,    50,
      51,   387,   398,   352,   353,     4,  -232,   453,  -232,   404,
    -232,   358,   403,   190,   349,   365,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,   261,   445,   432,   184,   426,   434,   381,
    -216,    34,   370,  -216,    52,    53,     0,   427,     0,     0,
      35,     0,    36,  -216,    37,  -216,     0,     0,    54,  -232,
      55,     0,     0,     0,  -232,  -232,  -232,    56,     0,   442,
       0,     0,   149,     0,     0,    57,     0,     0,     0,     0,
       0,     0,    58,    59,     0,     0,     0,     0,    49,     0,
    -214,     0,   458,    60,  -214,    38,  -214,    39,  -214,     0,
       0,   459,  -214,     0,     0,  -214,  -214,  -214,     0,  -214,
    -214,     0,    50,    51,     0,     0,  -214,     0,     0,     0,
    -214,     0,     0,     0,    40,  -216,     0,     0,    49,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -214,     0,     0,     0,    52,    53,     0,
       0,     0,    50,    51,     0,     0,     0,    50,    51,     0,
       0,    54,     0,    55,     0,     0,     0,     0,     0,     0,
      56,     0,     0,    49,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,    58,    59,    52,    53,     0,
    -214,   347,    52,    53,     0,     0,    60,    50,    51,     0,
       0,    54,     0,    55,   246,     0,    54,     0,    55,     0,
      56,     0,     0,    49,     0,    56,     0,     0,    57,    49,
       0,     0,     0,    57,     0,    58,    59,     0,     0,     0,
      58,    59,    52,    53,     0,     0,    60,    50,    51,   315,
       0,    60,     0,    50,    51,     0,    54,     0,    55,   379,
       0,     0,     0,     0,     0,    56,   318,     0,     0,     0,
       0,     0,     0,    57,     0,     0,   316,     0,     0,     0,
      58,    59,    52,    53,     0,     0,     0,     0,    52,    53,
       0,    60,     0,     0,   319,     0,    54,   371,    55,   147,
       0,     0,    54,     0,    55,    56,     0,     0,     0,     0,
       0,    56,     0,    57,   444,     0,     0,     0,     0,    57,
      58,    59,     0,     0,     0,     0,    58,    59,     0,     0,
       0,    60,   107,     0,   108,   109,   110,    60,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   107,
     195,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   107,     0,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   107,     0,   108,   109,   110,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   196,
     108,   109,   110,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   281,     0,   282,     0,     0,
       0,     0,   283,     0,     0,   284,     0,     0,     0,     0,
       0,     0,     0,   285,   271,   286,     0,     0,     0,     0,
       0,     0,     0,   287,   288,   289,   290,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,     0,     0,     0,   292,     0,     0,     0,
       0,   293,   294,   295,     0,   107,     0,   108,   109,   110,
     128,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   107,     0,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   107,
       0,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   107,    90,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   107,     0,   108,   109,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   107,     0,   108,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
     107,     0,   108,   109,   110,   155,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,   107,
       0,   108,   109,   110,   218,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     0,     0,   107,     0,
     108,   109,   110,   421,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     0,     0,   107,     0,   108,
     109,   110,   460,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   107,     0,   108,   109,   110,   212,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   107,     0,   108,   109,   110,   260,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,   397,   107,   213,   108,   109,   110,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   107,
       0,   108,   109,   110,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,  -233,     0,   108,   109,
     110,     0,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,  -233,   109,   110,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   110,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,  -233,  -233,  -233,  -233,  -233,  -233,   117,   118,   119,
     120,   121
};

static const yytype_int16 yycheck[] =
{
      15,    89,    17,    18,    25,   270,    80,    93,   335,     3,
      41,   126,   139,    94,    95,    28,    98,    99,   145,   146,
       3,    41,     3,     3,     3,     3,     3,    42,     3,   126,
       3,    49,     3,     0,     3,    60,    57,    58,    59,    60,
       3,     3,    60,    87,   371,    87,   134,   374,    11,    20,
      29,    28,    33,    33,    23,    73,    29,     3,    20,   386,
      54,    23,   106,     9,   106,   392,   331,    87,   395,    28,
      91,     3,    60,     3,    87,    96,   107,    54,    56,    87,
     111,    56,   409,    15,   105,    15,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   175,    85,   103,   125,   220,   221,   128,    60,   103,
      87,   197,     3,   194,    68,   201,   443,   444,     3,   193,
      11,     1,   204,   220,   221,   452,   103,    60,    87,   106,
      87,   108,   109,   110,    19,   209,    87,    22,    23,     1,
      19,   406,     3,    22,   103,    25,    26,   106,    10,   106,
      12,    87,    14,   105,   106,   106,    48,    18,    19,    20,
     242,   182,    60,    36,   106,   107,     3,   249,    60,   111,
     191,   192,   187,    46,    47,    48,    13,   198,    36,   107,
      60,    61,   110,   111,   205,   206,   207,   314,    46,    47,
      48,   265,   213,    55,    74,    57,    76,    77,     3,   105,
     106,   106,   107,    83,     9,   287,   111,   106,   107,   224,
     292,    91,   111,   107,   341,    60,   110,   111,    98,    99,
      60,   107,    84,   107,     1,   111,   110,   111,   106,   109,
     110,     3,   110,     3,    65,     7,    59,     7,    69,   254,
      46,    47,    48,   370,   103,   109,   373,   106,    25,    26,
     271,   100,   101,   102,   109,   329,   330,   109,   346,   340,
     334,   282,   283,   109,   285,   286,    18,    19,   289,   290,
     356,   353,    49,   355,    51,    52,     6,   109,     8,   220,
     221,    60,   297,    60,    61,   359,   225,   226,   199,   200,
     104,   109,   109,    61,    60,    60,    73,    74,    60,    76,
      60,    78,    79,    60,   104,   107,    83,   103,   107,    87,
      60,    87,    60,   106,    91,   397,   110,   399,    60,   110,
      87,    98,    99,   108,    48,     1,   110,     3,    60,    60,
     351,    53,   109,   354,    53,    11,    87,   419,    14,    60,
      16,    59,    87,    60,    60,    21,   109,   368,    24,    25,
      26,   366,    60,   109,   109,     2,    32,   106,    34,   385,
      36,   326,   383,   132,   291,   333,    42,    43,    44,    45,
      46,    47,    48,   223,   433,   411,   130,   407,   413,   355,
       0,     1,   337,     3,    60,    61,    -1,   408,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    -1,    74,    75,
      76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,   424,
      -1,    -1,   433,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,   453,   109,     7,    55,     9,    57,    11,    -1,
      -1,   456,    15,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    84,    85,    -1,    -1,     1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    25,    26,    -1,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,     1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    60,    61,    -1,
     103,    59,    60,    61,    -1,    -1,   109,    25,    26,    -1,
      -1,    74,    -1,    76,    77,    -1,    74,    -1,    76,    -1,
      83,    -1,    -1,     1,    -1,    83,    -1,    -1,    91,     1,
      -1,    -1,    -1,    91,    -1,    98,    99,    -1,    -1,    -1,
      98,    99,    60,    61,    -1,    -1,   109,    25,    26,     3,
      -1,   109,    -1,    25,    26,    -1,    74,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    30,    -1,    -1,    -1,
      98,    99,    60,    61,    -1,    -1,    -1,    -1,    60,    61,
      -1,   109,    -1,    -1,    31,    -1,    74,    17,    76,    77,
      -1,    -1,    74,    -1,    76,    83,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    91,    17,    -1,    -1,    -1,    -1,    91,
      98,    99,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,
      -1,   109,    86,    -1,    88,    89,    90,   109,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    86,
      28,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    86,    -1,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    86,    -1,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    14,    -1,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    35,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    86,    -1,    88,    89,    90,
      40,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    86,    -1,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    86,
      -1,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    86,    59,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    86,    -1,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    86,    -1,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      86,    -1,    88,    89,    90,   110,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    86,
      -1,    88,    89,    90,   110,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    86,    -1,
      88,    89,    90,   110,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    86,    -1,    88,
      89,    90,   110,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    86,    -1,    88,    89,    90,   108,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    86,    -1,    88,    89,    90,   108,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,   106,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    86,
      -1,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    86,    -1,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   113,   114,     0,   117,    46,    47,    48,   115,   118,
     119,   122,   145,   149,    60,   121,    60,   123,   146,   147,
       6,     8,   116,   150,   155,    87,   103,   120,    87,   120,
     120,    60,    60,    60,     1,    10,    12,    14,    55,    57,
      84,   221,   222,   223,   230,   232,   235,   239,   242,     1,
      25,    26,    60,    61,    74,    76,    83,    91,    98,    99,
     109,   169,   170,    49,    51,    52,    60,    73,    78,    79,
     124,   125,   126,   129,   130,   139,   140,   141,   142,   170,
      87,   106,   148,   151,   156,    68,   225,   233,   231,   240,
      59,   228,   236,   120,   171,   172,   109,   177,   109,   109,
     109,   170,   170,   170,   170,   107,   111,    86,    88,    89,
      90,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   127,   134,   134,   109,   104,   134,    40,   124,
      60,   109,   109,    61,   229,    60,   179,   180,    60,   217,
     218,   228,   170,    60,   221,   180,   180,    77,   110,   170,
     178,    60,   169,   169,   173,   110,   170,    60,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   104,   131,   107,   170,    60,   126,   141,
     143,   144,   107,   170,   148,    48,   161,   162,   163,   165,
     161,   228,    41,    87,   103,    28,    87,   181,    87,   106,
     120,   181,   117,   168,    87,   181,   181,   106,   110,   106,
     110,    60,   108,    87,    60,   128,   132,   124,   110,   105,
     106,   106,   170,   164,   110,   106,   120,    60,   166,   110,
     170,   227,   170,   124,   180,   221,   170,   218,   218,   221,
      36,   183,   184,   169,   170,   170,    77,   170,   124,    87,
     170,    60,   105,   106,   135,   136,   137,   108,   144,   144,
     108,   166,   120,   163,   163,    87,   106,   167,   157,    39,
     224,    35,     3,    13,   234,     3,    15,   216,     3,    56,
     241,    14,    16,    21,    24,    32,    34,    42,    43,    44,
      45,    60,    75,    80,    81,    82,   169,   185,   186,   187,
     188,   193,   195,   201,   204,   205,   206,   207,   208,   211,
     212,   213,   214,   219,   237,     3,    30,   175,     3,    31,
     176,   110,   169,    60,     3,    54,   120,   133,    60,    53,
      53,   152,   124,    60,    87,   168,   170,   215,   170,   170,
     202,   170,   170,   220,   169,    59,   170,    59,   170,   177,
     169,   109,   109,   109,    41,   120,   181,   106,   136,    87,
     106,   138,   124,   124,   168,   167,   124,   183,    37,   182,
     217,    17,   196,   180,   181,   228,   170,   209,   169,    77,
     170,   186,   221,   174,   124,    60,   153,   120,     3,    11,
     226,   170,   181,   183,   197,   181,   183,   106,    60,   106,
       3,    85,   238,   170,   138,   183,   158,   183,    18,    19,
     190,   191,   192,   199,   183,     3,    33,   194,   169,    87,
     169,   110,     3,     7,   154,   168,   216,   170,   183,     3,
      20,   189,   190,    22,   192,   200,     3,    29,   203,   110,
     169,   110,   120,   159,    17,   178,     3,    23,   198,   210,
     183,   183,    87,   106,     3,     9,   160,   183,   170,   120,
     110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   114,   115,   116,   113,   117,   117,   118,   118,
     118,   119,   119,   120,   121,   122,   122,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   127,   126,   128,
     128,   128,   129,   131,   132,   130,   133,   133,   134,   135,
     135,   135,   137,   136,   138,   138,   139,   140,   141,   142,
     143,   143,   144,   144,   144,   145,   145,   147,   146,   148,
     148,   149,   149,   149,   151,   152,   153,   150,   154,   154,
     156,   157,   158,   159,   155,   160,   160,   161,   161,   162,
     162,   162,   162,   164,   163,   165,   163,   166,   167,   167,
     168,   168,   169,   169,   169,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     170,   172,   170,   170,   173,   174,   170,   175,   175,   176,
     176,   177,   177,   178,   178,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   184,   183,   183,   185,   185,
     185,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   187,   187,   188,   189,
     189,   190,   190,   191,   192,   192,   193,   194,   194,   196,
     197,   195,   198,   198,   199,   199,   200,   202,   201,   203,
     203,   204,   205,   206,   207,   209,   210,   208,   208,   211,
     212,   213,   213,   215,   214,   216,   216,   217,   217,   217,
     217,   218,   219,   220,   220,   221,   221,   221,   222,   222,
     222,   222,   222,   222,   222,   224,   223,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   231,   230,   233,
     232,   234,   234,   236,   237,   235,   238,   238,   240,   239,
     241,   241,   242
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     6,     2,     0,     2,     2,
       2,     3,     0,     1,     3,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     3,
       2,     1,     3,     0,     0,     6,     1,     1,     0,     3,
       2,     1,     0,     3,     3,     2,     7,     7,     4,     4,
       3,     3,     1,     1,     1,     3,     0,     0,     3,     3,
       2,     2,     2,     0,     0,     0,     0,    13,     1,     1,
       0,     0,     0,     0,    16,     1,     1,     1,     0,     3,
       2,     1,     3,     0,     3,     0,     2,     2,     3,     2,
       2,     0,     1,     4,     3,     5,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     1,     1,     2,     4,     6,     3,     0,
       6,     0,     6,     1,     0,     0,    10,     1,     1,     1,
       1,     3,     2,     3,     1,     3,     1,     3,     6,     3,
       1,     1,     1,     2,     0,     0,     2,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     1,
       1,     2,     1,     4,     2,     0,     5,     1,     1,     0,
       0,     7,     1,     1,     2,     0,     4,     0,     6,     1,
       1,     2,     2,     2,     6,     0,     0,    10,     6,     2,
       3,     2,     2,     0,     6,     1,     1,     3,     2,     3,
       1,     3,     2,     1,     0,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     9,     1,     0,     1,
       1,     2,     0,     1,     0,     1,     0,     0,     6,     0,
       6,     1,     1,     0,     0,     9,     1,     1,     0,     6,
       1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 213 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 215 "mu.y" /* yacc.c:1646  */
    { theprog->globals = symtab->getscope(); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 217 "mu.y" /* yacc.c:1646  */
    { theprog->procedures = symtab->getscope(); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 219 "mu.y" /* yacc.c:1646  */
    {
			  /* normally, the popscope() changes the offset
			   * so we have to save and restore the offset we want. */
			  theprog->bits_in_world = offset;

			  theprog->rules = (yyvsp[0].rule_p);
			  Error.CondError( !hasrule,
					  "Program has no rules.");
			  Error.CondError( !has_startstate,
					  "Program has no startstates.");

			  symtab->popscope();
			  Error.CondError( symtab->topscope() != 0,
					  "Internal: Didn't pop enough scopes.");
			}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 265 "mu.y" /* yacc.c:1646  */
    {
			  decl *tconst = new constdecl((yyvsp[0].expr_p));
			  symtab->declare( (yyvsp[-2].lex), tconst );
			}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 280 "mu.y" /* yacc.c:1646  */
    {
			  // declare new type
			  ste * s = symtab->declare((yyvsp[-2].lex),(yyvsp[0].typedecl_p));
			  // Should this be declare_global?

			  // scalarset extension
  			  // if the new type is a scalarset, 
			  // reset id strings and put it into scalarsetlist
			  if ((yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset)
			    {	
			      // reset id strings
 			      ((scalarsettypedecl *) (yyvsp[0].typedecl_p))->setupid((yyvsp[-2].lex));

			      // put into scalarsetlist
 			      if (((scalarsettypedecl *)(yyvsp[0].typedecl_p))->getsize() > 1) 
				theprog->symmetry.add(s);
			    }
			}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 315 "mu.y" /* yacc.c:1646  */
    {
			  decl *t = (typedecl *)symtab->lookup((yyvsp[0].lex))->getvalue();
			  if ( Error.CondError( t->getclass() != decl::Type,
					 "%s is not a type name.",
					 (yyvsp[0].lex)->getname() ) )
			    (yyval.typedecl_p) = errortype;
			  else (yyval.typedecl_p) = (typedecl *) t;
			}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 328 "mu.y" /* yacc.c:1646  */
    {
			  enumdecl = new enumtypedecl( enumval, enumval);
			  shiftenum = enumval;
			}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 333 "mu.y" /* yacc.c:1646  */
    {
			  enumdecl->setright( enumval - 1 );
			  enumdecl->setidvalues( symtab->getscope() );
			  (yyval.typedecl_p) = enumdecl;
			}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 352 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.ste_p) = symtab->declare((yyvsp[0].lex),
					       new constdecl(enumval++, /* -
							     shiftenum+1, */
							     enumdecl));
			}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 359 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.ste_p) = symtab->declare((yyvsp[0].lex),
					       new constdecl(enumval++, /* -
							     shiftenum+1, */
							     enumdecl));
			  Error.Error("Murphi 2 requires elements of enums to be separated by commas.");
			}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 367 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.ste_p) = symtab->declare((yyvsp[0].lex),
					       new constdecl(enumval++, /* -
							     shiftenum+1, */
							     enumdecl));
			}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 378 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = new subrangetypedecl((yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 386 "mu.y" /* yacc.c:1646  */
    {
			  /* we _can_ have record declarations within
			   * record declarations, so we _have_ to save
			   * and restore the list. */
			  (yyval.ste_p) = curfields;
			  curfields = NULL;
			}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 395 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.integer) = offset;
			  offset = 0;
			}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 400 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = new recordtypedecl((yyvsp[-4].boolean),
						  curfields->reverse() );
			  curfields = (yyvsp[-3].ste_p);
			  offset = (yyvsp[-2].integer);
			}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 419 "mu.y" /* yacc.c:1646  */
    { (yyval.boolean) = FALSE; }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 425 "mu.y" /* yacc.c:1646  */
    {}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 431 "mu.y" /* yacc.c:1646  */
    {}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 433 "mu.y" /* yacc.c:1646  */
    {}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 439 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.lexlist_p) = not_yet_declared;
			  not_yet_declared = NULL;
			}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 444 "mu.y" /* yacc.c:1646  */
    { 
			  for (lexlist *ll = new lexlist((yyvsp[-1].lex), not_yet_declared);
			       ll != NULL;
			       ll = ll->next)
			    { /* 'hand-declare' the field. */
			      ste *tmpste = new ste( ll->l, 0, new vardecl((yyvsp[0].typedecl_p)) );
			      tmpste->next = curfields;
			      curfields = tmpste;
			    }
			  not_yet_declared = (yyvsp[-2].lexlist_p);
			}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 461 "mu.y" /* yacc.c:1646  */
    {
			  not_yet_declared = new lexlist( (yyvsp[-1].lex), not_yet_declared );
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p);
			}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 467 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p);

 			  // scalarset warning
 			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
 			    Error.Warning("The anonymous scalarset type in the field of a record is useless.");
			}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 480 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = new arraytypedecl((yyvsp[-5].boolean),(yyvsp[-3].typedecl_p),(yyvsp[0].typedecl_p));

			  // scalarset warning
			  if ( (yyvsp[-3].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[-3].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type in the index of an array is useless.");
			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type as type of the elements of an array is useless.");
			}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 494 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = new multisettypedecl((yyvsp[-5].boolean),(yyvsp[-3].expr_p),(yyvsp[0].typedecl_p));

			  // scalarset warning
			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type as type of the elements of an array is useless.");
			}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 505 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = new scalarsettypedecl((yyvsp[-1].expr_p), enumval);
			  enumval += (yyvsp[-1].expr_p)->getvalue();
			}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 512 "mu.y" /* yacc.c:1646  */
    {
 			  (yyval.typedecl_p) = new uniontypedecl(unionmembers);
			  unionmembers = NULL;                      
			}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 524 "mu.y" /* yacc.c:1646  */
    {
			  // lookup id in symtable and check whether it is a typedecl
			  ste *s = symtab->lookup((yyvsp[0].lex));
			  Error.CondError( s->getvalue()->getclass() != decl::Type,
					 "%s is not a scalarset type name.",
					 (yyvsp[0].lex)->getname() );

			  // check whether it is a scalarsettypedecl
			  typedecl *t = (typedecl *) s->getvalue();
			  Error.CondError( ( t->gettypeclass() != typedecl::Scalarset
					     && t->gettypeclass() != typedecl::Enum ),
					 "%s is not a scalarset/enum type name.",
					 (yyvsp[0].lex)->getname() );

			  // check whether it has been used in this union before
			  for (stelist * elt = unionmembers; elt != NULL; elt=elt->next)
			    Error.CondError( ( elt->s->name != NULL && elt->s->name == (yyvsp[0].lex) ),
					    "%s is used more than once in a union.",
					    (yyvsp[0].lex)->getname() );

			  // enter into list
			  unionmembers = new stelist(s, unionmembers);
			}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 548 "mu.y" /* yacc.c:1646  */
    {
			  Error.Warning("The anonymous scalarset type in the union is useless.");
			}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 552 "mu.y" /* yacc.c:1646  */
    {
			  ste * s = new ste(NULL,0,(yyvsp[0].typedecl_p)); 

			  // enter into list
			  unionmembers = new stelist(s, unionmembers);
			}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 564 "mu.y" /* yacc.c:1646  */
    { ; }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 566 "mu.y" /* yacc.c:1646  */
    { ; }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 572 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.lexlist_p) = not_yet_declared;
			  not_yet_declared = NULL;
			}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 577 "mu.y" /* yacc.c:1646  */
    { 
			  for (lexlist *ll = new lexlist((yyvsp[-1].lex), not_yet_declared);
			       ll != NULL;
			       ll = ll->next)
			    symtab->declare( ll->l,
					    new vardecl((yyvsp[0].typedecl_p)) );
			  not_yet_declared = (yyvsp[-2].lexlist_p);
			}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 591 "mu.y" /* yacc.c:1646  */
    {
			  not_yet_declared = new lexlist((yyvsp[-1].lex), not_yet_declared);
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p);
			}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 596 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p); 

			  // scalarset warning
			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type in variable declaration is useless.");
			}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 615 "mu.y" /* yacc.c:1646  */
    {
			  symtab->pushscope();
			}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 619 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.decl_p) = new procdecl();
			  ((procdecl *) (yyval.decl_p))->params =
			    symtab->dupscope()->reverse();
			  symtab->pushscope();
			  returntype = voidtype;
			}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 627 "mu.y" /* yacc.c:1646  */
    {
			  symtab->declare_global((yyvsp[-7].lex), (yyvsp[-1].decl_p));
			}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 631 "mu.y" /* yacc.c:1646  */
    {
			  ste *decls = symtab->popscope();
			  symtab->popscope(); /* Clear parameters. */
			  procdecl *proc = (procdecl *) (yyvsp[-5].decl_p);
			  proc->decls = decls;
			  proc->body = (yyvsp[-2].stmt_p);
			}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 648 "mu.y" /* yacc.c:1646  */
    {
			  symtab->pushscope();
			}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 652 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.integer) = localscope;
			}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 656 "mu.y" /* yacc.c:1646  */
    {
			  funcdecl * func = new funcdecl;
			  (yyval.decl_p) = func;
			  func->params = symtab->dupscope()->reverse();
			  if ((yyvsp[-1].typedecl_p)->name == NULL)
			    symtab->declare_global(
						   ltable.enter(
								tsprintf("_type_%d",
									 new_int()
									 )
								),
						   (yyvsp[-1].typedecl_p) );
			  func->returntype = (yyvsp[-1].typedecl_p);
			  localscope = symtab->pushscope();

			  // scalarset warning
			  if ( (yyvsp[-1].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[-1].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type as return type of a function is useless.");
			}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 676 "mu.y" /* yacc.c:1646  */
    {
			  symtab->declare_global((yyvsp[-10].lex), (yyvsp[-1].decl_p));
			  returntype = (yyvsp[-3].typedecl_p);
			  (yyval.boolean) = hasreturn;
			  hasreturn = FALSE;
			  sideeffects = FALSE;
			}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 684 "mu.y" /* yacc.c:1646  */
    {
			  ste *decls = symtab->popscope();
			  symtab->popscope(); /* remove parameters. */
			  funcdecl *func = (funcdecl *) (yyvsp[-5].decl_p);
			  func->decls = decls;
			  func->body = (yyvsp[-2].stmt_p);
			  func->sideeffects = sideeffects;
			  Error.CondError( !hasreturn,
					  "function %s never returns a value.",
					  (yyvsp[-14].lex)->getname() );
			  localscope = (yyvsp[-9].integer);
			  hasreturn = (yyvsp[-3].boolean);
			}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 707 "mu.y" /* yacc.c:1646  */
    {}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 717 "mu.y" /* yacc.c:1646  */
    {
			  Error.Error("Murphi 2 requires formal parameters to be separated by semi-colons.");
			}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 728 "mu.y" /* yacc.c:1646  */
    {
			  paramclass = VAR;
			  (yyval.lexlist_p) = not_yet_declared;
			  not_yet_declared = NULL;
			}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 734 "mu.y" /* yacc.c:1646  */
    { not_yet_declared = (yyvsp[-1].lexlist_p); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 736 "mu.y" /* yacc.c:1646  */
    {
			  paramclass = CONST;
			  (yyval.lexlist_p) = not_yet_declared;
			  not_yet_declared = NULL;
			}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 742 "mu.y" /* yacc.c:1646  */
    { not_yet_declared = (yyvsp[0].lexlist_p); }
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 747 "mu.y" /* yacc.c:1646  */
    {
			  for ( lexlist *ll = new lexlist((yyvsp[-1].lex), not_yet_declared);
			       ll != NULL;
			       ll = ll->next )
			    {
			      param *p = NULL;
			      switch ( paramclass ) {
			      case VAR:
				p = new varparam((yyvsp[0].typedecl_p));
				break;
			      case CONST:
				p = new constparam((yyvsp[0].typedecl_p));
				break;
			      default:
				p = errorparam;
				break;
			      }
			      symtab->declare(ll->l, p);
			    }
			}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 772 "mu.y" /* yacc.c:1646  */
    {
			  not_yet_declared = new lexlist((yyvsp[-1].lex), not_yet_declared);
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p);
			}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 778 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = (yyvsp[0].typedecl_p);

			  // scalarset warning
			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type in formal is useless.");
			}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 798 "mu.y" /* yacc.c:1646  */
    {
			  ste *tmpste = symtab->lookup((yyvsp[0].lex));
			  Error.CondError( ( tmpste->getvalue()->getclass() == decl::Type || 
					     tmpste->getvalue()->getclass() == decl::Proc ),
					   "Non Variable found when variable is expected.");
			  (yyval.desig_p) = tmpste->getvalue()->getdesignator(tmpste);
			}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 807 "mu.y" /* yacc.c:1646  */
    { (yyval.desig_p) = new designator ( (yyvsp[-3].desig_p), (yyvsp[-1].expr_p) ); }
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 810 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.desig_p) = new designator ( (yyvsp[-2].desig_p), (yyvsp[0].lex) );
			}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 818 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new condexpr((yyvsp[-4].expr_p),(yyvsp[-2].expr_p),(yyvsp[0].expr_p));
			}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 822 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new boolexpr(IMPLIES, (yyvsp[-2].expr_p), (yyvsp[0].expr_p)); }
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 825 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new boolexpr('|', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 829 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new boolexpr('&', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 833 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new notexpr((yyvsp[0].expr_p));
			}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 837 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new compexpr('<', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 841 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new compexpr(LEQ, (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 845 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new compexpr('>', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 849 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new compexpr(GEQ, (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 853 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new equalexpr('=', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 857 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new equalexpr(NEQ, (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 861 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new arithexpr('+', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 865 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new arithexpr('-', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 869 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new unexpr('+',(yyvsp[0].expr_p));
			}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 873 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new unexpr('-',(yyvsp[0].expr_p));
			}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 877 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new mulexpr('*', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 881 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new mulexpr('/', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 885 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new mulexpr('%', (yyvsp[-2].expr_p), (yyvsp[0].expr_p));
			}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 889 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new expr( (yyvsp[0].integer), inttype );
			}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 893 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = (yyvsp[0].desig_p);
			}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 897 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new funccall ( symtab->lookup((yyvsp[-1].lex)), (yyvsp[0].exprlist_p) );
			}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 901 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new isundefined ( (yyvsp[-1].desig_p) );
			}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 905 "mu.y" /* yacc.c:1646  */
    { 
			  (yyval.expr_p) = new ismember ( (yyvsp[-3].desig_p) , (yyvsp[-1].typedecl_p) );
			}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 909 "mu.y" /* yacc.c:1646  */
    { (yyval.expr_p) = (yyvsp[-1].expr_p); }
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 911 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 913 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new quantexpr( FORALL, symtab->popscope(), (yyvsp[-1].expr_p) );
			}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 917 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 919 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new quantexpr( EXISTS, symtab->popscope(), (yyvsp[-1].expr_p) );
			}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 923 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = error_expr;
			  /* perform magic--I don't understand this well. */
			}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 928 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 930 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondError( (yyvsp[-1].desig_p)->gettype()->gettypeclass() != typedecl::MultiSet,
					   "Parameter for choose must be a multiset");
			  multisetidtypedecl *t = new multisetidtypedecl((yyvsp[-1].desig_p));
			  decl *tvar = new quantdecl(t);
			  symtab->declare( (yyvsp[-3].lex), tvar );
			}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 938 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.expr_p) = new multisetcount( symtab->popscope(FALSE), (yyvsp[-4].desig_p), (yyvsp[-1].expr_p) );
			}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 956 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = (yyvsp[-1].exprlist_p)->reverse(); }
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 958 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = NULL; }
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 965 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = new exprlist((yyvsp[0].expr_p), (yyvsp[-2].exprlist_p)); }
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 967 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = new exprlist((yyvsp[0].expr_p)); }
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 969 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = new exprlist(TRUE, (yyvsp[-2].exprlist_p)); }
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 971 "mu.y" /* yacc.c:1646  */
    { (yyval.exprlist_p) = new exprlist(TRUE); }
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 981 "mu.y" /* yacc.c:1646  */
    {
			  quantdecl *q = new quantdecl( (yyvsp[0].typedecl_p) );
			  (yyval.ste_p) = symtab->declare( (yyvsp[-2].lex), q );

			  // scalarset warning
			  if ( (yyvsp[0].typedecl_p)->gettypeclass() == typedecl::Scalarset && !( (scalarsettypedecl *) (yyvsp[0].typedecl_p))->isnamed())
			    Error.Warning("The anonymous scalarset type in a quantifier is useless.");
			}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 990 "mu.y" /* yacc.c:1646  */
    {
			  quantdecl *q = new quantdecl( (yyvsp[-3].expr_p), (yyvsp[-1].expr_p), (yyvsp[0].integer));
			  (yyval.ste_p) = symtab->declare( (yyvsp[-5].lex), q);
			}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 999 "mu.y" /* yacc.c:1646  */
    {
			  ste *p = (yyvsp[-2].ste_p);
			  ste *q = p->getnext()->search( p->getname() );
			  Error.CondError( q != NULL &&
					  (q->getvalue()->getclass() == decl::Quant ||
					   q->getvalue()->getclass() == decl::Alias),
					   "Ruleset declaration shadows enclosing Ruleset or Alias.");
			}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1008 "mu.y" /* yacc.c:1646  */
    {
			  ste *p = (yyvsp[0].ste_p);
			  ste *q = p->getnext()->search( p->getname() );
			  Error.CondError( q != NULL &&
					  (q->getvalue()->getclass() == decl::Quant ||
					   q->getvalue()->getclass() == decl::Alias),
					   "Ruleset declaration shadows enclosing Ruleset or Alias.");
			}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1027 "mu.y" /* yacc.c:1646  */
    { 
			  if (!Error.CondError (!(yyvsp[0].expr_p)->hasvalue(),
						"BY value must be constant."))
			    {
			      (yyval.integer) = (yyvsp[0].expr_p)->getvalue();
			      Error.CondError ( (yyval.integer) == 0,
					       "BY value must not be 0.");
			    }
			}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1037 "mu.y" /* yacc.c:1646  */
    { (yyval.integer) = 1; }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1045 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = NULL; }
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1047 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = (yyvsp[0].stmt_p); }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1049 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = NULL; }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1055 "mu.y" /* yacc.c:1646  */
    { (yyvsp[-3].stmt_p)->next = (yyvsp[0].stmt_p);
			  (yyvsp[-3].stmt_p) = (yyvsp[0].stmt_p);
			  (yyval.stmt_p) = (yyvsp[-2].stmt_p);
			}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1060 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = (yyvsp[-1].stmt_p); }
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1062 "mu.y" /* yacc.c:1646  */
    {
			  (yyvsp[-1].stmt_p) = (yyvsp[0].stmt_p);
			  (yyval.stmt_p) = (yyvsp[0].stmt_p);
			}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1089 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondWarning((yyvsp[-2].desig_p)->getbase() != NULL && 
					    (yyvsp[-2].desig_p)->getbase()->getscope() < localscope,
					    "Assignment makes function have side effects.");
			  (yyval.stmt_p) = new assignment ((yyvsp[-2].desig_p), (yyvsp[0].expr_p));
			}
#line 2963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1096 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondWarning((yyvsp[-2].desig_p)->getbase() != NULL &&
					    (yyvsp[-2].desig_p)->getbase()->getscope() < localscope,
					    "Undefine makes function have side effects.");
			  (yyval.stmt_p) = new undefinestmt ( (yyvsp[-2].desig_p) );
			}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1110 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new ifstmt ((yyvsp[-4].expr_p),(yyvsp[-2].stmt_p), (yyvsp[-1].stmt_p)); }
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1121 "mu.y" /* yacc.c:1646  */
    {
			  ((ifstmt *) (yyvsp[-1].elsifs))->elsecode = (yyvsp[0].stmt_p);
			  (yyval.stmt_p) = (yyvsp[-1].elsifs);
			}
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1126 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = (yyvsp[0].stmt_p); }
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1133 "mu.y" /* yacc.c:1646  */
    { (yyval.elsifs) = new ifstmt ((yyvsp[-2].expr_p), (yyvsp[0].stmt_p)); }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1139 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = (yyvsp[0].stmt_p); }
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1141 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = NULL; }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1149 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new whilestmt ( (yyvsp[-3].expr_p), (yyvsp[-1].stmt_p)); }
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1160 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.typedecl_p) = switchtype;
			  switchtype = (yyvsp[0].expr_p)->gettype();
			  Error.CondError(!(yyvsp[0].expr_p)->gettype()->issimple(),
					  "Switch quantity must be of simple type.");
			}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1166 "mu.y" /* yacc.c:1646  */
    { (yyval.cases) = NULL; }
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1170 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.stmt_p) = new switchstmt ( (yyvsp[-5].expr_p), (yyvsp[-2].cases), (yyvsp[-1].stmt_p));
			  switchtype = (yyvsp[-4].typedecl_p);
			}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1184 "mu.y" /* yacc.c:1646  */
    {
			  if ( (yyvsp[-2].cases) != NULL )
			    {
			      (yyvsp[-2].cases)->next = (yyvsp[0].cases);
			      (yyval.cases) = (yyvsp[-1].cases);
			    }
			  else (yyval.cases) = (yyvsp[0].cases);
			  (yyvsp[-2].cases) = (yyvsp[0].cases);
			}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1194 "mu.y" /* yacc.c:1646  */
    { (yyval.cases) = NULL; }
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1200 "mu.y" /* yacc.c:1646  */
    { (yyval.cases) = new caselist ( (yyvsp[-2].exprlist_p), (yyvsp[0].stmt_p)); }
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1206 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1210 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.stmt_p) = new forstmt (symtab->popscope(), (yyvsp[-1].stmt_p));
			}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1223 "mu.y" /* yacc.c:1646  */
    {
			  ste *proc = symtab->lookup((yyvsp[-1].lex));
			  (yyval.stmt_p) = new proccall ( proc, (yyvsp[0].exprlist_p));
			}
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1232 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondWarning((yyvsp[0].desig_p)->getbase() != NULL &&
					    (yyvsp[0].desig_p)->getbase()->getscope() < localscope,
					    "CLEAR makes function have side effects.");
			  (yyval.stmt_p) = new clearstmt ( (yyvsp[0].desig_p) );
			}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1242 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondWarning((yyvsp[0].desig_p)->getbase() != NULL &&
					    (yyvsp[0].desig_p)->getbase()->getscope() < localscope,
					    "Undefine makes function have side effects.");
			  (yyval.stmt_p) = new undefinestmt ( (yyvsp[0].desig_p) );
			}
#line 3116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1252 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.stmt_p) = new multisetaddstmt ( (yyvsp[-3].desig_p), (yyvsp[-1].desig_p) );
			}
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1259 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1261 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondError( (yyvsp[0].desig_p)->gettype()->gettypeclass() != typedecl::MultiSet,
					   "Parameter for choose must be a multiset");
			  multisetidtypedecl *t = new multisetidtypedecl((yyvsp[0].desig_p));
			  decl *tvar = new quantdecl(t);
			  symtab->declare( (yyvsp[-2].lex), tvar );
			}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1269 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.stmt_p) = new multisetremovestmt( symtab->popscope(FALSE), (yyvsp[-4].desig_p), (yyvsp[-1].expr_p) );
			}
#line 3150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1273 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.stmt_p) = new multisetremovestmt ((yyvsp[-3].expr_p),(yyvsp[-1].desig_p));
			}
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1280 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new errorstmt ((yyvsp[0].string)); }
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1286 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new assertstmt ( (yyvsp[-1].expr_p), (yyvsp[0].string) ); }
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1292 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new putstmt( (yyvsp[0].expr_p) ); }
#line 3176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1294 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new putstmt( (yyvsp[0].string) ); }
#line 3182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1300 "mu.y" /* yacc.c:1646  */
    {
			  symtab->pushscope();
			}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1304 "mu.y" /* yacc.c:1646  */
    { (yyval.stmt_p) = new aliasstmt ( symtab->popscope(TRUE),
					      (yyvsp[-1].stmt_p) ); }
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1321 "mu.y" /* yacc.c:1646  */
    {
			  Error.Error("Murphi 2 separates aliases with semicolons.");
			}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1325 "mu.y" /* yacc.c:1646  */
    {}
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1331 "mu.y" /* yacc.c:1646  */
    {
			  aliasdecl *adcl = new aliasdecl ( (yyvsp[0].expr_p) );
			  (yyval.ste_p) = symtab->declare ( (yyvsp[-2].lex), adcl );
			}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1340 "mu.y" /* yacc.c:1646  */
    { 
			  if ( returntype == voidtype )
			    {
			      Error.CondError((yyvsp[0].expr_p) != NULL,
					      "Can't return a value from here.");
			    }
			  else
			    {
			      Error.CondError(!type_equal(returntype,
							  (yyvsp[0].expr_p)->gettype() ),
					      "Invalid type for return value.");
			      hasreturn = TRUE;
			    }
			  (yyval.stmt_p) = new returnstmt ( (yyvsp[0].expr_p) );
			}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1360 "mu.y" /* yacc.c:1646  */
    { (yyval.expr_p) = (yyvsp[0].expr_p); }
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1362 "mu.y" /* yacc.c:1646  */
    { (yyval.expr_p) = NULL; }
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1369 "mu.y" /* yacc.c:1646  */
    {
			  (yyvsp[-2].rule_p)->next = (yyvsp[0].rule_p);
			  (yyval.rule_p) = (yyvsp[-2].rule_p);
			}
#line 3261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1374 "mu.y" /* yacc.c:1646  */
    { (yyval.rule_p) = (yyvsp[-1].rule_p); }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1376 "mu.y" /* yacc.c:1646  */
    { (yyval.rule_p) = (yyvsp[0].rule_p); }
#line 3273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1389 "mu.y" /* yacc.c:1646  */
    { /* perform magic--I don't understand this well. */ }
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1396 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.ste_p) = symtab->topste();
			  symtab->pushscope();
			  returntype = voidtype;
			}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1403 "mu.y" /* yacc.c:1646  */
    {
			  stmt *stmts = (yyvsp[-1].stmt_p) != NULL ? (yyvsp[-1].stmt_p) : nullstmt;
			  (yyval.rule_p) = new simplerule((yyvsp[-3].ste_p),
					      (yyvsp[-4].expr_p),
					      symtab->popscope(),
			 		      stmts, (yyvsp[-7].boolean), (yyvsp[-6].integer));
			  (yyval.rule_p)->set_name((yyvsp[-5].string));
			  hasrule = TRUE;
			}
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1416 "mu.y" /* yacc.c:1646  */
    { (yyval.boolean) = TRUE; }
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1417 "mu.y" /* yacc.c:1646  */
    { (yyval.boolean) = FALSE; }
#line 3315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1427 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondError(!type_equal((yyvsp[-1].expr_p)->gettype(),
						      booltype),
					  "Condition for rule must be a boolean expression.");
			  (yyval.expr_p) = (yyvsp[-1].expr_p);
			}
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1434 "mu.y" /* yacc.c:1646  */
    { (yyval.expr_p) = true_expr; }
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1440 "mu.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1442 "mu.y" /* yacc.c:1646  */
    { (yyval.string) = NULL; }
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1453 "mu.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].integer); }
#line 3350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1455 "mu.y" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1461 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1463 "mu.y" /* yacc.c:1646  */
    { (yyval.rule_p) = new aliasrule( symtab->popscope(FALSE), (yyvsp[-1].rule_p)); }
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1469 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1472 "mu.y" /* yacc.c:1646  */
    { (yyval.rule_p) = new quantrule( symtab->popscope(FALSE), (yyvsp[-1].rule_p) ); }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1483 "mu.y" /* yacc.c:1646  */
    { symtab->pushscope(); }
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1485 "mu.y" /* yacc.c:1646  */
    {
			  Error.CondError( (yyvsp[0].desig_p)->gettype()->gettypeclass() != typedecl::MultiSet,
					   "Parameter for choose must be a multiset");
			  multisetidtypedecl *t = new multisetidtypedecl((yyvsp[0].desig_p));
			  decl *tvar = new choosedecl(t);
			  symtab->declare( (yyvsp[-2].lex), tvar );
			}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1493 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.rule_p) = new chooserule( symtab->popscope(FALSE), (yyvsp[-4].desig_p), (yyvsp[-1].rule_p) );
			}
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1512 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.ste_p) = symtab->topste();
			  symtab->pushscope();
			}
#line 3415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1517 "mu.y" /* yacc.c:1646  */
    {
			  stmt *body = (yyvsp[-1].stmt_p) != NULL ? (yyvsp[-1].stmt_p) : nullstmt;
			  (yyval.rule_p) = new startstate((yyvsp[-4].ste_p),
					      symtab->popscope(),
					      body);
			  (yyval.rule_p)->set_name((yyvsp[-3].string));
			  has_startstate = TRUE;
			}
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1541 "mu.y" /* yacc.c:1646  */
    {
			  (yyval.rule_p) = new invariant(symtab->topste(), (yyvsp[0].expr_p));
			  (yyval.rule_p)->set_name((yyvsp[-1].string));
			}
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3441 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
