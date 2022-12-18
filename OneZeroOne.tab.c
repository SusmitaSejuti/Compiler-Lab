
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "OneZeroOne.y"

    #include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>

	#define PI 3.14159265

	extern FILE *yyin;
	extern FILE *yyout;

	int checked[26],flag=0,m_flag=0;
	float arr[1000];


/* Line 189 of yacc.c  */
#line 89 "OneZeroOne.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 16 "OneZeroOne.y"
 
	char *ch;
	char c;
  int itype;
  double dtype;   



/* Line 214 of yacc.c  */
#line 212 "OneZeroOne.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "OneZeroOne.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     9,    10,    13,    16,    19,    22,
      25,    28,    31,    36,    40,    46,    48,    52,    56,    60,
      64,    68,    76,    84,    92,   100,   108,   115,   130,   140,
     150,   161,   173,   180,   186,   193,   205,   215,   217,   221,
     223,   225,   227,   231,   233,   237,   241,   243,   247,   251,
     253,   257,   261,   265,   269,   273,   277,   281,   285,   288,
     291,   295,   299,   303,   306,   309,   312,   315,   318,   321,
     324,   327,   330,   333,   335,   337,   339,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      80,     0,    -1,    -1,     7,    49,    81,    50,    -1,    -1,
      81,    82,    -1,    81,    83,    -1,    81,    84,    -1,    81,
      85,    -1,    81,    87,    -1,    81,    89,    -1,    92,    45,
      -1,     4,    29,    92,    45,    -1,    11,     4,    45,    -1,
      12,    47,     4,    48,    45,    -1,    75,    -1,    55,    88,
      45,    -1,    56,    88,    45,    -1,    58,    88,    45,    -1,
      54,    88,    45,    -1,    57,    88,    45,    -1,    59,    47,
      88,    44,    88,    48,    45,    -1,    60,    47,    88,    44,
      88,    48,    45,    -1,    61,    47,    88,    44,    88,    48,
      45,    -1,    62,    47,    88,    44,    88,    48,    45,    -1,
      64,    47,    88,    44,    88,    48,    45,    -1,    63,     5,
      88,    49,    81,    50,    -1,    67,     4,    68,    69,    47,
       3,    44,     3,    44,     3,    48,    46,    88,    45,    -1,
      71,     4,    32,     3,    44,     3,    46,    88,    45,    -1,
      71,     4,    33,     3,    44,     3,    46,    88,    45,    -1,
      76,    49,    88,    45,    50,    77,     3,    33,     3,    45,
      -1,    72,    47,     4,    48,    49,    86,    74,    46,    88,
      45,    50,    -1,    86,    73,     3,    46,    88,    45,    -1,
      73,     3,    46,    88,    45,    -1,    65,    92,    49,    88,
      45,    50,    -1,    65,    92,    49,    88,    45,    50,    66,
      49,    88,    45,    50,    -1,    65,    92,    49,    87,    50,
      66,    49,    87,    50,    -1,    92,    -1,    90,    91,    45,
      -1,     9,    -1,     8,    -1,    10,    -1,    91,    44,     4,
      -1,     4,    -1,    92,    13,    93,    -1,    92,    14,    93,
      -1,    93,    -1,    93,    15,    94,    -1,    93,    16,    94,
      -1,    94,    -1,    95,    17,    94,    -1,    95,    30,    94,
      -1,    95,    31,    94,    -1,    95,    32,    94,    -1,    95,
      33,    94,    -1,    95,    34,    94,    -1,    95,    35,    94,
      -1,    95,    18,    94,    -1,    95,    19,    -1,    95,    20,
      -1,    95,    36,    94,    -1,    95,    37,    94,    -1,    95,
      38,    94,    -1,    39,    94,    -1,    21,    95,    -1,    23,
      95,    -1,    22,    95,    -1,    24,    95,    -1,    25,    95,
      -1,    26,    95,    -1,    27,    95,    -1,    28,    95,    -1,
      53,    95,    -1,    95,    -1,     3,    -1,     4,    -1,     5,
      -1,    47,    92,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    62,    64,    65,    67,    69,    71,    73,
      84,    88,    92,   104,   117,   126,   130,   147,   159,   165,
     173,   181,   194,   208,   226,   244,   257,   265,   286,   307,
     329,   347,   360,   362,   366,   378,   390,   398,   402,   408,
     409,   410,   414,   427,   443,   445,   447,   451,   453,   463,
     468,   470,   472,   474,   476,   478,   480,   482,   486,   488,
     491,   493,   495,   497,   501,   503,   505,   509,   516,   523,
     530,   532,   534,   543,   547,   549,   554,   560
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "FUN_NAME", "FLT_NUM",
  "MAIN_FUNC", "INT", "FLOAT", "STRING", "SCANF", "PRINTF", "ADD", "SUB",
  "MUL", "DIV", "EXP", "MOD", "INC", "DEC", "SQR", "ROOT", "CUBE", "SINE",
  "COSINE", "TANGENT", "LN", "LOG10", "ASSIGN", "LESS_THAN",
  "GREATER_THAN", "LESS_OR_EQUAL", "GREATER_OR_EQUAL", "NOT_EQUAL",
  "EQUAL", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "COMMA", "SEMICOLON", "COLON",
  "L_round_bracket", "R_round_bracket", "L_curly_brackets",
  "R_curly_brackets", "L_square_brackets", "R_square_brackets",
  "FACTORIAL", "LEAP_YEAR", "PRIME", "DIVISORS", "EVEN_ODD", "SUMMATION",
  "GCD", "LCM", "MAX", "MIN", "FUNC", "SWAP", "IF", "ELSE", "FOR", "IN",
  "LIMIT", "CONTINUE", "WHILE", "SWITCH", "CASE", "DEFAULT", "BREAK", "DO",
  "DO_WHILE", "IFX", "$accept", "program", "STATEMENTS", "STATEMENT",
  "BUILT_IN_FUNCTIONS", "LOOP", "SWITCH_CASE", "multiple_case", "IF_ELSE",
  "stmt", "DECLARATION", "TYPE", "VARIABLE", "EXPRESSION", "TERM",
  "FACTOR", "OPTN", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    86,    86,    87,    87,    87,    88,    89,    90,
      90,    90,    91,    91,    92,    92,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     2,     2,     2,     2,
       2,     2,     4,     3,     5,     1,     3,     3,     3,     3,
       3,     7,     7,     7,     7,     7,     6,    14,     9,     9,
      10,    11,     6,     5,     6,    11,     9,     1,     3,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     4,     1,     0,    74,    75,    76,    40,
      39,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     5,     6,     7,     8,     9,    10,     0,
       0,    46,    49,    73,     0,     0,     0,    75,    64,    66,
      65,    67,    68,    69,    70,    71,    63,     0,    72,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
      11,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    77,
      19,    16,    17,    20,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    44,
      45,    47,    48,    50,    57,    51,    52,    53,    54,    55,
      56,    60,    61,    62,    12,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    28,    29,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    30,    35,     0,    32,    31,
       0,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    43,    44,    45,    46,   186,    47,    69,
      48,    49,    87,    70,    51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
      15,   -35,    26,  -116,  -116,    87,  -116,    28,  -116,  -116,
    -116,  -116,    36,    13,    12,    12,    12,    12,    12,    12,
      12,    12,     8,     8,  -116,    12,     8,     8,     8,     8,
       8,    17,    18,    19,    20,    63,    22,     8,    67,    68,
      30,  -116,    39,  -116,  -116,  -116,  -116,  -116,  -116,    85,
      11,     3,  -116,   182,     8,    48,    96,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,    -4,  -116,    56,
       7,    57,    58,    59,    60,     8,     8,     8,     8,     8,
       8,    -6,    38,    -5,   103,     8,  -116,    -3,     8,     8,
    -116,     8,     8,     8,     8,  -116,  -116,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    25,  -116,    69,  -116,
    -116,  -116,  -116,  -116,  -116,    72,    74,    79,    81,    78,
      84,   248,    61,   126,   128,    88,    90,   129,  -116,     3,
       3,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,    93,     8,     8,     8,     8,
    -116,     8,    82,    94,   106,   111,   112,   108,   110,  -116,
    -116,   113,   116,   118,   119,   183,   120,   105,   122,   170,
     171,   172,   104,   101,   134,   136,   138,   139,  -116,   140,
     147,   123,   153,   152,   175,   220,   -28,   221,  -116,  -116,
    -116,  -116,  -116,   160,   177,   224,     8,     8,   185,   225,
     186,   196,   184,     8,   191,   204,   211,     8,   214,     8,
     254,  -116,   216,   259,  -116,  -116,   218,     8,   219,   222,
     215,   237,  -116,   223,   236,  -116,  -116,   243,  -116,  -116,
       8,   245,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,   141,  -116,  -116,  -116,  -116,  -116,  -115,   -27,
    -116,  -116,  -116,     0,   -26,   -18,   263
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      71,    72,    73,    74,    66,    50,   152,    88,    89,    88,
      89,     6,    57,     8,     3,     6,    57,     8,    91,    92,
      88,    89,     1,    67,    88,    89,     4,   123,   124,    14,
      15,    16,    17,    18,    19,    20,    21,    81,    88,    89,
      55,   127,   128,   121,   109,   199,   200,    22,   115,   116,
     117,   118,   119,   120,   106,    23,    90,    54,   126,    23,
      56,    25,   129,   130,    75,    76,    77,    78,    79,    80,
     144,    82,    83,   131,   132,   133,   134,    84,   202,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    85,    86,
       6,     7,     8,   107,   153,     9,    10,    11,    12,    13,
     108,   110,   111,   112,   113,   114,   122,   125,    14,    15,
      16,    17,    18,    19,    20,    21,   146,   145,   147,   161,
     162,   163,   164,   148,   166,   149,    22,   150,   151,   155,
     154,   156,   167,   159,    23,   158,   157,    24,   160,   168,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   169,    38,   170,   171,   172,    39,    40,
     173,   174,    41,    42,   175,    50,   176,   177,   179,   205,
     206,   180,   181,   182,   183,   184,   212,   185,   187,   188,
     216,   189,   218,   190,   191,   192,     6,     7,     8,   194,
     223,     9,    10,    11,    12,    13,   193,   195,   196,    93,
      94,    95,    96,   231,    14,    15,    16,    17,    18,    19,
      20,    21,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   197,    22,   198,   201,    37,   203,   204,   208,   210,
      23,   207,   209,   178,   211,   213,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   214,
      38,     6,    57,     8,    39,    40,   215,   219,    41,    42,
     217,   220,   221,   222,   224,   226,     0,   225,   228,    14,
      15,    16,    17,    18,    19,    20,    21,    58,    59,    60,
      61,    62,    63,    64,    65,   227,   229,    22,    68,   230,
     232,   165,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37
};

static const yytype_int16 yycheck[] =
{
      27,    28,    29,    30,    22,     5,   121,    13,    14,    13,
      14,     3,     4,     5,    49,     3,     4,     5,    15,    16,
      13,    14,     7,    23,    13,    14,     0,    32,    33,    21,
      22,    23,    24,    25,    26,    27,    28,    37,    13,    14,
       4,    44,    45,    49,    48,    73,    74,    39,    75,    76,
      77,    78,    79,    80,    54,    47,    45,    29,    85,    47,
      47,    53,    88,    89,    47,    47,    47,    47,     5,    47,
      45,     4,     4,    91,    92,    93,    94,    47,   193,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    49,     4,
       3,     4,     5,    45,   121,     8,     9,    10,    11,    12,
       4,    45,    45,    45,    45,    45,    68,     4,    21,    22,
      23,    24,    25,    26,    27,    28,    44,    48,    44,   146,
     147,   148,   149,    44,   151,    44,    39,    49,    44,     3,
      69,     3,    50,     4,    47,    45,    48,    50,    45,    45,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    47,    67,    44,    44,    49,    71,    72,
      50,    48,    75,    76,    48,   165,    48,    48,    48,   196,
     197,    66,    50,     3,     3,     3,   203,    73,    77,    45,
     207,    45,   209,    45,    45,    45,     3,     4,     5,    66,
     217,     8,     9,    10,    11,    12,    49,    44,    46,    17,
      18,    19,    20,   230,    21,    22,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    46,    39,     3,     3,    65,    49,     3,     3,    33,
      47,    46,    46,    50,    50,    44,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    45,
      67,     3,     4,     5,    71,    72,    45,     3,    75,    76,
      46,    45,     3,    45,    45,    50,    -1,    45,    45,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    48,    50,    39,    25,    46,
      45,   150,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    80,    49,     0,    81,     3,     4,     5,     8,
       9,    10,    11,    12,    21,    22,    23,    24,    25,    26,
      27,    28,    39,    47,    50,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    67,    71,
      72,    75,    76,    82,    83,    84,    85,    87,    89,    90,
      92,    93,    94,    95,    29,     4,    47,     4,    95,    95,
      95,    95,    95,    95,    95,    95,    94,    92,    95,    88,
      92,    88,    88,    88,    88,    47,    47,    47,    47,     5,
      47,    92,     4,     4,    47,    49,     4,    91,    13,    14,
      45,    15,    16,    17,    18,    19,    20,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    92,    45,     4,    48,
      45,    45,    45,    45,    45,    88,    88,    88,    88,    88,
      88,    49,    68,    32,    33,     4,    88,    44,    45,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    45,    48,    44,    44,    44,    44,
      49,    44,    87,    88,    69,     3,     3,    48,    45,     4,
      45,    88,    88,    88,    88,    81,    88,    50,    45,    47,
      44,    44,    49,    50,    48,    48,    48,    48,    50,    48,
      66,    50,     3,     3,     3,    73,    86,    77,    45,    45,
      45,    45,    45,    49,    66,    44,    46,    46,     3,    73,
      74,     3,    87,    49,     3,    88,    88,    46,     3,    46,
      33,    50,    88,    44,    45,    45,    88,    46,    88,     3,
      45,     3,    45,    88,    45,    45,    50,    48,    45,    50,
      46,    88,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 62 "OneZeroOne.y"
    { fprintf(yyout,"Execution Done!\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 73 "OneZeroOne.y"
    { 
	                            if((yyvsp[(2) - (2)].dtype)) 
								{  
								    fprintf(yyout,"Value of Expression for IF_ELSE in Valid Condition: %.2f\n",(yyvsp[(2) - (2)].dtype)); 
								}
								else
								{
								   fprintf(yyout,"Condition false in IF_ELSE\n");
								}
						    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 88 "OneZeroOne.y"
    { 
                                (yyval.dtype) = (yyvsp[(1) - (2)].dtype);	
                                fprintf(yyout,"Value of expression : %.2f\n",(yyvsp[(1) - (2)].dtype));
                            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "OneZeroOne.y"
    {															
                                if(checked[(yyvsp[(1) - (4)].itype)] == 1)
                                {
                                    arr[(yyvsp[(1) - (4)].itype)] = (yyvsp[(3) - (4)].dtype);
									(yyval.dtype) = arr[(yyvsp[(1) - (4)].itype)];
                                    fprintf(yyout,"%c = %.2f\n",(yyvsp[(1) - (4)].itype)+97,(yyvsp[(3) - (4)].dtype));
                                }
								else
                                  fprintf(yyout,"%c not declared\n",(yyvsp[(1) - (4)].itype)+97);
						    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 104 "OneZeroOne.y"
    {
                                printf("User Input for %c\n",(yyvsp[(2) - (3)].itype)+97);
                                if(checked[(yyvsp[(2) - (3)].itype)] == 1) 
                                { 
                                    fprintf(yyout,"Value taken from user for %c\n",(yyvsp[(2) - (3)].itype)+97);
                                    float a;
                                    scanf("%f",&a);
                                    arr[(yyvsp[(2) - (3)].itype)] = a;
								}
								else
                                    fprintf(yyout,"%c not declared\n",(yyvsp[(2) - (3)].itype)+97);
                            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 118 "OneZeroOne.y"
    { 
                                if(checked[(yyvsp[(3) - (5)].itype)] == 1) 
                                    fprintf(yyout,"Value of %c is %.2f\n",(yyvsp[(3) - (5)].itype)+97,arr[(yyvsp[(3) - (5)].itype)]);
								else
                                    fprintf(yyout,"%c not declared\n",(yyvsp[(3) - (5)].itype)+97);

                            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 126 "OneZeroOne.y"
    { break; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 130 "OneZeroOne.y"
    {
	                            int p = (int)(yyvsp[(2) - (3)].dtype);
                                int i, cnt=0;
                                for(i=2;i<p;i++)
                                {
                                    if(p%i == 0)
                                    {
                                        cnt=cnt+1;
                                        break;
                                    }
                                }
                                if(cnt==0 && (yyvsp[(2) - (3)].dtype) != 1)
                                    fprintf(yyout,"Yes! %d prime\n",p);
                                else
                                    fprintf(yyout,"No! %d not prime\n",p);
                            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 147 "OneZeroOne.y"
    {
                                int j;
								int num = (int)(yyvsp[(2) - (3)].dtype);
                                fprintf(yyout,"All the divisors of %d are -> ",num);
                                for(j=1;j<=num;j++)
                                {
                                    if(num%j==0)
                                       fprintf(yyout,"%d ",j);
							    }
                                fprintf(yyout,"\n");
                            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 159 "OneZeroOne.y"
    {
	                            int n = (int)(yyvsp[(2) - (3)].dtype);
								int sum = n*(n+1)/2;
								fprintf(yyout,"Summation of 1st %d numbers is %d\n",n,sum);
	                        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 165 "OneZeroOne.y"
    {
	                            int lp = (int)(yyvsp[(2) - (3)].dtype);
                                if((lp%400 == 0) || ((lp%4 == 0) && (lp%100 != 0)) )
                                    fprintf(yyout,"%d leap year\n",lp);
                                else
                                    fprintf(yyout,"%d not leap year\n",lp);
                            ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 173 "OneZeroOne.y"
    {
	                            int num = (int)(yyvsp[(2) - (3)].dtype);
	                            if(num %2 == 0)
								    fprintf(yyout,"%d Even Number\n",num);
								else
								    fprintf(yyout,"%d Odd Number\n",num);
	                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 181 "OneZeroOne.y"
    { int n1=(int)(yyvsp[(3) - (7)].dtype);
									      int n2=(int)(yyvsp[(5) - (7)].dtype);
									 	  int gcd;
	                                            for(int i=1; i<=n1 && i<=n2; i++)
												{
												  if(n1%i==0 && n2%i==0)
												  {
												     gcd=i;												
												 }
												}
											fprintf(yyout,"Gcd of %d and %d = %d\n", (int)(yyvsp[(3) - (7)].dtype), (int)(yyvsp[(5) - (7)].dtype), gcd);
										;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 194 "OneZeroOne.y"
    { int n1=(int)(yyvsp[(3) - (7)].dtype);
										  int n2=(int)(yyvsp[(5) - (7)].dtype);
										  int gcd;
    									 	for(int i=1; i<=n1 && i<=n2; i++)
												{
												  if(n1%i==0 && n2%i==0)
												  {
												     gcd=i;												
												 }
												}
										    int lcm =(n1 * n2) / gcd;
        						   		 fprintf(yyout,"LCM of %d and %d is %d \n", (int)(yyvsp[(3) - (7)].dtype), (int)(yyvsp[(5) - (7)].dtype), lcm);    										
								        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 208 "OneZeroOne.y"
    {
										int a=(int)(yyvsp[(3) - (7)].dtype);
										int b=(int)(yyvsp[(5) - (7)].dtype);

    									if(a > b)
										{
       									    fprintf(yyout,"%d is Largest\n", a);          
										} 
										else if (b > a)
										{ 
											fprintf(yyout,"%d is Largest\n", b);  
   									    } 
										else 
										{
 											fprintf(yyout,"%d and %d Both are Equal\n", a, b);
  										}
									  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 226 "OneZeroOne.y"
    {
										int a=(int)(yyvsp[(3) - (7)].dtype);
										int b=(int)(yyvsp[(5) - (7)].dtype);

    									if(a < b)
										{
       									    fprintf(yyout,"%d is Smallest\n", a);          
										} 
										else if (b < a)
										{ 
											fprintf(yyout,"%d is Smallest\n", b);  
   									    } 
										else 
										{
 											fprintf(yyout,"%d and %d Both are Equal\n", a, b);
  										}
									  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 244 "OneZeroOne.y"
    {
												int x=(int)(yyvsp[(3) - (7)].dtype);
												int y=(int)(yyvsp[(5) - (7)].dtype);
												fprintf(yyout,"\nBefore Swapping: x = %d, y = %d", x, y);
    
    											int temp = x;
   												 x = y;
   												 y = temp;
 
    											fprintf(yyout,"\nAfter Swapping: x = %d, y = %d", x, y);

	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 258 "OneZeroOne.y"
    { 
		fprintf(yyout,"User Define Function Found!");
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 266 "OneZeroOne.y"
    {
							    if(checked[(yyvsp[(2) - (14)].itype)] == 1)
                                {
								    fprintf(yyout,"For loop Found\n");
								    if((yyvsp[(6) - (14)].dtype) <= (yyvsp[(8) - (14)].dtype))
                                    {
									    for(arr[(yyvsp[(2) - (14)].itype)] = (yyvsp[(6) - (14)].dtype); arr[(yyvsp[(2) - (14)].itype)] <= (yyvsp[(8) - (14)].dtype); arr[(yyvsp[(2) - (14)].itype)] += (yyvsp[(10) - (14)].dtype))
                                   fprintf(yyout,"Value in for loop %.2f\n",(yyvsp[(13) - (14)].dtype));
									}
									else
									{
									    for(arr[(yyvsp[(2) - (14)].itype)] = (yyvsp[(6) - (14)].dtype); arr[(yyvsp[(2) - (14)].itype)] > (yyvsp[(8) - (14)].dtype); arr[(yyvsp[(2) - (14)].itype)] -= (yyvsp[(10) - (14)].dtype))
                                            fprintf(yyout,"Value in for loop: %.2f\n",(yyvsp[(13) - (14)].dtype));
									}
                                }
								else
                                  fprintf(yyout,"%c not declared\n",(yyvsp[(2) - (14)].itype)+97);	
							;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 287 "OneZeroOne.y"
    {
							    float a = arr[(yyvsp[(2) - (9)].itype)];
								float b = (yyvsp[(4) - (9)].dtype);
								int inc = (int)(yyvsp[(6) - (9)].dtype);
								(yyval.dtype) = (yyvsp[(8) - (9)].dtype);
								if((checked[(yyvsp[(2) - (9)].itype)] == 1) && (a <= b))
								{
								    fprintf(yyout,"While loop found & it works properly!\n");
                                    while(a <= b)
                                    {
                                        fprintf(yyout,"Value in while loop: %.2f\n",(yyval.dtype));
                                        a = a+inc;
									    if(a > b) break;
                                    }
								    arr[(yyvsp[(2) - (9)].itype)] = a;
								}
								else
								    fprintf(yyout,"While loop found but either condition false or variable undeclared!\n");
                            ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 308 "OneZeroOne.y"
    {
							    float a = arr[(yyvsp[(2) - (9)].itype)];
								float b = (yyvsp[(4) - (9)].dtype);
								int dec = (int)(yyvsp[(6) - (9)].dtype);
								(yyval.dtype) = (yyvsp[(8) - (9)].dtype);
								if((checked[(yyvsp[(2) - (9)].itype)] == 1) && (a >= b))
								{
								    fprintf(yyout,"While loop found & it works properly!\n");
                                    while(a >= b)
                                    {
                                        fprintf(yyout,"Value in while loop: %.2f\n",(yyval.dtype));
                                        a = a-dec;
									    if(a < b) 
										break;
                                    }
								    arr[(yyvsp[(2) - (9)].itype)] = a;
								}
								else
								    fprintf(yyout,"While loop found but either condition false or variable undeclared!\n");
                            ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 330 "OneZeroOne.y"
    {
		fprintf(yyout,"Do while loop Found!.\n");
		int p= (int)(yyvsp[(9) - (10)].dtype);
		//int dec= (int)$10;
		do
		{
			(yyval.dtype) = (yyvsp[(3) - (10)].dtype);
			p = p-1;
			fprintf(yyout,"Value in do while loop: %.2f \n", (yyval.dtype));
		}
		
		while (p >= (int)(yyvsp[(9) - (10)].dtype));
		
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 348 "OneZeroOne.y"
    {
							    if(checked[(yyvsp[(3) - (11)].itype)] == 1)
								{    
									if(m_flag == 1)
									   fprintf(yyout,"Multiple case switch statement found!\n");
									else if(m_flag == 0)
									   fprintf(yyout,"Single case switch statement found!\n");
								}
						    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 360 "OneZeroOne.y"
    { m_flag = 1; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 362 "OneZeroOne.y"
    { m_flag = 0; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 367 "OneZeroOne.y"
    {
								if((yyvsp[(2) - (6)].dtype)) 
								{
								    (yyval.dtype) = (yyvsp[(4) - (6)].dtype);
								}
								else
								{
								    (yyval.dtype) = 0;
								}
							;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 379 "OneZeroOne.y"
    {
								if((yyvsp[(2) - (11)].dtype))
								{
									(yyval.dtype) = (yyvsp[(4) - (11)].dtype);
							    }
							    else
							    {
									(yyval.dtype) = (yyvsp[(9) - (11)].dtype);
								}
							;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 391 "OneZeroOne.y"
    {
                                if((yyvsp[(2) - (9)].dtype)) { (yyval.dtype) = (yyvsp[(4) - (9)].dtype); }
                                else   { (yyval.dtype) = (yyvsp[(8) - (9)].dtype); }
                            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 398 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 402 "OneZeroOne.y"
    { if(flag!=0) 
	                        fprintf(yyout,"Variable declared\n");
						;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 414 "OneZeroOne.y"
    {
	                        if(checked[(yyvsp[(3) - (3)].itype)] == 1)
                            {
							    fprintf(yyout,"%c already declared\n",(yyvsp[(3) - (3)].itype)+97);
								flag =0;
								return 0;
							}
                            else
							{   checked[(yyvsp[(3) - (3)].itype)] = 1;
							    flag=1;
							}
                        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 427 "OneZeroOne.y"
    {
                            if(checked[(yyvsp[(1) - (1)].itype)] == 1)
                            {
							    fprintf(yyout,"%c already declared\n",(yyvsp[(1) - (1)].itype)+97);
								flag = 0;
								return 0;
							}
                            else
							{
							    checked[(yyvsp[(1) - (1)].itype)] = 1;
								flag = 1;
							}
                        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 443 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) + (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 445 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) - (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 447 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 451 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) * (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 453 "OneZeroOne.y"
    {
                             if((yyvsp[(3) - (3)].dtype)) 
                                (yyval.dtype) = (yyvsp[(1) - (3)].dtype) / (yyvsp[(3) - (3)].dtype);
                             else 
                             { 
                                (yyval.dtype) = 0; 
                                fprintf(yyout,"Division by zero\n"); 
                             }
                          ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 463 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 468 "OneZeroOne.y"
    { (yyval.dtype) = powl((yyvsp[(1) - (3)].dtype),(yyvsp[(3) - (3)].dtype)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 470 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) < (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 472 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) > (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 474 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) <= (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 476 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) >= (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 478 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) != (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 480 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (3)].dtype) == (yyvsp[(3) - (3)].dtype); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 482 "OneZeroOne.y"
    { (yyval.dtype) = (int)(yyvsp[(1) - (3)].dtype) % (int)(yyvsp[(3) - (3)].dtype); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 486 "OneZeroOne.y"
    {  (yyval.dtype) = (yyvsp[(1) - (2)].dtype)+1; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 488 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (2)].dtype)-1; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 491 "OneZeroOne.y"
    { (yyval.dtype) = (int)(yyvsp[(1) - (3)].dtype) & (int)(yyvsp[(3) - (3)].dtype); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 493 "OneZeroOne.y"
    { (yyval.dtype) = (int)(yyvsp[(1) - (3)].dtype) | (int)(yyvsp[(3) - (3)].dtype); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 495 "OneZeroOne.y"
    { (yyval.dtype) = (int)(yyvsp[(1) - (3)].dtype) ^ (int)(yyvsp[(3) - (3)].dtype); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 497 "OneZeroOne.y"
    { (yyval.dtype) =  ~ (int)(yyvsp[(2) - (2)].dtype); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 501 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(2) - (2)].dtype)*(yyvsp[(2) - (2)].dtype); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 503 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(2) - (2)].dtype)*(yyvsp[(2) - (2)].dtype)*(yyvsp[(2) - (2)].dtype); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 505 "OneZeroOne.y"
    { (yyval.dtype) = sqrt((yyvsp[(2) - (2)].dtype)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 509 "OneZeroOne.y"
    { 
	                         double x = (yyvsp[(2) - (2)].dtype);
	                         double val = PI / 180;
                             double res = sin(x*val);
							 (yyval.dtype) = res;
						  ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 516 "OneZeroOne.y"
    { 
	                         double x = (yyvsp[(2) - (2)].dtype);
							 double val = PI / 180;
                             double res = cos(x*val);
							 (yyval.dtype) = res;
						  ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 523 "OneZeroOne.y"
    { 
	                         double x = (yyvsp[(2) - (2)].dtype);
	                         double val = PI / 180;
                             double res = tan(x*val);
							 (yyval.dtype) = res;
						  ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 530 "OneZeroOne.y"
    { (yyval.dtype) =log((yyvsp[(2) - (2)].dtype)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 532 "OneZeroOne.y"
    { (yyval.dtype)=(log((yyvsp[(2) - (2)].dtype)*1.0)/log(10.0));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 534 "OneZeroOne.y"
    {
                               int i,res = 1;
                               for(i=1;i<=(yyvsp[(2) - (2)].dtype);i++)
                                  {
									res *= i;
								  }
                               (yyval.dtype) = res;
                          ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 543 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 547 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 549 "OneZeroOne.y"
    { 
                               if(checked[(yyvsp[(1) - (1)].itype)] == 1) 
                                  (yyval.dtype) = arr[(yyvsp[(1) - (1)].itype)];
						  ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 554 "OneZeroOne.y"
    { 
                               if(checked[(yyvsp[(1) - (1)].itype)] == 1) 
                                  (yyval.dtype) = arr[(yyvsp[(1) - (1)].itype)];
						  ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 560 "OneZeroOne.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2391 "OneZeroOne.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 562 "OneZeroOne.y"


int yywrap()
{
    return 1;
}
int yyerror(char *s) 
{
	fprintf(yyout,"%s\n",s);
	return(0);
}
