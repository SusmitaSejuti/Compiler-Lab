
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     FUN_NAME = 260,
     FLT_NUM = 261,
     MAIN_FUNC = 262,
     INT = 263,
     FLOAT = 264,
     STRING = 265,
     SCANF = 266,
     PRINTF = 267,
     ADD = 268,
     SUB = 269,
     MUL = 270,
     DIV = 271,
     EXP = 272,
     MOD = 273,
     INC = 274,
     DEC = 275,
     SQR = 276,
     ROOT = 277,
     CUBE = 278,
     SINE = 279,
     COSINE = 280,
     TANGENT = 281,
     LN = 282,
     LOG10 = 283,
     ASSIGN = 284,
     LESS_THAN = 285,
     GREATER_THAN = 286,
     LESS_OR_EQUAL = 287,
     GREATER_OR_EQUAL = 288,
     NOT_EQUAL = 289,
     EQUAL = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_XOR = 293,
     BIT_NOT = 294,
     ADD_ASSIGN = 295,
     SUB_ASSIGN = 296,
     MUL_ASSIGN = 297,
     DIV_ASSIGN = 298,
     COMMA = 299,
     SEMICOLON = 300,
     COLON = 301,
     L_round_bracket = 302,
     R_round_bracket = 303,
     L_curly_brackets = 304,
     R_curly_brackets = 305,
     L_square_brackets = 306,
     R_square_brackets = 307,
     FACTORIAL = 308,
     LEAP_YEAR = 309,
     PRIME = 310,
     DIVISORS = 311,
     EVEN_ODD = 312,
     SUMMATION = 313,
     GCD = 314,
     LCM = 315,
     MAX = 316,
     MIN = 317,
     FUNC = 318,
     SWAP = 319,
     IF = 320,
     ELSE = 321,
     FOR = 322,
     IN = 323,
     LIMIT = 324,
     CONTINUE = 325,
     WHILE = 326,
     SWITCH = 327,
     CASE = 328,
     DEFAULT = 329,
     BREAK = 330,
     DO = 331,
     DO_WHILE = 332,
     IFX = 333
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "OneZeroOne.y"
 
	char *ch;
	char c;
  int itype;
  double dtype;   



/* Line 1676 of yacc.c  */
#line 139 "OneZeroOne.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


