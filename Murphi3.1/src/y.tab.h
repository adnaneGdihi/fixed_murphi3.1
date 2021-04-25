/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 104 "mu.y" /* yacc.c:1909  */

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

#line 254 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
