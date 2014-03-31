
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */



#include "nula.h"
#include "parser.h"


#define INT_TYPE		Int::class$
#define FLOAT_TYPE		Float::class$
#define BOOLEAN_TYPE	Bool::class$
#define OBJECT_TYPE		Object::class$
#define STRING_TYPE		String::class$


namespace nula {




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
     PLUS_TK = 258,
     MINUS_TK = 259,
     MULT_TK = 260,
     DIV_TK = 261,
     REM_TK = 262,
     LS_TK = 263,
     RS_TK = 264,
     AND_TK = 265,
     XOR_TK = 266,
     OR_TK = 267,
     BOOL_AND_TK = 268,
     BOOL_OR_TK = 269,
     EQ_TK = 270,
     NEQ_TK = 271,
     GT_TK = 272,
     GTE_TK = 273,
     LT_TK = 274,
     LTE_TK = 275,
     PLUS_ASSIGN_TK = 276,
     MINUS_ASSIGN_TK = 277,
     MULT_ASSIGN_TK = 278,
     DIV_ASSIGN_TK = 279,
     REM_ASSIGN_TK = 280,
     LS_ASSIGN_TK = 281,
     SRS_ASSIGN_TK = 282,
     ZRS_ASSIGN_TK = 283,
     AND_ASSIGN_TK = 284,
     XOR_ASSIGN_TK = 285,
     OR_ASSIGN_TK = 286,
     PUBLIC_TK = 287,
     PRIVATE_TK = 288,
     PROTECTED_TK = 289,
     STATIC_TK = 290,
     FINAL_TK = 291,
     SYNC_TK = 292,
     VOLATILE_TK = 293,
     NATIVE_TK = 294,
     ABSTRACT_TK = 295,
     DECR_TK = 296,
     INCR_TK = 297,
     DEFAULT_TK = 298,
     IF_TK = 299,
     THROW_TK = 300,
     BOOLEAN_TK = 301,
     DO_TK = 302,
     IMPLEMENTS_TK = 303,
     THROWS_TK = 304,
     BREAK_TK = 305,
     USE_TK = 306,
     ELSE_TK = 307,
     INSTANCEOF_TK = 308,
     RETURN_TK = 309,
     VOID_TK = 310,
     CATCH_TK = 311,
     INTERFACE_TK = 312,
     CASE_TK = 313,
     EXTENDS_TK = 314,
     FINALLY_TK = 315,
     PARENT_TK = 316,
     WHILE_TK = 317,
     CLASS_TK = 318,
     SWITCH_TK = 319,
     CONST_TK = 320,
     TRY_TK = 321,
     FOR_TK = 322,
     NEW_TK = 323,
     CONTINUE_TK = 324,
     GOTO_TK = 325,
     NAMESPACE_TK = 326,
     THIS_TK = 327,
     INTEGRAL_TK = 328,
     FP_TK = 329,
     OBJECT_TK = 330,
     STRING_TK = 331,
     ID_TK = 332,
     REL_QM_TK = 333,
     NOT_TK = 334,
     NEG_TK = 335,
     ASSIGN_ANY_TK = 336,
     ASSIGN_TK = 337,
     STRING_LIT_TK = 338,
     INT_LIT_TK = 339,
     FP_LIT_TK = 340,
     TRUE_TK = 341,
     FALSE_TK = 342,
     BOOL_LIT_TK = 343,
     NULL_TK = 344
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	int modifier;
	i::Type *type;
	List<Declarator> *decls;
	Declarator decl;
	MethodDeclarator meth_decl;
	Expression *expression;
	Statement *statement;
	List<string *> *strings;
	List<Expression *> *arguments_list;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNRULES -- Number of states.  */
#define YYNSTATES  531

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      95,    96,     2,     2,    92,     2,    90,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,    91,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    93,     2,    94,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    43,    45,    47,    49,    53,    55,    56,    58,    60,
      62,    65,    68,    71,    75,    77,    80,    82,    85,    89,
      91,    95,    97,    99,   101,   104,   106,   108,   110,   112,
     114,   116,   117,   125,   126,   133,   134,   137,   138,   141,
     143,   147,   150,   154,   156,   159,   161,   163,   165,   167,
     169,   171,   173,   177,   182,   184,   188,   190,   194,   196,
     198,   200,   203,   206,   209,   213,   217,   221,   226,   228,
     232,   235,   237,   239,   242,   244,   247,   251,   256,   259,
     263,   267,   272,   274,   279,   285,   287,   289,   292,   296,
     301,   303,   307,   310,   314,   316,   318,   320,   323,   325,
     327,   330,   332,   335,   339,   341,   343,   345,   347,   349,
     351,   353,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   388,   391,
     394,   397,   399,   401,   403,   405,   407,   409,   411,   417,
     425,   433,   434,   438,   443,   446,   450,   454,   459,   461,
     464,   467,   469,   472,   476,   479,   484,   487,   490,   492,
     500,   508,   515,   523,   530,   533,   536,   537,   539,   541,
     542,   544,   546,   550,   553,   557,   560,   564,   567,   571,
     575,   581,   583,   587,   591,   596,   598,   601,   604,   609,
     612,   614,   616,   618,   620,   624,   626,   628,   630,   632,
     634,   638,   642,   646,   650,   654,   660,   665,   667,   668,
     676,   677,   684,   686,   690,   694,   698,   703,   708,   713,
     718,   720,   723,   727,   730,   734,   738,   742,   746,   751,
     757,   764,   770,   777,   782,   787,   789,   791,   793,   795,
     798,   801,   803,   805,   808,   811,   813,   816,   819,   821,
     824,   827,   829,   835,   840,   845,   851,   853,   857,   861,
     865,   867,   871,   875,   877,   881,   885,   887,   891,   895,
     899,   903,   907,   909,   913,   917,   919,   923,   925,   929,
     931,   935,   937,   941,   943,   947,   949,   955,   957,   959,
     963,   965,   967,   969,   971,   973,   975
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     113,     0,    -1,    84,    -1,    85,    -1,    88,    -1,    83,
      -1,    89,    -1,   103,    -1,   104,    -1,    73,    -1,    74,
      -1,    46,    -1,    75,    -1,    76,    -1,   105,    -1,   108,
      -1,   109,    -1,   105,    -1,   105,    -1,   103,   214,    -1,
     109,   214,    -1,   110,    -1,   111,    -1,   112,    -1,   109,
      90,   112,    -1,    77,    -1,    -1,   116,    -1,   114,    -1,
     115,    -1,   116,   114,    -1,   116,   115,    -1,   114,   115,
      -1,   116,   114,   115,    -1,   117,    -1,   114,   117,    -1,
     119,    -1,   115,   119,    -1,    71,   109,    91,    -1,   118,
      -1,    51,   109,    91,    -1,   122,    -1,   163,    -1,   121,
      -1,   120,   121,    -1,    32,    -1,    33,    -1,    36,    -1,
      40,    -1,    35,    -1,    34,    -1,    -1,   120,    63,   112,
     125,   126,   123,   128,    -1,    -1,    63,   112,   125,   126,
     124,   128,    -1,    -1,    59,   106,    -1,    -1,    48,   127,
      -1,   107,    -1,   127,    92,   107,    -1,    93,    94,    -1,
      93,   129,    94,    -1,   130,    -1,   129,   130,    -1,   131,
      -1,   143,    -1,   152,    -1,   132,    -1,   137,    -1,   122,
      -1,   163,    -1,   102,   133,    91,    -1,   120,   102,   133,
      91,    -1,   134,    -1,   133,    92,   134,    -1,   135,    -1,
     135,    82,   136,    -1,   112,    -1,   241,    -1,   150,    -1,
     138,   142,    -1,   102,   139,    -1,    55,   139,    -1,   120,
     102,   139,    -1,   120,    55,   139,    -1,   112,    95,    96,
      -1,   112,    95,   140,    96,    -1,   141,    -1,   140,    92,
     141,    -1,   102,   135,    -1,   152,    -1,    91,    -1,   144,
     146,    -1,   145,    -1,   120,   145,    -1,   110,    95,    96,
      -1,   110,    95,   140,    96,    -1,   153,   147,    -1,   153,
     148,   147,    -1,   153,   155,   147,    -1,   153,   148,   155,
     147,    -1,   154,    -1,   149,    95,    96,    91,    -1,   149,
      95,   210,    96,    91,    -1,    72,    -1,    61,    -1,    93,
      94,    -1,    93,   151,    94,    -1,    93,   151,    92,    94,
      -1,   136,    -1,   151,    92,   136,    -1,    93,    94,    -1,
     153,   155,   154,    -1,    93,    -1,    94,    -1,   156,    -1,
     155,   156,    -1,   157,    -1,   160,    -1,   159,    91,    -1,
      36,    -1,   102,   133,    -1,   158,   102,   133,    -1,   162,
      -1,   165,    -1,   169,    -1,   170,    -1,   181,    -1,   185,
      -1,   162,    -1,   166,    -1,   171,    -1,   182,    -1,   186,
      -1,   152,    -1,   163,    -1,   167,    -1,   172,    -1,   184,
      -1,   192,    -1,   193,    -1,   194,    -1,   196,    -1,   195,
      -1,   198,    -1,    91,    -1,   112,    97,    -1,   164,   160,
      -1,   164,   161,    -1,   168,    91,    -1,   238,    -1,   222,
      -1,   223,    -1,   219,    -1,   220,    -1,   216,    -1,   206,
      -1,    44,    95,   241,    96,   160,    -1,    44,    95,   241,
      96,   161,    52,   160,    -1,    44,    95,   241,    96,   161,
      52,   161,    -1,    -1,   174,   173,   175,    -1,    64,    95,
     241,    96,    -1,    93,    94,    -1,    93,   178,    94,    -1,
      93,   176,    94,    -1,    93,   176,   178,    94,    -1,   177,
      -1,   176,   177,    -1,   178,   155,    -1,   179,    -1,   178,
     179,    -1,    58,   242,    97,    -1,    43,    97,    -1,    62,
      95,   241,    96,    -1,   180,   160,    -1,   180,   161,    -1,
      47,    -1,   183,   160,    62,    95,   241,    96,    91,    -1,
     188,    91,   241,    91,   190,    96,   160,    -1,   188,    91,
      91,   190,    96,   160,    -1,   188,    91,   241,    91,   190,
      96,   161,    -1,   188,    91,    91,   190,    96,   161,    -1,
      67,    95,    -1,   187,   189,    -1,    -1,   191,    -1,   159,
      -1,    -1,   191,    -1,   168,    -1,   191,    92,   168,    -1,
      50,    91,    -1,    50,   112,    91,    -1,    69,    91,    -1,
      69,   112,    91,    -1,    54,    91,    -1,    54,   241,    91,
      -1,    45,   241,    91,    -1,   197,    95,   241,    96,   152,
      -1,   120,    -1,    66,   152,   199,    -1,    66,   152,   202,
      -1,    66,   152,   199,   202,    -1,   200,    -1,   199,   200,
      -1,   201,   152,    -1,    56,    95,   141,    96,    -1,    60,
     152,    -1,   204,    -1,   211,    -1,   101,    -1,    72,    -1,
      95,   241,    96,    -1,   206,    -1,   215,    -1,   216,    -1,
     217,    -1,   205,    -1,   109,    90,    72,    -1,   109,    90,
      63,    -1,   108,    90,    63,    -1,   103,    90,    63,    -1,
      55,    90,    63,    -1,    68,   106,    95,   210,    96,    -1,
      68,   106,    95,    96,    -1,   207,    -1,    -1,    68,   106,
      95,   210,    96,   208,   128,    -1,    -1,    68,   106,    95,
      96,   209,   128,    -1,   241,    -1,   210,    92,   241,    -1,
      68,   103,   212,    -1,    68,   105,   212,    -1,    68,   103,
     212,   214,    -1,    68,   105,   212,   214,    -1,    68,   105,
     214,   150,    -1,    68,   103,   214,   150,    -1,   213,    -1,
     212,   213,    -1,    98,   241,    99,    -1,    98,    99,    -1,
     214,    98,    99,    -1,   203,    90,   112,    -1,    61,    90,
     112,    -1,   109,    95,    96,    -1,   109,    95,   210,    96,
      -1,   203,    90,   112,    95,    96,    -1,   203,    90,   112,
      95,   210,    96,    -1,    61,    90,   112,    95,    96,    -1,
      61,    90,   112,    95,   210,    96,    -1,   109,    98,   241,
      99,    -1,   204,    98,   241,    99,    -1,   203,    -1,   109,
      -1,   219,    -1,   220,    -1,   218,    42,    -1,   218,    41,
      -1,   222,    -1,   223,    -1,     3,   221,    -1,     4,   221,
      -1,   224,    -1,    42,   221,    -1,    41,   221,    -1,   218,
      -1,    79,   221,    -1,    80,   221,    -1,   225,    -1,    95,
     103,   214,    96,   221,    -1,    95,   103,    96,   221,    -1,
      95,   241,    96,   224,    -1,    95,   109,   214,    96,   224,
      -1,   221,    -1,   226,     5,   221,    -1,   226,     6,   221,
      -1,   226,     7,   221,    -1,   226,    -1,   227,     3,   226,
      -1,   227,     4,   226,    -1,   227,    -1,   228,     8,   227,
      -1,   228,     9,   227,    -1,   228,    -1,   229,    19,   228,
      -1,   229,    17,   228,    -1,   229,    20,   228,    -1,   229,
      18,   228,    -1,   229,    53,   104,    -1,   229,    -1,   230,
      15,   229,    -1,   230,    16,   229,    -1,   230,    -1,   231,
      10,   230,    -1,   231,    -1,   232,    11,   231,    -1,   232,
      -1,   233,    12,   232,    -1,   233,    -1,   234,    13,   233,
      -1,   234,    -1,   235,    14,   234,    -1,   235,    -1,   235,
      78,   241,    97,   236,    -1,   236,    -1,   238,    -1,   239,
     240,   237,    -1,   109,    -1,   215,    -1,   217,    -1,    81,
      -1,    82,    -1,   237,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   130,   130,   131,   132,   133,   134,   138,   139,   143,
     144,   145,   146,   147,   151,   154,   158,   162,   166,   170,
     180,   194,   195,   199,   203,   209,   212,   213,   214,   215,
     216,   217,   218,   219,   223,   224,   228,   229,   233,   239,
     243,   249,   252,   256,   259,   266,   267,   268,   269,   270,
     271,   275,   275,   278,   278,   284,   285,   290,   291,   297,
     301,   307,   308,   312,   313,   317,   318,   319,   323,   324,
     325,   328,   333,   336,   342,   346,   353,   356,   362,   366,
     367,   373,   379,   382,   385,   388,   394,   398,   405,   409,
     415,   422,   423,   429,   434,   437,   443,   447,   454,   457,
     460,   463,   470,   474,   477,   483,   486,   492,   494,   497,
     504,   507,   513,   516,   522,   527,   533,   534,   539,   540,
     546,   552,   556,   559,   565,   566,   567,   568,   569,   570,
     575,   576,   577,   578,   579,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   600,   606,   611,   616,
     622,   628,   629,   630,   631,   632,   633,   634,   638,   644,
     650,   656,   656,   665,   674,   677,   680,   683,   689,   690,
     694,   698,   699,   703,   706,   712,   718,   724,   730,   736,
     742,   745,   751,   754,   760,   766,   771,   773,   776,   780,
     782,   789,   792,   798,   801,   807,   810,   816,   819,   825,
     831,   837,   843,   845,   848,   853,   854,   860,   864,   869,
     873,   874,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   893,   896,   899,   902,   908,   911,   914,   919,   919,
     923,   923,   930,   934,   940,   943,   946,   949,   952,   955,
     961,   964,   970,   975,   978,   984,   987,   993,   996,   999,
    1002,  1005,  1008,  1014,  1017,  1023,  1024,  1025,  1026,  1030,
    1036,  1042,  1043,  1044,  1047,  1050,  1058,  1064,  1070,  1071,
    1074,  1077,  1081,  1084,  1087,  1090,  1096,  1097,  1100,  1103,
    1109,  1110,  1113,  1119,  1120,  1123,  1129,  1130,  1133,  1136,
    1139,  1142,  1150,  1151,  1154,  1160,  1161,  1167,  1168,  1174,
    1175,  1181,  1182,  1187,  1188,  1193,  1194,  1199,  1200,  1205,
    1211,  1212,  1213,  1217,  1218,  1222,  1226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS_TK", "MINUS_TK", "MULT_TK",
  "DIV_TK", "REM_TK", "LS_TK", "RS_TK", "AND_TK", "XOR_TK", "OR_TK",
  "BOOL_AND_TK", "BOOL_OR_TK", "EQ_TK", "NEQ_TK", "GT_TK", "GTE_TK",
  "LT_TK", "LTE_TK", "PLUS_ASSIGN_TK", "MINUS_ASSIGN_TK", "MULT_ASSIGN_TK",
  "DIV_ASSIGN_TK", "REM_ASSIGN_TK", "LS_ASSIGN_TK", "SRS_ASSIGN_TK",
  "ZRS_ASSIGN_TK", "AND_ASSIGN_TK", "XOR_ASSIGN_TK", "OR_ASSIGN_TK",
  "PUBLIC_TK", "PRIVATE_TK", "PROTECTED_TK", "STATIC_TK", "FINAL_TK",
  "SYNC_TK", "VOLATILE_TK", "NATIVE_TK", "ABSTRACT_TK", "DECR_TK",
  "INCR_TK", "DEFAULT_TK", "IF_TK", "THROW_TK", "BOOLEAN_TK", "DO_TK",
  "IMPLEMENTS_TK", "THROWS_TK", "BREAK_TK", "USE_TK", "ELSE_TK",
  "INSTANCEOF_TK", "RETURN_TK", "VOID_TK", "CATCH_TK", "INTERFACE_TK",
  "CASE_TK", "EXTENDS_TK", "FINALLY_TK", "PARENT_TK", "WHILE_TK",
  "CLASS_TK", "SWITCH_TK", "CONST_TK", "TRY_TK", "FOR_TK", "NEW_TK",
  "CONTINUE_TK", "GOTO_TK", "NAMESPACE_TK", "THIS_TK", "INTEGRAL_TK",
  "FP_TK", "OBJECT_TK", "STRING_TK", "ID_TK", "REL_QM_TK", "NOT_TK",
  "NEG_TK", "ASSIGN_ANY_TK", "ASSIGN_TK", "STRING_LIT_TK", "INT_LIT_TK",
  "FP_LIT_TK", "TRUE_TK", "FALSE_TK", "BOOL_LIT_TK", "NULL_TK", "'.'",
  "';'", "','", "'{'", "'}'", "'('", "')'", "':'", "'['", "']'", "$accept",
  "literal", "type", "primitive_type", "reference_type",
  "class_or_interface_type", "class_type", "interface_type", "array_type",
  "name", "simple_name", "qualified_name", "identifier", "program",
  "import_declarations", "type_declarations", "package_declaration",
  "import_declaration", "single_type_import_declaration",
  "type_declaration", "modifiers", "modifier", "class_declaration", "$@1",
  "$@2", "super", "interfaces", "interface_type_list", "class_body",
  "class_body_declarations", "class_body_declaration",
  "class_member_declaration", "field_declaration", "variable_declarators",
  "variable_declarator", "variable_declarator_id", "variable_initializer",
  "method_declaration", "method_header", "method_declarator",
  "formal_parameter_list", "formal_parameter", "method_body",
  "constructor_declaration", "constructor_header",
  "constructor_declarator", "constructor_body", "constructor_block_end",
  "explicit_constructor_invocation", "this_or_parent", "array_initializer",
  "variable_initializers", "block", "block_begin", "block_end",
  "block_statements", "block_statement",
  "local_variable_declaration_statement", "final",
  "local_variable_declaration", "statement", "statement_nsi",
  "statement_without_trailing_substatement", "empty_statement",
  "label_decl", "labeled_statement", "labeled_statement_nsi",
  "expression_statement", "statement_expression", "if_then_statement",
  "if_then_else_statement", "if_then_else_statement_nsi",
  "switch_statement", "$@3", "switch_expression", "switch_block",
  "switch_block_statement_groups", "switch_block_statement_group",
  "switch_labels", "switch_label", "while_expression", "while_statement",
  "while_statement_nsi", "do_statement_begin", "do_statement",
  "for_statement", "for_statement_nsi", "for_header", "for_begin",
  "for_init", "for_update", "statement_expression_list", "break_statement",
  "continue_statement", "return_statement", "throw_statement",
  "synchronized_statement", "synchronized", "try_statement", "catches",
  "catch_clause", "catch_clause_parameter", "finally", "primary",
  "primary_no_new_array", "type_literals",
  "class_instance_creation_expression", "anonymous_class_creation", "$@4",
  "$@5", "argument_list", "array_creation_expression", "dim_exprs",
  "dim_expr", "dims", "field_access", "method_invocation", "array_access",
  "postfix_expression", "post_increment_expression",
  "post_decrement_expression", "unary_expression",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression_not_plus_minus", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "conditional_expression", "assignment_expression", "assignment",
  "left_hand_side", "assignment_operator", "expression",
  "constant_expression", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      46,    59,    44,   123,   125,    40,    41,    58,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   105,   106,   107,   108,
     108,   109,   109,   110,   111,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   117,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   123,   122,   124,   122,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   147,   148,   148,   149,   149,   150,   150,   150,
     151,   151,   152,   152,   153,   154,   155,   155,   156,   156,
     157,   158,   159,   159,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   164,   165,   166,
     167,   168,   168,   168,   168,   168,   168,   168,   169,   170,
     171,   173,   172,   174,   175,   175,   175,   175,   176,   176,
     177,   178,   178,   179,   179,   180,   181,   182,   183,   184,
     185,   185,   186,   186,   187,   188,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     196,   197,   198,   198,   198,   199,   199,   200,   201,   202,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   205,   205,   205,   205,   206,   206,   206,   208,   207,
     209,   207,   210,   210,   211,   211,   211,   211,   211,   211,
     212,   212,   213,   214,   214,   215,   215,   216,   216,   216,
     216,   216,   216,   217,   217,   218,   218,   218,   218,   219,
     220,   221,   221,   221,   221,   221,   222,   223,   224,   224,
     224,   224,   225,   225,   225,   225,   226,   226,   226,   226,
     227,   227,   227,   228,   228,   228,   229,   229,   229,   229,
     229,   229,   230,   230,   230,   231,   231,   232,   232,   233,
     233,   234,   234,   235,   235,   236,   236,   237,   237,   238,
     239,   239,   239,   240,   240,   241,   242
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     3,     1,     0,     1,     1,     1,
       2,     2,     2,     3,     1,     2,     1,     2,     3,     1,
       3,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     0,     7,     0,     6,     0,     2,     0,     2,     1,
       3,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     1,     3,     1,     3,     1,     1,
       1,     2,     2,     2,     3,     3,     3,     4,     1,     3,
       2,     1,     1,     2,     1,     2,     3,     4,     2,     3,
       3,     4,     1,     4,     5,     1,     1,     2,     3,     4,
       1,     3,     2,     3,     1,     1,     1,     2,     1,     1,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       7,     0,     3,     4,     2,     3,     3,     4,     1,     2,
       2,     1,     2,     3,     2,     4,     2,     2,     1,     7,
       7,     6,     7,     6,     2,     2,     0,     1,     1,     0,
       1,     1,     3,     2,     3,     2,     3,     2,     3,     3,
       5,     1,     3,     3,     4,     1,     2,     2,     4,     2,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     5,     4,     1,     0,     7,
       0,     6,     1,     3,     3,     3,     4,     4,     4,     4,
       1,     2,     3,     2,     3,     3,     3,     3,     4,     5,
       6,     5,     6,     4,     4,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     5,     4,     4,     5,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      26,    45,    46,    50,    49,    47,    48,     0,     0,     0,
     146,     0,    28,    29,    27,    34,    39,    36,     0,    43,
      41,    42,    25,     0,    21,    22,    23,    55,     0,     1,
      32,    35,    37,    30,    31,     0,    44,     0,    40,     0,
      57,    38,    33,    55,    24,    17,    56,    16,     0,    53,
      57,    18,    59,    58,     0,    51,     0,     0,    54,     0,
      60,    11,     0,     9,    10,    12,    13,   114,    61,     0,
       7,     8,    14,    15,    16,    21,     0,    70,     0,    63,
      65,    68,    69,     0,    66,     0,    94,    67,     0,    71,
      52,     0,    83,   112,    78,     0,    74,    76,    82,     0,
      19,    20,     0,     0,     0,    95,    62,    64,    92,    81,
      91,   114,    93,     0,    47,     0,     0,     0,     0,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     5,     2,     3,     4,     6,     0,   212,     0,     7,
      15,   256,    23,   201,   135,     0,   116,   118,     0,     0,
     119,   124,   136,     0,   125,   137,     0,   126,   127,   138,
     161,     0,   128,     0,   139,   129,   186,     0,   140,   141,
     142,   144,   143,     0,   145,   255,   210,   219,   215,   227,
     211,   216,   217,   218,     0,   154,   155,   152,   153,   151,
       0,     0,    72,     0,     0,   243,     0,    96,     0,     0,
      88,    85,     0,    84,   106,   213,   115,    98,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     215,   216,   217,   218,   268,   257,   258,   267,   261,   262,
     265,   271,   266,     0,   256,   276,   280,   283,   286,   292,
     295,   297,   299,   301,   303,   305,   307,   315,   308,     0,
     193,     0,   197,     0,     0,     0,     0,     0,     0,   184,
       0,    17,     0,   195,     0,     0,    78,   122,     0,     0,
       0,     0,     0,   147,   113,   117,     0,   120,   148,   150,
       0,   176,     0,   121,   188,   191,   185,   187,     0,     0,
       0,     0,   260,   259,   313,   314,     0,    86,     0,    75,
       0,    77,    80,    79,   244,    90,     0,    97,    73,    99,
       0,     0,   100,   263,   264,   269,   270,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   194,   198,   224,   246,     0,     0,     0,     0,
     202,   205,     0,   203,     0,   234,   240,     0,   235,     0,
       0,   196,   214,   223,   222,   221,   220,   247,     0,   232,
       0,   123,     0,   162,     0,     0,   189,     0,     0,   245,
       0,   309,    87,   107,   110,     0,    89,   101,     0,     0,
       0,    19,    20,   214,     0,   277,   278,   279,   281,   282,
     284,   285,   288,   290,   287,   289,     0,   291,   293,   294,
     296,   298,   300,   302,   304,     0,     0,   175,   163,     0,
     209,   206,   204,   207,     0,   241,   236,   239,   237,   238,
     226,     0,     0,   248,   253,     0,     0,   164,     0,   168,
       0,   171,     0,   192,     0,   190,   189,     0,     0,   254,
       0,   108,   103,     0,   273,     0,     0,   274,     0,   158,
       0,   124,     0,   131,   132,     0,   133,   134,     0,     0,
     251,     0,     0,   242,     0,   225,   233,   174,   316,     0,
     166,   169,     0,   165,   170,   172,     0,     0,     0,   200,
     249,     0,   109,   111,   104,   272,   275,     0,     0,   149,
     177,     0,   306,   252,   208,   231,     0,   173,   167,     0,
     181,     0,   250,     0,   159,   189,     0,   229,   179,   180,
       0,     0,   189,     0,     0,     0,     0,   183,     0,   160,
     182
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   137,   138,   217,    71,    72,    46,    52,   218,   234,
      24,    25,    26,    11,    12,    13,    14,    15,    16,    17,
     143,    19,    20,    59,    54,    40,    49,    53,    58,    78,
      79,    80,    81,    95,    96,    97,   301,    82,    83,    92,
     199,   200,   109,    84,    85,    86,   112,   207,   208,   209,
     302,   385,   144,    88,   210,   484,   146,   147,   148,   149,
     150,   460,   151,   152,   153,   154,   463,   155,   156,   157,
     158,   464,   159,   280,   160,   373,   438,   439,   440,   441,
     161,   162,   466,   163,   164,   165,   467,   166,   167,   286,
     444,   445,   168,   169,   170,   171,   172,   173,   174,   350,
     351,   352,   353,   175,   176,   177,   220,   179,   506,   474,
     368,   180,   355,   356,   100,   181,   222,   183,   224,   225,
     226,   235,   228,   229,   230,   231,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   189,   190,
     296,   369,   479
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -437
static const yytype_int16 yypact[] =
{
     980,  -437,  -437,  -437,  -437,  -437,  -437,   -65,   -65,   -65,
    -437,    41,   197,   377,   197,  -437,  -437,  -437,   332,  -437,
    -437,  -437,  -437,   194,  -437,  -437,  -437,    19,   199,  -437,
     377,  -437,  -437,   197,   377,   -65,  -437,   -65,  -437,   -65,
      56,  -437,   377,    19,  -437,  -437,  -437,    30,   -65,  -437,
      56,  -437,  -437,    17,    54,  -437,   -65,  2378,  -437,    54,
    -437,  -437,   -65,  -437,  -437,  -437,  -437,    29,  -437,   -65,
      59,  -437,  -437,  -437,    83,    74,   620,  -437,  2402,  -437,
    -437,  -437,  -437,   -22,  -437,   111,  -437,  -437,  2204,  -437,
    -437,    94,  -437,  -437,    94,   203,  -437,   128,  -437,   129,
     123,   123,   122,   -65,   -65,  -437,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,  2076,   388,  1890,  1890,   172,  1890,  -437,
     -49,  1680,   186,   190,   183,   192,   211,   227,   452,   -38,
    -437,  -437,  -437,  -437,  -437,  -437,  1890,  -437,   -65,    93,
     241,   176,   209,   437,  -437,  2140,  -437,  -437,   452,   260,
    -437,  -437,  -437,  2268,  -437,  -437,   266,  -437,  -437,  -437,
    -437,  2268,  -437,  2268,  -437,  -437,  2444,   269,  -437,  -437,
    -437,  -437,  -437,   268,  -437,   290,   275,  -437,    42,  -437,
    -437,   216,   181,   231,   274,   278,   283,  -437,  -437,  -437,
     272,   508,  -437,   -65,  1735,  -437,   289,  -437,   -65,     5,
    -437,  -437,   284,  -437,   190,   287,  -437,  -437,  2140,   298,
    -437,  2140,  1890,  1890,  1890,  1890,  1890,    93,   241,    27,
    -437,  -437,  -437,  -437,   274,  -437,  -437,  -437,  -437,  -437,
    -437,  -437,  -437,  1890,   210,  -437,   323,   366,   370,   188,
     375,   389,   392,   394,   405,    -3,  -437,  -437,  -437,   317,
    -437,   328,  -437,   334,   363,   -65,  1890,  1890,    51,  -437,
     330,   330,   336,  -437,   345,   342,  -437,   347,   378,   380,
      88,  1239,  1350,  -437,  -437,  -437,   -65,  -437,  -437,  -437,
     351,  -437,   383,  -437,  -437,  -437,  -437,   354,  1780,  1890,
     -65,  1890,  -437,  -437,  -437,  -437,  1890,  -437,    39,  -437,
    1585,  -437,  -437,  -437,  -437,  -437,   452,  -437,  -437,  -437,
    2140,  1405,  -437,  -437,  -437,  -437,  -437,    -6,   210,   353,
     357,  1890,  1890,  1890,  1890,  1890,  1890,  1890,  1890,  1890,
    1890,  1890,   452,  1890,  1890,  1890,  1890,  1890,  1890,  1890,
    1890,  -437,  -437,  -437,  -437,   360,   364,   379,   361,   211,
      51,  -437,   211,  -437,  1350,   330,  -437,   -74,   330,   -74,
    1450,  -437,  -437,  -437,  -437,  -437,  -437,  -437,    52,  -437,
     382,   347,   -20,  -437,   387,  2469,  2469,   368,   390,   396,
     386,  -437,  -437,  -437,  -437,    78,  -437,  -437,   398,    58,
    1890,    96,   156,  2494,  2332,  -437,  -437,  -437,   323,   323,
     366,   366,   370,   370,   370,   370,    59,  -437,   188,   188,
     375,   389,   392,   394,   405,   381,  1495,  -437,  -437,   452,
    -437,  -437,  -437,  -437,   397,  -437,   123,  -437,   123,  -437,
     404,    71,  1890,  -437,  -437,   402,  1890,  -437,   -12,  -437,
    1948,  -437,  1890,  -437,   391,   354,  2469,   211,  1540,  -437,
    1630,  -437,  -437,   410,  -437,  1890,  2494,  -437,   409,  -437,
     454,   455,  2332,  -437,  -437,  2332,  -437,  -437,   418,  1890,
    -437,    92,   415,  -437,    54,   421,  -437,  -437,  -437,   420,
    -437,  -437,  2012,  -437,  2204,  -437,   419,  2268,   423,  -437,
    -437,   143,  -437,  -437,  -437,  -437,  -437,  1890,  2268,  -437,
    -437,  1835,  -437,  -437,  -437,  -437,    54,  -437,  -437,   430,
    -437,  2268,  -437,   426,  -437,  2469,   440,  -437,  -437,  -437,
    2332,   438,  2469,   481,  2332,   441,  2332,  -437,  2332,  -437,
    -437
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -437,  -437,   -42,   736,   204,     1,   411,   482,   700,    11,
       7,  -437,    -8,  -437,   527,    33,  -437,    23,  -437,    68,
     565,   -11,    -2,  -437,  -437,   500,   494,  -437,   -58,  -437,
     467,  -437,  -437,  -101,   358,   355,  -298,  -437,  -437,   -52,
     369,  -301,  -437,  -437,  -437,   479,  -437,  -195,  -437,  -437,
     -94,  -437,   -53,   472,   407,   -80,  -123,  -437,  -437,   400,
     -91,  -245,  -362,   677,  -346,  -437,  -437,  -437,  -160,  -437,
    -437,  -437,  -437,  -437,  -437,  -437,  -437,   124,   131,  -419,
    -286,  -437,  -437,  -437,  -437,  -437,  -437,  -437,  -139,  -437,
    -436,   401,  -437,  -437,  -437,  -437,  -437,  -437,  -437,  -437,
     221,  -437,   223,  -437,  -437,  -437,    48,  -437,  -437,  -437,
    -302,  -437,   314,  -264,   -48,   902,   148,  1051,   239,   339,
     395,   -72,   476,   579,  -379,  -437,    73,    95,   -85,    81,
     245,   250,   253,   249,   252,  -437,   127,   296,   841,  -437,
    -437,   854,  -437
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const yytype_int16 yytable[] =
{
      27,    90,   384,   202,    87,   386,   285,    36,   145,   389,
     488,   339,    22,   309,   457,    69,   312,    98,    23,   300,
      28,   485,   275,   435,   196,    87,   101,    43,    22,    44,
     110,   435,   461,   211,   104,    31,    69,   267,   436,    22,
      45,    29,   250,   227,   232,    30,   436,    34,   462,    51,
      47,   201,   203,   263,    91,    77,    31,    51,   431,    47,
     198,    94,   278,   485,    75,    36,    42,    47,    74,   108,
     281,    67,   282,   258,   437,   340,    77,   496,    39,   521,
     142,    32,   480,    75,   268,    75,   525,    74,   275,    74,
     390,   425,    99,   101,   425,    91,    94,   306,    32,   141,
     461,   307,    32,   461,    48,   142,   276,   348,   465,    56,
      32,   349,   251,    74,   471,   387,   462,   270,   472,   462,
      37,   264,   271,    93,   141,   272,   219,   219,   310,   261,
     266,   306,    36,  -157,  -157,   382,   178,   142,  -157,    47,
     313,   314,   315,   316,   432,   142,   491,    57,   433,   198,
     432,   365,   493,   142,   453,   142,   141,    99,   461,    74,
     366,   178,   461,   432,   461,    22,   461,   475,    61,   102,
     450,   101,   451,    37,   462,   371,   465,   141,   462,   465,
     462,    99,   462,   268,   432,   266,   101,   275,   503,   191,
     266,    99,   455,   178,   196,    63,    64,    65,    66,    22,
     142,   178,    74,   142,   111,   328,   329,   330,   331,   178,
     194,   178,   357,   359,   178,   443,   285,   499,   197,   141,
     500,   196,   141,   219,   219,   219,   219,   318,   195,     1,
       2,     3,     4,     5,   465,   432,   182,     6,   465,   512,
     465,   332,   465,   402,   403,   404,   405,   345,     7,   395,
     396,   397,   456,   -16,   196,   468,   178,  -310,  -310,   178,
       8,   182,    44,   427,   198,   429,   270,   233,   266,   391,
     392,   271,  -156,  -156,   272,   523,   254,  -156,   256,   527,
     255,   529,   379,   530,    37,    38,   285,   257,    10,    37,
      41,  -310,  -310,   182,   192,   193,   420,  -311,  -311,   423,
     270,   182,   142,   459,    67,   271,   273,   426,   272,   182,
     428,   182,  -312,  -312,   182,   292,   293,    74,   454,  -257,
    -257,   141,   259,   468,  -258,  -258,   468,   184,   321,   322,
     323,   269,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,    74,   219,   219,   219,   219,   219,   219,
     219,   277,   184,   294,   295,   285,   182,   279,   178,   182,
     288,   275,   285,   289,     1,     2,     3,     4,     5,   324,
     325,   278,     6,   291,   281,   308,   193,   198,   326,   327,
     290,   468,  -105,   495,   184,   468,   142,   468,   304,   468,
     333,   334,   184,   311,   489,    35,   510,   398,   399,   335,
     184,   219,   184,   336,   219,   184,   337,   514,   341,     1,
       2,     3,     4,     5,   408,   409,   505,     6,   338,   342,
     519,   400,   401,   178,   178,   343,   344,   185,   354,   459,
      74,   360,   142,   510,  -121,   514,   361,   519,   362,   193,
       8,   363,   178,   364,   372,   374,   375,   184,   517,   393,
     184,   141,   185,   394,   142,   416,   419,   142,   182,   446,
     417,  -121,  -121,  -121,  -121,  -121,   219,   219,    10,     1,
       2,     3,     4,     5,   142,   418,   142,     6,   469,   142,
     219,   434,   442,   186,   185,   449,   447,   487,   178,   452,
     142,   448,   185,   141,   178,   141,   473,  -230,    61,   477,
     185,   494,   185,   142,   497,   185,   498,  -130,   186,   501,
     178,   504,   142,   178,  -228,   509,   142,   507,   142,   511,
     142,   518,   520,   182,   182,    63,    64,    65,    66,    22,
     178,   522,   178,   526,   524,   178,   407,   528,    60,   262,
     186,    33,   182,    50,    55,   107,   178,   185,   186,   184,
     185,   299,   274,   305,    61,   105,   186,   113,   186,   178,
     298,   186,   481,   178,   187,    18,   284,   287,   178,   482,
     178,   421,   178,   422,   178,   358,   178,    18,    18,    18,
     410,    63,    64,    65,    66,    22,   411,   413,   182,   187,
     412,   414,   381,     0,   182,    18,   502,     0,    18,    18,
       0,     0,     0,   186,   297,     0,   186,    18,     0,     0,
     182,     0,     0,   182,   184,   184,     0,     0,     0,     0,
       0,   187,    76,     0,     0,     0,     0,     0,     0,   187,
     182,     0,   182,   184,     0,   182,     0,   187,     0,   187,
       0,     0,   187,    76,     0,     0,   182,     0,     0,   185,
       0,     0,     1,     2,     3,     4,     5,     0,     0,   182,
       6,     0,     0,   182,     0,     0,    61,   188,   182,     0,
     182,     0,   182,     0,   182,   103,   182,    21,     0,   184,
       0,     0,     0,    35,   187,   184,     0,   187,     0,    21,
      21,    21,   188,    63,    64,    65,    66,    22,     0,     0,
       0,   184,     0,     0,   184,   186,     0,    21,     0,     0,
      21,    21,     0,     0,   185,   185,     0,     0,     0,    21,
       0,   184,     0,   184,   188,     0,   184,     0,     0,     0,
       0,     0,   188,   185,    89,     0,     0,   184,     0,     0,
     188,     0,   188,     0,     0,   188,     0,     0,     0,     0,
     184,     0,     0,     0,   184,    89,     0,    73,     0,   184,
       0,   184,     0,   184,     0,   184,     0,   184,     0,     0,
     186,   186,     0,     0,     0,     0,    73,     0,    73,   185,
       0,     0,     0,     0,     0,   185,   187,   188,   140,   186,
     188,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,   185,    73,     0,   185,     0,     0,     0,     0,     0,
       0,     0,    70,   140,    70,     0,     0,     0,     0,     0,
       0,   185,     0,   185,   139,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,   186,     0,   185,    70,     0,
       0,   186,     0,     0,     0,   140,     0,     0,    73,   139,
     185,   187,   187,     0,   185,     0,     0,   186,     0,   185,
     186,   185,     0,   185,   260,   185,   140,   185,     0,     0,
     187,     0,     0,     0,     0,     0,     0,   186,     0,   186,
       0,   139,   186,     0,    70,     0,     0,     0,     0,   188,
       0,    73,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,   186,     0,   140,     0,
     186,   140,     0,     0,     0,   186,   187,   186,     0,   186,
       0,   186,   187,   186,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,   187,     0,     0,   139,     0,     0,   139,     0,     0,
       0,     0,   317,     0,   188,   188,     0,     0,   187,   248,
     187,     0,   248,   187,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   188,   187,   253,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
     265,   187,     0,     0,     0,     0,   187,     0,   187,     0,
     187,     0,   187,     0,   187,     0,    73,     0,     0,     0,
     140,     0,     1,     2,     3,     4,     5,   221,   221,   188,
       6,     0,     0,     0,     0,   188,     0,     0,     0,     0,
       0,     7,    73,     0,     0,   248,     0,     0,     0,     0,
       0,   188,    70,     8,   188,     0,   139,     0,   303,     0,
       0,     9,     0,     0,     0,     0,     0,   248,     0,     0,
       0,   188,     0,   188,     0,     0,   188,     0,   406,     0,
     319,    10,     0,     0,   248,     0,     0,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   320,     0,     0,
     188,     0,     0,     0,   188,     0,     0,   248,   248,   188,
       0,   188,     0,   188,     0,   188,     0,   188,     0,     0,
     346,   347,   248,   248,   221,   221,   221,   221,     0,    73,
       0,     0,     0,     0,     0,     0,   370,     0,     0,   248,
     248,     0,   248,     0,     0,     0,     0,   248,     0,     0,
     140,   248,   377,   378,     0,   380,     0,     0,     0,     0,
       0,     0,   248,     0,   303,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   223,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
       0,   248,   140,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   415,   248,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   424,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
     139,     0,     0,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,     0,   221,   221,   221,   221,   221,
     221,   221,   212,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,   223,   223,   223,   223,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,   248,     0,     0,
     115,   116,     0,   248,     0,    61,   476,     0,     0,   248,
     478,   248,   221,     0,   122,   221,   486,     0,     0,     0,
     123,     0,     0,     0,   303,     0,     0,   128,     0,     0,
       0,   130,    63,    64,    65,    66,    22,     0,   214,   215,
       0,     0,   131,   132,   133,     0,     0,   134,   135,     0,
       0,     0,     0,     0,   216,   367,     0,     0,   248,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,   212,   213,   516,     0,   221,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,     0,   223,   223,   223,   223,   223,   223,
     223,   115,   116,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,   212,   213,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       0,   223,     0,     0,   223,   216,   115,   116,     0,   195,
       0,    61,     0,   212,   213,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   130,    63,    64,
      65,    66,    22,     0,   214,   215,     0,     0,   131,   132,
     133,   115,   116,   134,   135,     0,    61,     0,   212,   213,
     216,   388,     0,     0,     0,   122,   223,   223,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
     223,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,   115,   116,   134,   135,
       0,    61,     0,   212,   213,   216,   430,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   130,    63,    64,
      65,    66,    22,     0,   214,   215,     0,     0,   131,   132,
     133,   115,   116,   134,   135,     0,    61,     0,   212,   213,
     216,   470,     0,     0,     0,   122,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,   115,   116,   134,   135,
       0,    61,     0,   212,   213,   216,   490,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   130,    63,    64,
      65,    66,    22,     0,   214,   215,     0,     0,   131,   132,
     133,   115,   116,   134,   135,     0,    61,     0,   300,   383,
     216,     0,     0,   212,   213,   122,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       0,   115,   116,   300,   492,   216,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,   212,   213,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       0,   252,     0,     0,     0,   216,   115,   116,     0,     0,
       0,    61,     0,   212,   213,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   130,    63,    64,
      65,    66,    22,     0,   214,   215,     0,     0,   131,   132,
     133,   115,   116,   134,   135,     0,    61,     0,   300,     0,
     216,     0,     0,     0,     0,   122,     0,     0,   212,   213,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       0,   376,     0,     0,     0,   216,   115,   116,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,   212,   213,     0,   123,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   130,    63,    64,
      65,    66,    22,     0,   214,   215,     0,     0,   131,   132,
     133,     0,     0,   134,   135,     0,   515,     0,     0,     0,
     216,   115,   116,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,   130,    63,    64,    65,    66,    22,     0,   214,
     215,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       1,     2,     3,     4,   114,   216,     0,     0,     6,   115,
     116,   435,   117,   118,    61,   119,     0,     0,   120,     0,
       0,     0,   121,   122,     0,     0,   436,     0,     0,   123,
     124,     0,   125,     0,   126,   127,   128,   129,     0,     0,
     130,    63,    64,    65,    66,    22,     0,     0,     0,     0,
       0,   131,   132,   133,     0,     0,   134,   135,     0,    10,
       0,    67,   483,   136,     1,     2,     3,     4,   114,     0,
       0,     0,     6,   115,   116,   435,   117,   118,    61,   119,
       0,     0,   120,     0,     0,     0,   121,   122,     0,     0,
     436,     0,     0,   123,   124,     0,   125,     0,   126,   127,
     128,   129,     0,     0,   130,    63,    64,    65,    66,    22,
       0,     0,     0,     0,     0,   131,   132,   133,     0,     0,
     134,   135,     0,    10,     0,    67,   508,   136,     1,     2,
       3,     4,   114,     0,     0,     0,     6,   115,   116,     0,
     117,   118,    61,   119,     0,     0,   120,     0,     0,     0,
     121,   122,     0,     0,     0,     0,     0,   204,   124,     0,
     125,     0,   126,   127,   128,   129,     0,     0,   205,    63,
      64,    65,    66,    22,     0,     0,     0,     0,     0,   131,
     132,   133,     0,     0,   134,   135,     0,    10,     0,    67,
     206,   136,     1,     2,     3,     4,   114,     0,     0,     0,
       6,   115,   116,     0,   117,   118,    61,   119,     0,     0,
     120,     0,     0,     0,   121,   122,     0,     0,     0,     0,
       0,   123,   124,     0,   125,     0,   126,   127,   128,   129,
       0,     0,   130,    63,    64,    65,    66,    22,     0,     0,
       0,     0,     0,   131,   132,   133,     0,     0,   134,   135,
       0,    10,     0,    67,   206,   136,     1,     2,     3,     4,
     114,     0,     0,     0,     6,   115,   116,     0,   117,   118,
      61,   119,     0,     0,   120,     0,     0,     0,   121,   122,
       0,     0,     0,     0,     0,   123,   124,     0,   125,     0,
     126,   127,   128,   129,     0,     0,   130,    63,    64,    65,
      66,    22,     0,     0,     0,     0,     0,   131,   132,   133,
       0,     0,   134,   135,     0,    10,     0,    67,     0,   136,
       1,     2,     3,     4,     5,     0,     0,     0,     6,   115,
     116,     0,   117,   118,    61,   119,     0,     0,   120,     0,
       0,     0,   121,   122,     0,     0,     0,     0,     0,   123,
     124,     0,   125,     0,   126,   127,   128,   129,     0,     0,
     130,    63,    64,    65,    66,    22,     0,     0,     0,     0,
       0,   131,   132,   133,     0,     0,   134,   135,     0,    10,
       0,    67,     0,   136,     1,     2,     3,     4,     5,     0,
       0,     0,     6,   115,   116,     0,   458,   118,    61,   119,
       0,     0,   120,     0,     0,     0,   121,   122,     0,     0,
       0,     0,     0,   123,   124,     0,   125,     0,   126,   127,
     128,   129,     0,     0,   130,    63,    64,    65,    66,    22,
       1,     2,     3,     4,     5,   131,   132,   133,     6,     0,
     134,   135,     0,    10,    61,    67,     0,   136,     0,     0,
       0,     0,     0,    62,     1,     2,     3,     4,     5,     0,
       0,     8,     6,     0,     0,     0,     0,     0,    61,     0,
       0,    63,    64,    65,    66,    22,     0,    62,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,    10,
       0,    67,    68,     0,     0,    63,    64,    65,    66,    22,
     283,     0,     0,     0,     0,   115,   116,     0,     0,     0,
      61,     0,     0,    10,     0,    67,   106,     0,     0,   122,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
     115,   116,   128,     0,     0,    61,   130,    63,    64,    65,
      66,    22,     0,     0,   122,     0,     0,   131,   132,   133,
     123,     0,   134,   135,     0,     0,     0,   128,     0,   136,
      61,   130,    63,    64,    65,    66,    22,     0,     0,   122,
       0,     0,   131,   132,   133,   123,     0,   134,   135,     0,
       0,     0,   128,     0,   136,     0,   130,    63,    64,    65,
      66,    22,     0,   214,   215,     0,     0,   131,   132,   133,
       0,     0,   134,   135,     0,     0,     0,     0,     0,   216
};

static const yytype_int16 yycheck[] =
{
       8,    59,   300,   104,    57,   306,   166,    18,    88,   311,
     446,    14,    77,   208,   393,    57,   211,    69,     7,    93,
       9,   440,   145,    43,    98,    78,    74,    35,    77,    37,
      83,    43,   394,   113,    76,    12,    78,   138,    58,    77,
      39,     0,    91,   115,   116,    12,    58,    14,   394,    48,
      39,   103,   104,    91,    62,    57,    33,    56,   360,    48,
     102,    69,   153,   482,    57,    76,    33,    56,    57,    91,
     161,    93,   163,   126,    94,    78,    78,   456,    59,   515,
      88,    13,    94,    76,    90,    78,   522,    76,   211,    78,
      96,   355,    98,   141,   358,   103,   104,    92,    30,    88,
     462,    96,    34,   465,    48,   113,   148,    56,   394,    92,
      42,    60,   120,   102,   416,   310,   462,    90,   419,   465,
      90,   129,    95,    94,   113,    98,   115,   116,   208,   128,
     138,    92,   143,    91,    92,    96,    88,   145,    96,   128,
     212,   213,   214,   215,    92,   153,   448,    93,    96,   191,
      92,    63,   450,   161,    96,   163,   145,    98,   520,   148,
      72,   113,   524,    92,   526,    77,   528,    96,    46,    95,
      92,   219,    94,    90,   520,   276,   462,   166,   524,   465,
     526,    98,   528,    90,    92,   193,   234,   310,    96,    95,
     198,    98,    96,   145,    98,    73,    74,    75,    76,    77,
     208,   153,   191,   211,    93,    17,    18,    19,    20,   161,
      82,   163,   260,   261,   166,   375,   376,   462,    96,   208,
     465,    98,   211,   212,   213,   214,   215,   216,    99,    32,
      33,    34,    35,    36,   520,    92,    88,    40,   524,    96,
     526,    53,   528,   328,   329,   330,   331,   255,    51,   321,
     322,   323,    96,    77,    98,   394,   208,    81,    82,   211,
      63,   113,   270,   357,   306,   359,    90,    95,   276,   317,
     318,    95,    91,    92,    98,   520,    90,    96,    95,   524,
      90,   526,   290,   528,    90,    91,   446,    95,    91,    90,
      91,    81,    82,   145,    91,    92,   349,    81,    82,   352,
      90,   153,   310,   394,    93,    95,    97,   355,    98,   161,
     358,   163,    81,    82,   166,    41,    42,   306,   390,    41,
      42,   310,    95,   462,    41,    42,   465,    88,     5,     6,
       7,    90,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,    91,   113,    81,    82,   515,   208,    91,   310,   211,
      91,   484,   522,    95,    32,    33,    34,    35,    36,     3,
       4,   462,    40,    98,   465,    91,    92,   419,     8,     9,
      90,   520,    95,   455,   145,   524,   394,   526,    99,   528,
      15,    16,   153,    95,   447,    63,   487,   324,   325,    10,
     161,   390,   163,    11,   393,   166,    12,   498,    91,    32,
      33,    34,    35,    36,   333,   334,   474,    40,    13,    91,
     511,   326,   327,   375,   376,    91,    63,    88,    98,   520,
     419,    95,   440,   524,    46,   526,    91,   528,    96,    92,
      63,    63,   394,    63,    93,    62,    92,   208,   506,    96,
     211,   440,   113,    96,   462,    95,    95,   465,   310,    91,
      96,    73,    74,    75,    76,    77,   455,   456,    91,    32,
      33,    34,    35,    36,   482,    96,   484,    40,    97,   487,
     469,    99,    95,    88,   145,    99,    96,    96,   440,    91,
     498,    95,   153,   482,   446,   484,    99,    93,    46,    97,
     161,    91,   163,   511,    95,   166,    52,    52,   113,    91,
     462,    96,   520,   465,    93,    96,   524,    97,   526,    96,
     528,    91,    96,   375,   376,    73,    74,    75,    76,    77,
     482,    91,   484,    52,    96,   487,   332,    96,    56,   128,
     145,    14,   394,    43,    50,    78,   498,   208,   153,   310,
     211,   193,   145,   198,    46,    76,   161,    85,   163,   511,
     191,   166,   438,   515,    88,     0,   166,   166,   520,   438,
     522,   350,   524,   350,   526,   261,   528,    12,    13,    14,
     335,    73,    74,    75,    76,    77,   336,   338,   440,   113,
     337,   339,   296,    -1,   446,    30,   469,    -1,    33,    34,
      -1,    -1,    -1,   208,    96,    -1,   211,    42,    -1,    -1,
     462,    -1,    -1,   465,   375,   376,    -1,    -1,    -1,    -1,
      -1,   145,    57,    -1,    -1,    -1,    -1,    -1,    -1,   153,
     482,    -1,   484,   394,    -1,   487,    -1,   161,    -1,   163,
      -1,    -1,   166,    78,    -1,    -1,   498,    -1,    -1,   310,
      -1,    -1,    32,    33,    34,    35,    36,    -1,    -1,   511,
      40,    -1,    -1,   515,    -1,    -1,    46,    88,   520,    -1,
     522,    -1,   524,    -1,   526,    55,   528,     0,    -1,   440,
      -1,    -1,    -1,    63,   208,   446,    -1,   211,    -1,    12,
      13,    14,   113,    73,    74,    75,    76,    77,    -1,    -1,
      -1,   462,    -1,    -1,   465,   310,    -1,    30,    -1,    -1,
      33,    34,    -1,    -1,   375,   376,    -1,    -1,    -1,    42,
      -1,   482,    -1,   484,   145,    -1,   487,    -1,    -1,    -1,
      -1,    -1,   153,   394,    57,    -1,    -1,   498,    -1,    -1,
     161,    -1,   163,    -1,    -1,   166,    -1,    -1,    -1,    -1,
     511,    -1,    -1,    -1,   515,    78,    -1,    57,    -1,   520,
      -1,   522,    -1,   524,    -1,   526,    -1,   528,    -1,    -1,
     375,   376,    -1,    -1,    -1,    -1,    76,    -1,    78,   440,
      -1,    -1,    -1,    -1,    -1,   446,   310,   208,    88,   394,
     211,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   462,   102,    -1,   465,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,   113,    78,    -1,    -1,    -1,    -1,    -1,
      -1,   482,    -1,   484,    88,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   440,    -1,   498,   102,    -1,
      -1,   446,    -1,    -1,    -1,   145,    -1,    -1,   148,   113,
     511,   375,   376,    -1,   515,    -1,    -1,   462,    -1,   520,
     465,   522,    -1,   524,   128,   526,   166,   528,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,   484,
      -1,   145,   487,    -1,   148,    -1,    -1,    -1,    -1,   310,
      -1,   191,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,    -1,   511,    -1,   208,    -1,
     515,   211,    -1,    -1,    -1,   520,   440,   522,    -1,   524,
      -1,   526,   446,   528,    -1,    -1,    -1,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,
      -1,   465,    -1,    -1,   208,    -1,    -1,   211,    -1,    -1,
      -1,    -1,   216,    -1,   375,   376,    -1,    -1,   482,   118,
     484,    -1,   121,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   394,   498,   121,    -1,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,
     136,   515,    -1,    -1,    -1,    -1,   520,    -1,   522,    -1,
     524,    -1,   526,    -1,   528,    -1,   306,    -1,    -1,    -1,
     310,    -1,    32,    33,    34,    35,    36,   115,   116,   440,
      40,    -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,
      -1,    51,   332,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,   462,   306,    63,   465,    -1,   310,    -1,   194,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,   482,    -1,   484,    -1,    -1,   487,    -1,   332,    -1,
     216,    91,    -1,    -1,   233,    -1,    -1,   498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     511,    -1,    -1,    -1,   515,    -1,    -1,   256,   257,   520,
      -1,   522,    -1,   524,    -1,   526,    -1,   528,    -1,    -1,
     256,   257,   271,   272,   212,   213,   214,   215,    -1,   419,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,   288,
     289,    -1,   291,    -1,    -1,    -1,    -1,   296,    -1,    -1,
     440,   300,   288,   289,    -1,   291,    -1,    -1,    -1,    -1,
      -1,    -1,   311,    -1,   300,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,
      -1,   340,   482,    -1,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,   354,    -1,    -1,    -1,    -1,
      -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,
     484,    -1,    -1,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,    -1,   333,   334,   335,   336,   337,
     338,   339,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,   212,   213,   214,   215,    -1,    -1,    -1,
      -1,    -1,    -1,   432,    -1,    -1,    -1,   436,    -1,    -1,
      41,    42,    -1,   442,    -1,    46,   432,    -1,    -1,   448,
     436,   450,   390,    -1,    55,   393,   442,    -1,    -1,    -1,
      61,    -1,    -1,    -1,   450,    -1,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,   497,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   497,    -1,     3,     4,   501,    -1,   455,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   469,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    -1,   333,   334,   335,   336,   337,   338,
     339,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,     3,     4,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      -1,   390,    -1,    -1,   393,    95,    41,    42,    -1,    99,
      -1,    46,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    41,    42,    88,    89,    -1,    46,    -1,     3,     4,
      95,    96,    -1,    -1,    -1,    55,   455,   456,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
     469,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    41,    42,    88,    89,
      -1,    46,    -1,     3,     4,    95,    96,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    41,    42,    88,    89,    -1,    46,    -1,     3,     4,
      95,    96,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    41,    42,    88,    89,
      -1,    46,    -1,     3,     4,    95,    96,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    41,    42,    88,    89,    -1,    46,    -1,    93,    94,
      95,    -1,    -1,     3,     4,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      -1,    41,    42,    93,    94,    95,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,     3,     4,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      -1,    91,    -1,    -1,    -1,    95,    41,    42,    -1,    -1,
      -1,    46,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    41,    42,    88,    89,    -1,    46,    -1,    93,    -1,
      95,    -1,    -1,    -1,    -1,    55,    -1,    -1,     3,     4,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      -1,    91,    -1,    -1,    -1,    95,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,     3,     4,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    -1,    -1,    88,    89,    -1,    91,    -1,    -1,    -1,
      95,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      32,    33,    34,    35,    36,    95,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    -1,    -1,    61,
      62,    -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    88,    89,    -1,    91,
      -1,    93,    94,    95,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    -1,    -1,    61,    62,    -1,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    -1,
      88,    89,    -1,    91,    -1,    93,    94,    95,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      44,    45,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    -1,    -1,    88,    89,    -1,    91,    -1,    93,
      94,    95,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    44,    45,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    89,
      -1,    91,    -1,    93,    94,    95,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      -1,    -1,    88,    89,    -1,    91,    -1,    93,    -1,    95,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    88,    89,    -1,    91,
      -1,    93,    -1,    95,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    44,    45,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    72,    73,    74,    75,    76,    77,
      32,    33,    34,    35,    36,    83,    84,    85,    40,    -1,
      88,    89,    -1,    91,    46,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    55,    32,    33,    34,    35,    36,    -1,
      -1,    63,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    91,
      -1,    93,    94,    -1,    -1,    73,    74,    75,    76,    77,
      36,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    91,    -1,    93,    94,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      41,    42,    68,    -1,    -1,    46,    72,    73,    74,    75,
      76,    77,    -1,    -1,    55,    -1,    -1,    83,    84,    85,
      61,    -1,    88,    89,    -1,    -1,    -1,    68,    -1,    95,
      46,    72,    73,    74,    75,    76,    77,    -1,    -1,    55,
      -1,    -1,    83,    84,    85,    61,    -1,    88,    89,    -1,
      -1,    -1,    68,    -1,    95,    -1,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    -1,    -1,    83,    84,    85,
      -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    34,    35,    36,    40,    51,    63,    71,
      91,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   163,    77,   109,   110,   111,   112,   112,   109,     0,
     115,   117,   119,   114,   115,    63,   121,    90,    91,    59,
     125,    91,   115,   112,   112,   105,   106,   109,    48,   126,
     125,   105,   107,   127,   124,   126,    92,    93,   128,   123,
     107,    46,    55,    73,    74,    75,    76,    93,    94,   102,
     103,   104,   105,   108,   109,   110,   120,   122,   129,   130,
     131,   132,   137,   138,   143,   144,   145,   152,   153,   163,
     128,   112,   139,    94,   112,   133,   134,   135,   139,    98,
     214,   214,    95,    55,   102,   145,    94,   130,    91,   142,
     152,    93,   146,   153,    36,    41,    42,    44,    45,    47,
      50,    54,    55,    61,    62,    64,    66,    67,    68,    69,
      72,    83,    84,    85,    88,    89,    95,   101,   102,   103,
     108,   109,   112,   120,   152,   155,   156,   157,   158,   159,
     160,   162,   163,   164,   165,   167,   168,   169,   170,   172,
     174,   180,   181,   183,   184,   185,   187,   188,   192,   193,
     194,   195,   196,   197,   198,   203,   204,   205,   206,   207,
     211,   215,   216,   217,   218,   219,   220,   222,   223,   238,
     239,    95,    91,    92,    82,    99,    98,    96,   102,   140,
     141,   139,   133,   139,    61,    72,    94,   147,   148,   149,
     154,   155,     3,     4,    79,    80,    95,   103,   108,   109,
     206,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   221,    95,   109,   221,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   241,
      91,   112,    91,   241,    90,    90,    95,    95,   152,    95,
     103,   105,   106,    91,   112,   241,   112,   133,    90,    90,
      90,    95,    98,    97,   154,   156,   102,    91,   160,    91,
     173,   160,   160,    36,   159,   168,   189,   191,    91,    95,
      90,    98,    41,    42,    81,    82,   240,    96,   140,   134,
      93,   136,   150,   241,    99,   135,    92,    96,    91,   147,
     155,    95,   147,   221,   221,   221,   221,   103,   109,   241,
     241,     5,     6,     7,     3,     4,     8,     9,    17,    18,
      19,    20,    53,    15,    16,    10,    11,    12,    13,    14,
      78,    91,    91,    91,    63,   112,   241,   241,    56,    60,
     199,   200,   201,   202,    98,   212,   213,   214,   212,   214,
      95,    91,    96,    63,    63,    63,    72,    96,   210,   241,
     241,   133,    93,   175,    62,    92,    91,   241,   241,   112,
     241,   237,    96,    94,   136,   151,   141,   147,    96,   210,
      96,   214,   214,    96,    96,   221,   221,   221,   226,   226,
     227,   227,   228,   228,   228,   228,   103,   104,   229,   229,
     230,   231,   232,   233,   234,   241,    95,    96,    96,    95,
     152,   200,   202,   152,   241,   213,   214,   150,   214,   150,
      96,   210,    92,    96,    99,    43,    58,    94,   176,   177,
     178,   179,    95,   168,   190,   191,    91,    96,    95,    99,
      92,    94,    91,    96,   221,    96,    96,   224,    44,   160,
     161,   162,   164,   166,   171,   180,   182,   186,   188,    97,
      96,   210,   141,    99,   209,    96,   241,    97,   241,   242,
      94,   177,   178,    94,   155,   179,   241,    96,   190,   152,
      96,   210,    94,   136,    91,   221,   224,    95,    52,   161,
     161,    91,   236,    96,    96,   128,   208,    97,    94,    96,
     160,    96,    96,   241,   160,    91,   241,   128,    91,   160,
      96,   190,    91,   161,    96,   190,    52,   161,    96,   161,
     161
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
        case 2:

    { (yyval.expression) = new(zone()) Literal(this, EXPR_INT_LITERAL, (yyvsp[(1) - (1)].literal)); ;}
    break;

  case 3:

    { (yyval.expression) = new(zone()) Literal(this, EXPR_FLOAT_LITERAL, (yyvsp[(1) - (1)].literal)); ;}
    break;

  case 4:

    { (yyval.expression) = new(zone()) Literal(this, EXPR_BOOL_LITERAL, (yyvsp[(1) - (1)].literal)); ;}
    break;

  case 5:

    { (yyval.expression) = new(zone()) Literal(this, EXPR_STRING_LITERAL, (yyvsp[(1) - (1)].literal)); ;}
    break;

  case 6:

    { (yyval.expression) = new(zone()) Literal(this, EXPR_NULL_LITERAL, 0); ;}
    break;

  case 9:

    { (yyval.type) = INTEGER_TYPE; ;}
    break;

  case 10:

    { (yyval.type) = FLOAT_TYPE; ;}
    break;

  case 11:

    { (yyval.type) = BOOLEAN_TYPE; ;}
    break;

  case 12:

    { (yyval.type) = OBJECT_TYPE; ;}
    break;

  case 13:

    { (yyval.type) = STRING_TYPE; ;}
    break;

  case 14:

    {
		(yyval.type) = LoadType( (yyvsp[(1) - (1)].identifier) );
	;}
    break;

  case 19:

    {
		i::Type *prim = (yyvsp[(1) - (2)].type);
		string type_name(prim->name());
		
		while(current_osb-- > 0)
		{
			type_name = type_name+"[]";
		}
		// TODO: Register array type here.
	;}
    break;

  case 20:

    {
		i::Type *type = LoadType( (yyvsp[(1) - (2)].identifier) );
		string type_name(type->name());
		
		while(current_osb-- > 0) {
			type_name = type_name+"[]";
		}
		
		// TODO: Register array type
		// type = new i::Type(type, type_name);
	;}
    break;

  case 24:

    {
		(yyvsp[(1) - (3)].identifier)->append(1, '.').append(*(yyvsp[(3) - (3)].identifier));
	;}
    break;

  case 38:

    {
		BeginNamespace( (yyvsp[(2) - (3)].identifier) );
	;}
    break;

  case 40:

    {
		DoUse( (yyvsp[(2) - (3)].identifier) );
	;}
    break;

  case 41:

    {
		EndClassDeclaration();
	;}
    break;

  case 43:

    {
		modifier_ = (yyvsp[(1) - (1)].modifier);
	;}
    break;

  case 44:

    {
		modifier_ |= (yyvsp[(2) - (2)].modifier);
	;}
    break;

  case 45:

    { (yyval.modifier) = ACC_PUBLIC; ;}
    break;

  case 46:

    { (yyval.modifier) = ACC_PRIVATE; ;}
    break;

  case 47:

    { (yyval.modifier) = ACC_FINAL; ;}
    break;

  case 48:

    { (yyval.modifier) = ACC_ABSTRACT; ;}
    break;

  case 49:

    { (yyval.modifier) = ACC_STATIC; ;}
    break;

  case 50:

    { (yyval.modifier) = ACC_PROTECTED; ;}
    break;

  case 51:

    { 
		CreateClass( (yyvsp[(1) - (5)].modifier), (yyvsp[(3) - (5)].identifier), (yyvsp[(4) - (5)].identifier), (yyvsp[(5) - (5)].strings) );
	;}
    break;

  case 53:

    {
		CreateClass( ACC_PUBLIC, (yyvsp[(2) - (4)].identifier), (yyvsp[(3) - (4)].identifier), (yyvsp[(4) - (4)].strings) );
	;}
    break;

  case 55:

    { (yyval.identifier) = NULL; ;}
    break;

  case 56:

    { 
		(yyval.identifier) = (yyvsp[(2) - (2)].identifier); 
	;}
    break;

  case 58:

    {
		(yyval.strings) = (yyvsp[(2) - (2)].strings);
	;}
    break;

  case 59:

    {
		(yyval.strings) = new List<string *>();
		(yyval.strings)->append( (yyvsp[(1) - (1)].identifier) );
	;}
    break;

  case 60:

    {
		(yyval.strings)->append( (yyvsp[(3) - (3)].identifier) );
	;}
    break;

  case 70:

    {
		EndClassDeclaration();
	;}
    break;

  case 72:

    {
		DeclareFields( ACC_PUBLIC, (yyvsp[(1) - (3)].type), (yyvsp[(2) - (3)].expression) );
	;}
    break;

  case 73:

    {
		DeclareFields( (yyvsp[(1) - (4)].modifier), (yyvsp[(2) - (4)].type), (yyvsp[(3) - (4)].expression) );
	;}
    break;

  case 74:

    {
		(yyval.expression) = new(zone()) List<Expression *>();
		(yyval.expression)->append( (yyvsp[(1) - (1)].expression) );
	;}
    break;

  case 75:

    {
		(yyval.expression)->append( (yyvsp[(3) - (3)].expression) );
	;}
    break;

  case 76:

    {
		(yyval.expression) = new(zone()) Identifier(this, (yyvsp[(1) - (1)].identifier));
	;}
    break;

  case 77:

    {
		(yyval.expression) = new(zone()) Assign(this, new(zone()) Identifier(this, (yyvsp[(1) - (3)].identifier)), (yyvsp[(3) - (3)].expression));
	;}
    break;

  case 81:

    { 
		EndMethodDeclaration( (yyvsp[(2) - (2)].statement) );
	;}
    break;

  case 82:

    {
		(yyval.expression) = new(zone()) MethodDeclaration(this, ACC_PUBLIC, (yyvsp[(1) - (2)].type), (yyvsp[(2) - (2)].meth_decl).name, (yyvsp[(2) - (2)].meth_decl).parameters);
	;}
    break;

  case 83:

    {
		(yyval.expression) = new(zone()) MethodDeclaration(this, ACC_PUBLIC, VOID_TYPE, (yyvsp[(2) - (2)].meth_decl).name, (yyvsp[(2) - (2)].meth_decl).parameters);
	;}
    break;

  case 84:

    {
		(yyval.expression) = new(zone()) MethodDeclaration(this, (yyvsp[(1) - (3)].modifier), (yyvsp[(2) - (3)].type), (yyvsp[(3) - (3)].meth_decl).name, (yyvsp[(3) - (3)].meth_decl).parameters);
	;}
    break;

  case 85:

    { 
		(yyval.expression) = new(zone()) MethodDeclaration(this, (yyvsp[(1) - (3)].modifier), VOID_TYPE, (yyvsp[(3) - (3)].meth_decl).name, (yyvsp[(3) - (3)].meth_decl).parameters);
	;}
    break;

  case 86:

    {
		(yyval.meth_decl).name = (yyvsp[(1) - (3)].identifier);
		(yyval.meth_decl).parameters = NULL;
	;}
    break;

  case 87:

    {
		(yyval.meth_decl).name = (yyvsp[(1) - (4)].identifier);
		(yyval.meth_decl).parameters = (yyvsp[(3) - (4)].decls);
	;}
    break;

  case 88:

    {
		(yyval.decls) = new(zone()) List<Declarator>();
		(yyval.decls)->append( (yyvsp[(1) - (1)].decl) );
	;}
    break;

  case 89:

    {
		(yyval.decls)->append( (yyvsp[(3) - (3)].decl) );
	;}
    break;

  case 90:

    {
		(yyval.decl).type = (yyvsp[(1) - (2)].type);
		(yyval.decl).name = (yyvsp[(2) - (2)].identifier);
	;}
    break;

  case 92:

    {
		(yyval.statement) = NULL;
	;}
    break;

  case 93:

    {
	;}
    break;

  case 94:

    {
		(yyval.expression) = new(zone()) MethodDeclaration(this, ACC_PUBLIC, VOID_TYPE, (yyvsp[(1) - (1)].meth_decl), NULL);
	;}
    break;

  case 95:

    {
		(yyval.expression) = new(zone()) MethodDeclaration(this, (yyvsp[(1) - (2)].modifier), VOID_TYPE, (yyvsp[(1) - (2)].modifier), (yyvsp[(2) - (2)].meth_decl));
	;}
    break;

  case 96:

    {
		(yyval.meth_decl).name = (yyvsp[(1) - (3)].identifier);
		(yyval.meth_decl).parameters = NULL;
	;}
    break;

  case 97:

    {
		(yyval.meth_decl).name = (yyvsp[(1) - (4)].identifier);
		(yyval.meth_decl).parameters = (yyvsp[(3) - (4)].decls);
	;}
    break;

  case 98:

    {
		(yyval.statement) = (yyvsp[(2) - (2)].statement);
	;}
    break;

  case 99:

    {
		(yyval.statement) = (yyvsp[(3) - (3)].statement);
	;}
    break;

  case 100:

    {
		(yyval.statement) = (yyvsp[(3) - (3)].statement);
	;}
    break;

  case 101:

    { 
		(yyval.statement) = (yyvsp[(4) - (4)].statement); 
	;}
    break;

  case 103:

    {
		(yyval.expression) = new(zone()) Call(this, (yyvsp[(1) - (4)].expression), NULL);
	;}
    break;

  case 104:

    {
		(yyval.expression) = new(zone()) Call(this, (yyvsp[(1) - (5)].expression), NULL);
	;}
    break;

  case 105:

    {
		(yyval.expression) = new(zone()) Unary(this, EXPR_THIS);
	;}
    break;

  case 106:

    {
		(yyval.expression) = new(zone()) Unary(this, EXPR_PARENT);
	;}
    break;

  case 107:

    {
	;}
    break;

  case 108:

    {
	
	;}
    break;

  case 109:

    {
	
	;}
    break;

  case 110:

    {
	
	;}
    break;

  case 111:

    {
	
	;}
    break;

  case 112:

    {
		(yyval.statement) = NULL;
	;}
    break;

  case 113:

    {
		(yyval.statement) = (yyvsp[(3) - (3)].statement);
	;}
    break;

  case 114:

    {
	;}
    break;

  case 115:

    {
	
	;}
    break;

  case 119:

    {
		current_decl->scope->statement.append( (yyvsp[(1) - (1)].statement) );
	;}
    break;

  case 120:

    {
		(yyval.statement) = (yyvsp[(1) - (2)].statement);
	;}
    break;

  case 121:

    { (yyval.modifier) = ACC_FINAL; ;}
    break;

  case 122:

    {
		(yyval.statement) = DeclareVariable( 0, (yyvsp[(1) - (2)].type), (yyvsp[(2) - (2)].expression) );
	;}
    break;

  case 123:

    {
		(yyval.statement) = DeclareVariable( (yyvsp[(1) - (3)].modifier), (yyvsp[(2) - (3)].type), (yyvsp[(3) - (3)].expression) );
	;}
    break;

  case 129:

    {
	;}
    break;

  case 134:

    {
	
	;}
    break;

  case 146:

    {
	
	;}
    break;

  case 147:

    {
	;}
    break;

  case 148:

    {
	;}
    break;

  case 149:

    {
	
	;}
    break;

  case 150:

    {
	
	;}
    break;

  case 158:

    {
	
	;}
    break;

  case 159:

    {
	
	;}
    break;

  case 160:

    {
	
	;}
    break;

  case 161:

    {
	
	;}
    break;

  case 162:

    {
	
	;}
    break;

  case 163:

    {
	
	;}
    break;

  case 164:

    {
	
	;}
    break;

  case 165:

    {
	
	;}
    break;

  case 166:

    {
	
	;}
    break;

  case 167:

    {
	
	;}
    break;

  case 173:

    {
	
	;}
    break;

  case 174:

    {
	
	;}
    break;

  case 175:

    {
	
	;}
    break;

  case 176:

    {
	
	;}
    break;

  case 177:

    {
	
	;}
    break;

  case 178:

    {
	
	;}
    break;

  case 179:

    {
	
	;}
    break;

  case 180:

    {
	
	;}
    break;

  case 181:

    {
	
	;}
    break;

  case 182:

    {
	
	;}
    break;

  case 183:

    {
	
	;}
    break;

  case 184:

    {
	
	;}
    break;

  case 185:

    {
	
	;}
    break;

  case 187:

    {
	
	;}
    break;

  case 188:

    { 
	;}
    break;

  case 190:

    {
	
	;}
    break;

  case 191:

    {
	
	;}
    break;

  case 192:

    {
	
	;}
    break;

  case 193:

    {
	
	;}
    break;

  case 194:

    {
	
	;}
    break;

  case 195:

    {
	
	;}
    break;

  case 196:

    {
	
	;}
    break;

  case 197:

    {
	
	;}
    break;

  case 198:

    {
	
	;}
    break;

  case 199:

    {
	
	;}
    break;

  case 200:

    {
	
	;}
    break;

  case 201:

    {
	
	;}
    break;

  case 202:

    {
	;}
    break;

  case 203:

    {
	
	;}
    break;

  case 204:

    {
	;}
    break;

  case 206:

    {
	
	;}
    break;

  case 207:

    { 
	;}
    break;

  case 208:

    {
	;}
    break;

  case 209:

    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 212:

    { (yyval.expression) = (yyvsp[(1) - (1)].expression); ;}
    break;

  case 213:

    { (yyval.expression) = new(zone()) Unary(this, EXPR_THIS); ;}
    break;

  case 214:

    { (yyval.expression) = (yyvsp[(2) - (3)].expression); ;}
    break;

  case 220:

    {
	
	;}
    break;

  case 221:

    {
	
	;}
    break;

  case 222:

    {
	
	;}
    break;

  case 223:

    {
	
	;}
    break;

  case 224:

    {
	
	;}
    break;

  case 225:

    {
	
	;}
    break;

  case 226:

    {
	
	;}
    break;

  case 228:

    {
	
	;}
    break;

  case 229:

    { 
	;}
    break;

  case 230:

    { 
	
	;}
    break;

  case 231:

    { 
	;}
    break;

  case 232:

    {
		(yyval.argument_list) = new(zone()) List<Expression *>();
		(yyval.argument_list)->append( (yyvsp[(1) - (1)].expression) );
	;}
    break;

  case 233:

    {
		(yyval.argument_list)->append( (yyvsp[(3) - (3)].expression) );
	;}
    break;

  case 234:

    {
	
	;}
    break;

  case 235:

    {
	
	;}
    break;

  case 236:

    {
	
	;}
    break;

  case 237:

    {
	
	;}
    break;

  case 238:

    {
	
	;}
    break;

  case 239:

    {
	
	;}
    break;

  case 240:

    {
	
	;}
    break;

  case 241:

    {
	
	;}
    break;

  case 242:

    { 
	;}
    break;

  case 243:

    {
		current_osb = 0;
	;}
    break;

  case 244:

    {
		current_osb++;
	;}
    break;

  case 245:

    {
	
	;}
    break;

  case 246:

    {
	
	;}
    break;

  case 247:

    {
	
	;}
    break;

  case 248:

    {
	
	;}
    break;

  case 249:

    {
	
	;}
    break;

  case 250:

    {
	
	;}
    break;

  case 251:

    {
	
	;}
    break;

  case 252:

    {
	
	;}
    break;

  case 253:

    {
	
	;}
    break;

  case 254:

    {
	
	;}
    break;

  case 256:

    { (yyval.expression) = new(zone()) Identifier(this, (yyvsp[(1) - (1)].identifier)); ;}
    break;

  case 259:

    {
	
	;}
    break;

  case 260:

    {
	
	;}
    break;

  case 263:

    {
	
	;}
    break;

  case 264:

    {
	
	;}
    break;

  case 266:

    {
	
	;}
    break;

  case 267:

    {
	
	;}
    break;

  case 269:

    {
	
	;}
    break;

  case 270:

    {
	
	;}
    break;

  case 272:

    {
	
	;}
    break;

  case 273:

    {
	
	;}
    break;

  case 274:

    {
	
	;}
    break;

  case 275:

    { 
	;}
    break;

  case 277:

    {
	
	;}
    break;

  case 278:

    {
	
	;}
    break;

  case 279:

    {
	
	;}
    break;

  case 281:

    {
	
	;}
    break;

  case 282:

    {
	
	;}
    break;

  case 284:

    {
	
	;}
    break;

  case 285:

    {
	
	;}
    break;

  case 287:

    {
	
	;}
    break;

  case 288:

    {
	
	;}
    break;

  case 289:

    {
	
	;}
    break;

  case 290:

    {
	
	;}
    break;

  case 291:

    {
	
	;}
    break;

  case 293:

    {
	
	;}
    break;

  case 294:

    {
	
	;}
    break;

  case 296:

    {
	
	;}
    break;

  case 298:

    {
	
	;}
    break;

  case 300:

    {
	;}
    break;

  case 302:

    {
	;}
    break;

  case 304:

    {
	;}
    break;

  case 306:

    {
	;}
    break;

  case 309:

    {
	
	;}
    break;

  case 310:

    { (yyval.expression) = new(zone()) Identifier(this, (yyvsp[(1) - (1)].identifier)); ;}
    break;



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




