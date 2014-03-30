/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
     BYTE_TK = 328,
     SHORT_TK = 329,
     INT_TK = 330,
     LONG_TK = 331,
     CHAR_TK = 332,
     INTEGRAL_TK = 333,
     FLOAT_TK = 334,
     DOUBLE_TK = 335,
     FP_TK = 336,
     ID_TK = 337,
     REL_QM_TK = 338,
     NOT_TK = 339,
     NEG_TK = 340,
     ASSIGN_ANY_TK = 341,
     ASSIGN_TK = 342,
     STRING_LIT_TK = 343,
     INT_LIT_TK = 344,
     FP_LIT_TK = 345,
     TRUE_TK = 346,
     FALSE_TK = 347,
     BOOL_LIT_TK = 348,
     NULL_TK = 349
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYLAST   2662

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNRULES -- Number of states.  */
#define YYNSTATES  534

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     102,   103,     2,     2,    97,     2,    95,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   104,    96,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   100,     2,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,     2,    99,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    36,    39,
      41,    43,    45,    49,    51,    52,    54,    56,    58,    61,
      64,    67,    71,    73,    76,    78,    81,    85,    87,    91,
      93,    95,    97,   100,   102,   104,   106,   108,   110,   112,
     113,   121,   122,   129,   130,   133,   134,   137,   139,   143,
     146,   150,   152,   155,   157,   159,   161,   163,   165,   167,
     169,   173,   178,   180,   184,   186,   190,   192,   196,   198,
     200,   203,   206,   209,   213,   217,   221,   226,   228,   232,
     235,   237,   239,   240,   244,   246,   249,   253,   258,   261,
     265,   269,   274,   276,   281,   287,   289,   291,   294,   298,
     303,   305,   309,   312,   316,   318,   320,   322,   325,   327,
     329,   331,   334,   336,   339,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   383,   385,   387,   389,   392,
     395,   398,   401,   403,   405,   407,   409,   411,   413,   415,
     421,   429,   437,   438,   442,   447,   450,   454,   458,   463,
     465,   468,   471,   473,   476,   480,   483,   488,   491,   494,
     496,   504,   512,   519,   527,   534,   537,   540,   541,   543,
     545,   546,   548,   550,   554,   557,   561,   564,   568,   571,
     575,   579,   585,   587,   591,   595,   600,   602,   605,   608,
     613,   616,   618,   620,   622,   624,   628,   630,   632,   634,
     636,   638,   642,   646,   650,   654,   658,   664,   669,   671,
     672,   680,   681,   688,   690,   694,   698,   702,   707,   712,
     717,   722,   724,   727,   731,   734,   738,   742,   746,   750,
     755,   761,   768,   774,   781,   786,   791,   793,   795,   797,
     799,   802,   805,   807,   809,   812,   815,   817,   820,   823,
     825,   828,   831,   833,   839,   844,   849,   855,   857,   861,
     865,   869,   871,   875,   879,   881,   885,   889,   891,   895,
     899,   903,   907,   911,   913,   917,   921,   923,   927,   929,
     933,   935,   939,   941,   945,   947,   951,   953,   959,   961,
     963,   967,   969,   971,   973,   975,   977,   979
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,    89,    -1,    90,    -1,    93,    -1,    88,
      -1,    94,    -1,   108,    -1,   109,    -1,    78,    -1,    81,
      -1,    46,    -1,   110,    -1,   113,    -1,   114,    -1,   110,
      -1,   110,    -1,   108,   220,    -1,   114,   220,    -1,   115,
      -1,   116,    -1,   117,    -1,   114,    95,   117,    -1,    82,
      -1,    -1,   121,    -1,   119,    -1,   120,    -1,   121,   119,
      -1,   121,   120,    -1,   119,   120,    -1,   121,   119,   120,
      -1,   122,    -1,   119,   122,    -1,   124,    -1,   120,   124,
      -1,    71,   114,    96,    -1,   123,    -1,    51,   114,    96,
      -1,   127,    -1,   169,    -1,   126,    -1,   125,   126,    -1,
      32,    -1,    33,    -1,    36,    -1,    40,    -1,    35,    -1,
      34,    -1,    -1,   125,    63,   117,   130,   131,   128,   133,
      -1,    -1,    63,   117,   130,   131,   129,   133,    -1,    -1,
      59,   111,    -1,    -1,    48,   132,    -1,   112,    -1,   132,
      97,   112,    -1,    98,    99,    -1,    98,   134,    99,    -1,
     135,    -1,   134,   135,    -1,   136,    -1,   148,    -1,   158,
      -1,   137,    -1,   142,    -1,   127,    -1,   169,    -1,   107,
     138,    96,    -1,   125,   107,   138,    96,    -1,   139,    -1,
     138,    97,   139,    -1,   140,    -1,   140,    87,   141,    -1,
     117,    -1,   140,   100,   101,    -1,   247,    -1,   156,    -1,
     143,   147,    -1,   107,   144,    -1,    55,   144,    -1,   125,
     107,   144,    -1,   125,    55,   144,    -1,   117,   102,   103,
      -1,   117,   102,   145,   103,    -1,   146,    -1,   145,    97,
     146,    -1,   107,   140,    -1,   158,    -1,    96,    -1,    -1,
     150,   149,   152,    -1,   151,    -1,   125,   151,    -1,   115,
     102,   103,    -1,   115,   102,   145,   103,    -1,   159,   153,
      -1,   159,   154,   153,    -1,   159,   161,   153,    -1,   159,
     154,   161,   153,    -1,   160,    -1,   155,   102,   103,    96,
      -1,   155,   102,   216,   103,    96,    -1,    72,    -1,    61,
      -1,    98,    99,    -1,    98,   157,    99,    -1,    98,   157,
      97,    99,    -1,   141,    -1,   157,    97,   141,    -1,    98,
      99,    -1,   159,   161,   160,    -1,    98,    -1,    99,    -1,
     162,    -1,   161,   162,    -1,   163,    -1,   166,    -1,   127,
      -1,   165,    96,    -1,    36,    -1,   107,   138,    -1,   164,
     107,   138,    -1,   168,    -1,   171,    -1,   175,    -1,   176,
      -1,   187,    -1,   191,    -1,   168,    -1,   172,    -1,   177,
      -1,   188,    -1,   192,    -1,   158,    -1,   169,    -1,   173,
      -1,   178,    -1,   190,    -1,   198,    -1,   199,    -1,   200,
      -1,   202,    -1,   201,    -1,   204,    -1,    96,    -1,   117,
     104,    -1,   170,   166,    -1,   170,   167,    -1,   174,    96,
      -1,   244,    -1,   228,    -1,   229,    -1,   225,    -1,   226,
      -1,   222,    -1,   212,    -1,    44,   102,   247,   103,   166,
      -1,    44,   102,   247,   103,   167,    52,   166,    -1,    44,
     102,   247,   103,   167,    52,   167,    -1,    -1,   180,   179,
     181,    -1,    64,   102,   247,   103,    -1,    98,    99,    -1,
      98,   184,    99,    -1,    98,   182,    99,    -1,    98,   182,
     184,    99,    -1,   183,    -1,   182,   183,    -1,   184,   161,
      -1,   185,    -1,   184,   185,    -1,    58,   248,   104,    -1,
      43,   104,    -1,    62,   102,   247,   103,    -1,   186,   166,
      -1,   186,   167,    -1,    47,    -1,   189,   166,    62,   102,
     247,   103,    96,    -1,   194,    96,   247,    96,   196,   103,
     166,    -1,   194,    96,    96,   196,   103,   166,    -1,   194,
      96,   247,    96,   196,   103,   167,    -1,   194,    96,    96,
     196,   103,   167,    -1,    67,   102,    -1,   193,   195,    -1,
      -1,   197,    -1,   165,    -1,    -1,   197,    -1,   174,    -1,
     197,    97,   174,    -1,    50,    96,    -1,    50,   117,    96,
      -1,    69,    96,    -1,    69,   117,    96,    -1,    54,    96,
      -1,    54,   247,    96,    -1,    45,   247,    96,    -1,   203,
     102,   247,   103,   158,    -1,   125,    -1,    66,   158,   205,
      -1,    66,   158,   208,    -1,    66,   158,   205,   208,    -1,
     206,    -1,   205,   206,    -1,   207,   158,    -1,    56,   102,
     146,   103,    -1,    60,   158,    -1,   210,    -1,   217,    -1,
     106,    -1,    72,    -1,   102,   247,   103,    -1,   212,    -1,
     221,    -1,   222,    -1,   223,    -1,   211,    -1,   114,    95,
      72,    -1,   114,    95,    63,    -1,   113,    95,    63,    -1,
     108,    95,    63,    -1,    55,    95,    63,    -1,    68,   111,
     102,   216,   103,    -1,    68,   111,   102,   103,    -1,   213,
      -1,    -1,    68,   111,   102,   216,   103,   214,   133,    -1,
      -1,    68,   111,   102,   103,   215,   133,    -1,   247,    -1,
     216,    97,   247,    -1,    68,   108,   218,    -1,    68,   110,
     218,    -1,    68,   108,   218,   220,    -1,    68,   110,   218,
     220,    -1,    68,   110,   220,   156,    -1,    68,   108,   220,
     156,    -1,   219,    -1,   218,   219,    -1,   100,   247,   101,
      -1,   100,   101,    -1,   220,   100,   101,    -1,   209,    95,
     117,    -1,    61,    95,   117,    -1,   114,   102,   103,    -1,
     114,   102,   216,   103,    -1,   209,    95,   117,   102,   103,
      -1,   209,    95,   117,   102,   216,   103,    -1,    61,    95,
     117,   102,   103,    -1,    61,    95,   117,   102,   216,   103,
      -1,   114,   100,   247,   101,    -1,   210,   100,   247,   101,
      -1,   209,    -1,   114,    -1,   225,    -1,   226,    -1,   224,
      42,    -1,   224,    41,    -1,   228,    -1,   229,    -1,     3,
     227,    -1,     4,   227,    -1,   230,    -1,    42,   227,    -1,
      41,   227,    -1,   224,    -1,    84,   227,    -1,    85,   227,
      -1,   231,    -1,   102,   108,   220,   103,   227,    -1,   102,
     108,   103,   227,    -1,   102,   247,   103,   230,    -1,   102,
     114,   220,   103,   230,    -1,   227,    -1,   232,     5,   227,
      -1,   232,     6,   227,    -1,   232,     7,   227,    -1,   232,
      -1,   233,     3,   232,    -1,   233,     4,   232,    -1,   233,
      -1,   234,     8,   233,    -1,   234,     9,   233,    -1,   234,
      -1,   235,    19,   234,    -1,   235,    17,   234,    -1,   235,
      20,   234,    -1,   235,    18,   234,    -1,   235,    53,   109,
      -1,   235,    -1,   236,    15,   235,    -1,   236,    16,   235,
      -1,   236,    -1,   237,    10,   236,    -1,   237,    -1,   238,
      11,   237,    -1,   238,    -1,   239,    12,   238,    -1,   239,
      -1,   240,    13,   239,    -1,   240,    -1,   241,    14,   240,
      -1,   241,    -1,   241,    83,   247,   104,   242,    -1,   242,
      -1,   244,    -1,   245,   246,   243,    -1,   114,    -1,   221,
      -1,   223,    -1,    86,    -1,    87,    -1,   243,    -1,   247,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    68,    69,    74,    75,    79,
      80,    81,    85,    88,    92,    96,   100,   104,   114,   128,
     129,   133,   137,   143,   146,   147,   148,   149,   150,   151,
     152,   153,   157,   158,   162,   163,   167,   173,   177,   183,
     186,   190,   193,   199,   200,   201,   202,   203,   204,   208,
     208,   211,   211,   217,   218,   223,   224,   230,   234,   240,
     241,   245,   246,   250,   251,   252,   256,   257,   258,   261,
     266,   269,   275,   279,   285,   288,   294,   295,   301,   302,
     307,   313,   316,   319,   322,   328,   332,   339,   343,   349,
     356,   357,   363,   363,   371,   374,   380,   383,   389,   392,
     395,   398,   404,   408,   411,   417,   420,   426,   428,   431,
     437,   440,   446,   448,   454,   460,   466,   467,   471,   472,
     475,   481,   485,   489,   492,   498,   499,   500,   501,   502,
     503,   508,   509,   510,   511,   512,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   532,   538,   543,
     548,   554,   560,   561,   562,   563,   564,   565,   566,   570,
     576,   582,   588,   588,   597,   606,   609,   612,   615,   621,
     622,   626,   630,   631,   635,   638,   644,   650,   656,   662,
     668,   674,   677,   683,   686,   692,   698,   703,   705,   708,
     712,   714,   720,   723,   729,   732,   738,   741,   747,   750,
     756,   762,   768,   774,   776,   779,   784,   785,   791,   795,
     800,   804,   805,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   823,   826,   829,   832,   838,   841,   844,   848,
     848,   852,   852,   859,   862,   868,   871,   874,   877,   880,
     883,   889,   892,   898,   903,   906,   912,   915,   921,   924,
     927,   930,   933,   936,   942,   945,   951,   952,   953,   954,
     958,   964,   970,   971,   972,   975,   978,   982,   988,   994,
     995,   998,  1001,  1005,  1008,  1011,  1014,  1019,  1020,  1023,
    1026,  1032,  1033,  1036,  1042,  1043,  1046,  1052,  1053,  1056,
    1059,  1062,  1065,  1072,  1073,  1076,  1082,  1083,  1089,  1090,
    1096,  1097,  1102,  1103,  1108,  1109,  1114,  1115,  1120,  1121,
    1125,  1131,  1132,  1133,  1137,  1138,  1142,  1146
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
  "CONTINUE_TK", "GOTO_TK", "NAMESPACE_TK", "THIS_TK", "BYTE_TK",
  "SHORT_TK", "INT_TK", "LONG_TK", "CHAR_TK", "INTEGRAL_TK", "FLOAT_TK",
  "DOUBLE_TK", "FP_TK", "ID_TK", "REL_QM_TK", "NOT_TK", "NEG_TK",
  "ASSIGN_ANY_TK", "ASSIGN_TK", "STRING_LIT_TK", "INT_LIT_TK", "FP_LIT_TK",
  "TRUE_TK", "FALSE_TK", "BOOL_LIT_TK", "NULL_TK", "'.'", "';'", "','",
  "'{'", "'}'", "'['", "']'", "'('", "')'", "':'", "$accept", "literal",
  "type", "primitive_type", "reference_type", "class_or_interface_type",
  "class_type", "interface_type", "array_type", "name", "simple_name",
  "qualified_name", "identifier", "program", "import_declarations",
  "type_declarations", "package_declaration", "import_declaration",
  "single_type_import_declaration", "type_declaration", "modifiers",
  "modifier", "class_declaration", "$@1", "$@2", "super", "interfaces",
  "interface_type_list", "class_body", "class_body_declarations",
  "class_body_declaration", "class_member_declaration",
  "field_declaration", "variable_declarators", "variable_declarator",
  "variable_declarator_id", "variable_initializer", "method_declaration",
  "method_header", "method_declarator", "formal_parameter_list",
  "formal_parameter", "method_body", "constructor_declaration", "$@3",
  "constructor_header", "constructor_declarator", "constructor_body",
  "constructor_block_end", "explicit_constructor_invocation",
  "this_or_parent", "array_initializer", "variable_initializers", "block",
  "block_begin", "block_end", "block_statements", "block_statement",
  "local_variable_declaration_statement", "final",
  "local_variable_declaration", "statement", "statement_nsi",
  "statement_without_trailing_substatement", "empty_statement",
  "label_decl", "labeled_statement", "labeled_statement_nsi",
  "expression_statement", "statement_expression", "if_then_statement",
  "if_then_else_statement", "if_then_else_statement_nsi",
  "switch_statement", "$@4", "switch_expression", "switch_block",
  "switch_block_statement_groups", "switch_block_statement_group",
  "switch_labels", "switch_label", "while_expression", "while_statement",
  "while_statement_nsi", "do_statement_begin", "do_statement",
  "for_statement", "for_statement_nsi", "for_header", "for_begin",
  "for_init", "for_update", "statement_expression_list", "break_statement",
  "continue_statement", "return_statement", "throw_statement",
  "synchronized_statement", "synchronized", "try_statement", "catches",
  "catch_clause", "catch_clause_parameter", "finally", "primary",
  "primary_no_new_array", "type_literals",
  "class_instance_creation_expression", "anonymous_class_creation", "$@5",
  "$@6", "argument_list", "array_creation_expression", "dim_exprs",
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
     345,   346,   347,   348,   349,    46,    59,    44,   123,   125,
      91,    93,    40,    41,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   106,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   110,   111,   112,   113,   113,   114,
     114,   115,   116,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   120,   120,   121,   122,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   128,
     127,   129,   127,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     147,   147,   149,   148,   150,   150,   151,   151,   152,   152,
     152,   152,   153,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   158,   158,   159,   160,   161,   161,   162,   162,
     162,   163,   164,   165,   165,   166,   166,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   170,   171,
     172,   173,   174,   174,   174,   174,   174,   174,   174,   175,
     176,   177,   179,   178,   180,   181,   181,   181,   181,   182,
     182,   183,   184,   184,   185,   185,   186,   187,   188,   189,
     190,   191,   191,   192,   192,   193,   194,   195,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   202,   203,   204,   204,   204,   205,   205,   206,   207,
     208,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   211,   211,   211,   211,   212,   212,   212,   214,
     213,   215,   213,   216,   216,   217,   217,   217,   217,   217,
     217,   218,   218,   219,   220,   220,   221,   221,   222,   222,
     222,   222,   222,   222,   223,   223,   224,   224,   224,   224,
     225,   226,   227,   227,   227,   227,   227,   228,   229,   230,
     230,   230,   230,   231,   231,   231,   231,   232,   232,   232,
     232,   233,   233,   233,   234,   234,   234,   235,   235,   235,
     235,   235,   235,   236,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   241,   242,   242,   243,   243,
     244,   245,   245,   245,   246,   246,   247,   248
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     3,     1,     0,     1,     1,     1,     2,     2,
       2,     3,     1,     2,     1,     2,     3,     1,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     6,     0,     2,     0,     2,     1,     3,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     2,     2,     3,     3,     3,     4,     1,     3,     2,
       1,     1,     0,     3,     1,     2,     3,     4,     2,     3,
       3,     4,     1,     4,     5,     1,     1,     2,     3,     4,
       1,     3,     2,     3,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     0,     3,     4,     2,     3,     3,     4,     1,
       2,     2,     1,     2,     3,     2,     4,     2,     2,     1,
       7,     7,     6,     7,     6,     2,     2,     0,     1,     1,
       0,     1,     1,     3,     2,     3,     2,     3,     2,     3,
       3,     5,     1,     3,     3,     4,     1,     2,     2,     4,
       2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     5,     4,     1,     0,
       7,     0,     6,     1,     3,     3,     3,     4,     4,     4,
       4,     1,     2,     3,     2,     3,     3,     3,     3,     4,
       5,     6,     5,     6,     4,     4,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     5,     4,     4,     5,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      24,    43,    44,    48,    47,    45,    46,     0,     0,     0,
     147,     0,    26,    27,    25,    32,    37,    34,     0,    41,
      39,    40,    23,     0,    19,    20,    21,    53,     0,     1,
      30,    33,    35,    28,    29,     0,    42,     0,    38,     0,
      55,    36,    31,    53,    22,    15,    54,    14,     0,    51,
      55,    16,    57,    56,     0,    49,     0,     0,    52,     0,
      58,    11,     0,     9,    10,   114,    59,     0,     7,     8,
      12,    13,    14,    19,     0,    68,     0,    61,    63,    66,
      67,     0,    64,    92,    94,    65,     0,    69,    50,     0,
      82,   112,    76,     0,    72,    74,    81,     0,    17,    18,
       0,     0,     0,    95,    60,    62,    91,    80,    90,     0,
      45,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     5,     2,     3,
       4,     6,     0,   213,     0,     7,    13,   257,    21,   202,
     120,   136,     0,   116,   118,     0,     0,   119,   125,   137,
       0,   126,   138,     0,   127,   128,   139,   162,     0,   129,
       0,   140,   130,   187,     0,   141,   142,   143,   145,   144,
       0,   146,   256,   211,   220,   216,   228,   212,   217,   218,
     219,     0,   155,   156,   153,   154,   152,     0,     0,    70,
       0,     0,     0,   244,     0,    96,     0,     0,    87,    84,
       0,    83,   114,    93,     0,     0,     0,     0,     0,     0,
       0,     0,   257,   216,   217,   218,   219,   269,   258,   259,
     268,   262,   263,   266,   272,   267,     0,   257,   277,   281,
     284,   287,   293,   296,   298,   300,   302,   304,   306,   308,
     316,   309,     0,   194,     0,   198,     0,     0,     0,     0,
       0,     0,   185,     0,    15,     0,   196,     0,     0,    76,
     123,     0,     0,     0,     0,     0,   148,   115,   113,   117,
       0,   121,   202,   149,   151,     0,   177,     0,   122,   189,
     192,   186,   188,     0,     0,     0,     0,   261,   260,   314,
     315,     0,    85,     0,    73,     0,    75,    79,    78,    77,
     245,    89,     0,    97,    71,   106,   214,    98,     0,     0,
     102,     0,   264,   265,   270,   271,     0,   257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   195,   199,   225,   247,     0,     0,     0,     0,   203,
     206,     0,   204,     0,   235,   241,     0,   236,     0,     0,
     197,   215,   224,   223,   222,   221,     0,   248,     0,   233,
     124,     0,   163,     0,     0,   190,     0,     0,   246,     0,
     310,    86,   107,   110,     0,    88,    99,     0,     0,   100,
       0,    17,    18,   215,     0,   278,   279,   280,   282,   283,
     285,   286,   289,   291,   288,   290,     0,   292,   294,   295,
     297,   299,   301,   303,   305,     0,     0,   176,   164,     0,
     210,   207,   205,   208,     0,   242,   237,   240,   238,   239,
     227,     0,   254,     0,   249,     0,     0,   165,     0,   169,
       0,   172,     0,   193,     0,   191,   190,     0,     0,   255,
       0,   108,   101,     0,     0,   274,     0,     0,   275,     0,
     159,     0,   125,     0,   132,   133,     0,   134,   135,     0,
       0,   252,     0,     0,   243,     0,   226,   234,   175,   317,
       0,   167,   170,     0,   166,   171,   173,     0,     0,     0,
     201,   250,     0,   109,   111,   103,     0,   273,   276,     0,
       0,   150,   178,     0,   307,   253,   209,   232,     0,   174,
     168,     0,   182,     0,   251,   104,     0,   160,   190,     0,
     230,   180,   181,     0,     0,   190,     0,     0,     0,     0,
     184,     0,   161,   183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   133,   134,   210,    69,    70,    46,    52,   211,   227,
      24,    25,    26,    11,    12,    13,    14,    15,    16,    17,
     272,    19,   140,    59,    54,    40,    49,    53,    58,    76,
      77,    78,    79,    93,    94,    95,   296,    80,    81,    90,
     197,   198,   107,    82,   109,    83,    84,   203,   307,   308,
     309,   297,   384,   141,    86,   310,   485,   143,   144,   145,
     146,   147,   461,   148,   149,   150,   151,   464,   152,   153,
     154,   155,   465,   156,   275,   157,   372,   438,   439,   440,
     441,   158,   159,   467,   160,   161,   162,   468,   163,   164,
     281,   444,   445,   165,   166,   167,   168,   169,   170,   171,
     349,   350,   351,   352,   172,   173,   174,   213,   176,   508,
     475,   368,   177,   354,   355,    98,   178,   215,   180,   217,
     218,   219,   228,   221,   222,   223,   224,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   186,
     187,   291,   369,   480
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -429
static const yytype_int16 yypact[] =
{
     175,  -429,  -429,  -429,  -429,  -429,  -429,     3,     3,     3,
    -429,   102,   511,   404,   511,  -429,  -429,  -429,   379,  -429,
    -429,  -429,  -429,    88,  -429,  -429,  -429,    51,   198,  -429,
     404,  -429,  -429,   511,   404,     3,  -429,     3,  -429,     3,
      81,  -429,   404,    51,  -429,  -429,  -429,    97,     3,  -429,
      81,  -429,  -429,   107,   115,  -429,     3,  1185,  -429,   115,
    -429,  -429,     3,  -429,  -429,   144,  -429,     3,   170,  -429,
    -429,  -429,    68,   159,   611,  -429,  2511,  -429,  -429,  -429,
    -429,   -66,  -429,  -429,  -429,  -429,  2318,  -429,  -429,   180,
    -429,  -429,   180,   205,  -429,    18,  -429,   178,   226,   226,
     166,     3,     3,  -429,  -429,  -429,  -429,  -429,  -429,   212,
      33,  1971,  1971,   216,  1971,  -429,   -43,  1722,   257,   263,
     280,   285,   302,   296,    38,    98,  -429,  -429,  -429,  -429,
    -429,  -429,  1971,  -429,     3,   106,   311,   275,   304,   379,
    -429,  -429,  2176,  -429,  -429,    38,   325,  -429,  -429,  -429,
    2389,  -429,  -429,   327,  -429,  -429,  -429,  -429,  2389,  -429,
    2389,  -429,  -429,  1042,   328,  -429,  -429,  -429,  -429,  -429,
     308,  -429,   331,   343,  -429,    59,  -429,  -429,   229,   131,
     242,   289,   314,   322,  -429,  -429,  -429,   279,   210,  -429,
       3,  1767,   344,  -429,   347,  -429,     3,   100,  -429,  -429,
     288,  -429,  -429,  -429,  2247,  1971,  1971,  1971,  1971,  1971,
     106,   311,   173,  -429,  -429,  -429,  -429,   289,  -429,  -429,
    -429,  -429,  -429,  -429,  -429,  -429,  1971,    79,  -429,   300,
     387,   386,    47,   381,   439,   442,   444,   441,     8,  -429,
    -429,  -429,   361,  -429,   365,  -429,   366,   400,     3,  1971,
    1971,    91,  -429,   370,   370,   362,  -429,   369,   373,  -429,
     382,   415,   418,   -25,  1817,  1382,  -429,  -429,  -429,  -429,
       3,  -429,   531,  -429,  -429,   385,  -429,   423,  -429,  -429,
    -429,  -429,   390,  1867,  1971,     3,  1971,  -429,  -429,  -429,
    -429,  1971,  -429,   139,  -429,  1622,  -429,  -429,  -429,  -429,
    -429,   388,    38,  -429,  -429,   263,   389,  -429,  2176,   394,
    -429,  2176,  -429,  -429,  -429,  -429,    95,    79,   395,   396,
    1971,  1971,  1971,  1971,  1971,  1971,  1971,  1971,  1971,  1971,
    1971,    38,  1971,  1971,  1971,  1971,  1971,  1971,  1971,  1971,
    -429,  -429,  -429,  -429,   399,   401,   405,   407,   302,    91,
    -429,   302,  -429,  1817,   370,  -429,   221,   370,   221,  1432,
    -429,  -429,  -429,  -429,  -429,  -429,   402,  -429,   148,  -429,
     382,   -10,  -429,   408,  2523,  2523,   393,   410,   409,   406,
    -429,  -429,  -429,  -429,   132,  -429,  -429,  2176,  1477,  -429,
    1971,    64,   154,  2560,  2460,  -429,  -429,  -429,   300,   300,
     387,   387,   386,   386,   386,   386,   170,  -429,    47,    47,
     381,   439,   442,   444,   441,   412,  1527,  -429,  -429,    38,
    -429,  -429,  -429,  -429,   419,  -429,   226,  -429,   226,  -429,
     427,   161,  -429,  1971,  -429,   424,  1971,  -429,    -3,  -429,
    2034,  -429,  1971,  -429,   428,   390,  2523,   302,  1572,  -429,
    1667,  -429,  -429,   434,   169,  -429,  1971,  2560,  -429,   431,
    -429,   482,   485,  2460,  -429,  -429,  2460,  -429,  -429,   443,
    1971,  -429,   177,   437,  -429,   115,   450,  -429,  -429,  -429,
     438,  -429,  -429,  2105,  -429,  2318,  -429,   447,  2389,   449,
    -429,  -429,   186,  -429,  -429,  -429,   445,  -429,  -429,  1971,
    2389,  -429,  -429,  1912,  -429,  -429,  -429,  -429,   115,  -429,
    -429,   453,  -429,  2389,  -429,  -429,   451,  -429,  2523,   457,
    -429,  -429,  -429,  2460,   455,  2523,   504,  2460,   456,  2460,
    -429,  2460,  -429,  -429
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -429,  -429,   -50,   774,   238,   -11,   452,   514,   854,    12,
     -13,  -429,    -8,  -429,   559,    89,  -429,    13,  -429,   119,
       1,   -12,   359,  -429,  -429,   534,   529,  -429,   -57,  -429,
     505,  -429,  -429,   -92,   392,   384,  -291,  -429,  -429,     5,
     398,  -286,  -429,  -429,  -429,  -429,   509,  -429,  -288,  -429,
    -429,   -34,  -429,   -40,   475,   458,   -83,  -134,  -429,  -429,
     426,   167,  -392,  -383,   460,  -338,  -429,  -429,  -429,  -151,
    -429,  -429,  -429,  -429,  -429,  -429,  -429,  -429,   149,   153,
    -391,  -290,  -429,  -429,  -429,  -429,  -429,  -429,  -429,  -264,
    -429,  -428,   435,  -429,  -429,  -429,  -429,  -429,  -429,  -429,
    -429,   245,  -429,   253,  -429,  -429,  -429,    72,  -429,  -429,
    -429,  -307,  -429,   354,   -76,   -67,   989,   218,  1072,   267,
     364,   446,   -36,   528,   628,  -384,  -429,    80,   103,   -31,
     101,   276,   278,   281,   274,   277,  -429,   146,   329,   917,
    -429,  -429,   551,  -429
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -314
static const yytype_int16 yytable[] =
{
      27,    18,    88,   142,   383,    99,    36,    67,   269,   458,
     200,   462,   280,    18,    18,    18,   385,    85,   489,    23,
     386,    28,   338,   389,   102,    31,    67,    43,    45,    44,
     106,    18,    65,   435,    18,    18,    85,    51,   364,    22,
     435,   108,   260,    18,    73,    51,    31,   365,   436,   486,
     196,    47,   431,   243,    89,   436,   463,    22,    74,    92,
      47,    73,    36,    73,   327,   328,   329,   330,    47,    72,
      99,   501,    96,   498,   502,   220,   225,    74,   138,  -122,
     462,   454,   251,   462,    61,    22,    72,   139,    72,   437,
     524,   339,   486,    89,    92,   270,   481,   528,   137,   452,
     331,    30,    29,    34,   466,   191,   199,   201,   244,   472,
      39,  -122,    72,   254,  -122,  -122,    63,   257,   192,    64,
      22,   311,    42,   212,   212,   463,   259,    36,   463,    48,
     469,   526,    32,   473,   138,   530,    47,   532,   196,   533,
     462,   492,   138,   139,   462,    99,   462,   347,   462,    32,
     138,   348,   138,    32,   137,  -158,  -158,    72,   175,   494,
      99,    32,  -158,    37,   194,  -311,  -311,   456,    97,   312,
     313,   314,   315,   466,   263,   137,   466,   269,   370,   264,
      22,   265,   259,    37,    38,   463,   356,   358,   259,   463,
     261,   463,    37,   463,   256,    97,   138,   302,   390,   469,
      72,   261,   469,   303,    56,   139,    97,     1,     2,     3,
       4,     5,    61,    57,   175,     6,   137,   212,   212,   212,
     212,   317,   175,   443,   280,   387,     7,  -157,  -157,   450,
     175,   451,   175,   466,  -157,   175,   302,   466,     8,   466,
     344,   466,   381,    91,    63,   433,     9,    64,    22,   391,
     392,   434,   196,   269,   194,    44,    61,   457,   433,   469,
      36,   100,   259,   469,   476,   469,   433,   469,   263,   195,
      97,    10,   496,   264,   433,   265,   175,   378,   425,   193,
     505,   425,   188,   433,   395,   396,   397,   426,    63,   514,
     428,    64,    22,    37,    41,   280,   402,   403,   404,   405,
     138,   189,   190,   138,   179,   320,   321,   322,   420,   139,
     202,   423,   139,   292,    72,  -312,  -312,   273,   226,   295,
     137,   194,   427,   137,   429,   276,   194,   277,  -313,  -313,
     287,   288,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,    72,   212,   212,   212,   212,   212,   212,
     212,   269,   247,   181,   455,  -258,  -258,   -14,   248,    20,
     179,  -311,  -311,  -259,  -259,   289,   290,   280,   179,   196,
     263,    20,    20,    20,   280,   264,   179,   265,   179,   138,
     175,   179,   249,   175,   304,   190,   138,   250,   139,    20,
     323,   324,    20,    20,   325,   326,   332,   333,   252,   137,
      65,    20,   212,   398,   399,   212,   262,   490,   266,   181,
     284,     1,     2,     3,     4,     5,    75,   181,   507,     6,
     497,   271,   179,   274,   283,   181,   285,   181,   400,   401,
     181,    72,   138,   408,   409,    75,     1,     2,     3,     4,
       5,   139,    35,   286,     6,   299,   175,   175,   300,   334,
     182,   520,   137,   335,   337,   138,   336,   340,   138,   175,
      21,   341,   342,   343,   359,   360,   175,     8,   212,   212,
     353,   181,    21,    21,    21,   138,   361,   138,   362,   190,
     138,   363,   212,   371,   139,   373,   139,   374,   192,   446,
      21,  -105,   138,    21,    21,   137,   388,   137,   393,   394,
      10,   416,    21,   432,   417,   138,   182,   449,   418,   419,
     442,   448,   175,   447,   182,   138,   470,    87,   175,   138,
     474,   138,   182,   138,   182,  -231,   179,   182,   478,   179,
     495,   488,   183,   499,   500,   175,    87,  -131,   175,   503,
     506,   515,   509,     1,     2,     3,     4,     5,  -229,   521,
     511,     6,   513,   525,   523,   175,   529,   175,   527,   531,
     175,   460,     7,     1,     2,     3,     4,     5,   182,   407,
      60,     6,   175,    33,     8,   181,   255,    50,   181,    55,
     301,   105,   294,   103,   204,   175,   293,   482,   183,   279,
     175,   483,   179,   179,   421,   175,   183,   175,   282,   175,
     268,   175,   422,   175,   183,   179,   183,    10,   357,   183,
     410,   413,   179,   411,   184,   414,   504,   412,     0,     0,
     380,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,   276,     0,     0,     0,     0,     0,     0,
       0,   181,   181,     1,     2,     3,     4,     5,     0,     0,
     183,     6,     0,     0,   181,   512,     0,    61,   179,     0,
       0,   181,     0,     0,   179,   242,   101,   517,   246,     0,
     184,     0,   182,     0,    35,   182,     0,     0,   184,     0,
     522,   179,     0,   258,   179,     0,   184,     0,   184,    63,
     460,   184,    64,    22,   512,     0,   517,     0,   522,     0,
       0,   179,     0,   179,     0,     0,   179,   181,     0,     0,
       0,     0,     0,   181,   185,     0,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,   179,   184,   181,     0,     0,   179,     0,   182,   182,
       0,   179,   298,   179,     0,   179,     0,   179,     0,   179,
     181,   182,   181,     0,   183,   181,     0,   183,   182,     0,
     318,     0,     0,     0,     0,     0,     0,   181,     0,     0,
     185,     0,     0,     0,     0,     0,     0,   319,   185,     0,
     181,     0,     0,     0,     0,   181,   185,     0,   185,     0,
     181,   185,   181,     0,   181,     0,   181,     0,   181,     0,
     345,   346,     0,     0,   182,     0,     0,     0,     0,     0,
     182,     0,     0,     0,     0,   366,     0,     0,     0,     0,
     183,   183,     0,     0,     0,     0,     0,   182,     0,     0,
     182,    68,   185,   183,   376,   377,   184,   379,     0,   184,
     183,     0,     0,     0,     0,     0,   298,   182,    68,   182,
      68,     0,   182,     0,     0,     0,     0,     0,     0,     0,
     135,     0,     0,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,     0,   182,     0,     0,
       0,     0,   182,     0,     0,     0,   183,   182,     0,   182,
     415,   182,   183,   182,     0,   182,     0,     0,   253,     0,
       0,     0,   184,   184,   424,     0,     0,     0,     0,   183,
       0,    71,   183,     0,     0,   184,   135,     0,     0,    68,
       0,     0,   184,     0,     0,     0,     0,     0,    71,   183,
      71,   183,     0,     0,   183,     0,   185,   135,     0,   185,
     136,     0,     0,     0,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,   183,
       0,     0,    68,     0,   183,     0,     0,     0,   184,   183,
       0,   183,     0,   183,   184,   183,     0,   183,   135,     0,
       0,     0,     0,   316,   477,     0,     0,   479,     0,     0,
       0,   184,     0,   487,   184,     0,   136,     0,     0,    71,
       0,   298,   185,   185,     0,     0,     0,     0,     0,     0,
       0,   184,     0,   184,     0,   185,   184,   136,     0,     0,
       0,     0,   185,     0,     0,     0,     0,     0,   184,     0,
       0,   241,     0,     0,   241,     0,     0,     0,     0,     0,
       0,   184,    71,     0,     0,     0,   184,     0,     0,   241,
     516,   184,     0,   184,   519,   184,     0,   184,   136,   184,
       0,     0,     0,     0,     0,     0,     0,     0,   185,     0,
       0,     0,     0,     0,   185,     0,    68,     0,   278,     0,
       0,     0,   135,   111,   112,   135,     0,     0,    61,     0,
       0,   185,     0,     0,   185,     0,     0,   118,     0,     0,
     214,   214,     0,   119,     0,   406,     0,     0,   241,     0,
     124,   185,     0,   185,   126,     0,   185,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   241,     0,   185,     0,
     127,   128,   129,     0,     0,   130,   131,     0,     0,     0,
       0,   185,     0,   241,   132,     0,   185,     0,     0,     0,
       0,   185,     0,   185,     0,   185,    71,   185,     0,   185,
       0,   135,   136,     0,     0,   136,   241,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   241,   216,   216,    71,     0,     0,     0,     0,
       0,     0,     0,    68,   214,   214,   214,   214,     0,     0,
     241,   241,     0,   241,     0,     0,     0,     0,   241,     0,
       0,     0,   241,     0,   135,     0,     0,     1,     2,     3,
       4,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
      62,   136,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,   241,   135,     0,   135,
       0,     0,     0,    63,     0,     0,    64,    22,     0,     0,
     241,     0,     0,    71,     0,     0,   241,   216,   216,   216,
     216,    10,     0,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,     0,     0,     0,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
       0,   214,   214,   214,   214,   214,   214,   214,     0,     0,
       0,     0,     0,   241,     0,     0,     0,   136,     0,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,   241,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,   241,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,   214,     0,     0,   205,   206,     0,     0,     0,
       0,     0,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,     0,   216,   216,   216,   216,   216,   216,
     216,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     241,     0,     0,   111,   112,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,   205,   206,   118,     0,     0,
       0,     0,     0,   119,     0,   214,   214,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,   214,
      63,     0,   216,    64,    22,   216,   207,   208,     0,     0,
     127,   128,   129,   111,   112,   130,   131,     0,    61,     0,
     205,   206,     0,     0,   209,   367,     0,   118,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   207,   208,   111,   112,
     127,   128,   129,    61,     0,   130,   131,     0,   216,   216,
     205,   206,   118,     0,   209,   430,     0,     0,   119,     0,
       0,     0,   216,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,     0,     0,   127,   128,   129,   111,   112,
     130,   131,     0,    61,     0,   205,   206,     0,     0,   209,
     453,     0,   118,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,   111,   112,   127,   128,   129,    61,     0,
     130,   131,     0,     0,     0,   205,   206,   118,     0,   209,
     471,     0,     0,   119,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   207,   208,     0,     0,
     127,   128,   129,   111,   112,   130,   131,     0,    61,     0,
     205,   206,     0,     0,   209,   491,     0,   118,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   207,   208,   111,   112,
     127,   128,   129,    61,     0,   130,   131,     0,     0,     0,
     295,   382,   118,     0,   209,   205,   206,     0,   119,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,     0,     0,   127,   128,   129,     0,     0,
     130,   131,     0,   111,   112,   295,   493,     0,    61,   209,
     205,   206,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   207,   208,   111,   112,
     127,   128,   129,    61,     0,   130,   131,     0,   245,     0,
     205,   206,   118,     0,   209,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,     0,     0,   127,   128,   129,   111,   112,
     130,   131,     0,    61,     0,   295,     0,     0,     0,   209,
     205,   206,   118,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,     0,     0,   127,   128,   129,   111,   112,
     130,   131,     0,    61,     0,   205,   206,     0,   193,   209,
       0,     0,   118,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   126,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,   207,   208,   111,   112,   127,   128,   129,    61,     0,
     130,   131,     0,   375,     0,     0,     0,   118,     0,   209,
       0,     0,     0,   119,   205,   206,     0,     0,     0,     0,
     124,     0,     0,     0,   126,     0,     0,     0,     0,     0,
      63,     0,     0,    64,    22,     0,   207,   208,     0,     0,
     127,   128,   129,     0,     0,   130,   131,     0,   518,     0,
       0,     0,   111,   112,   209,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,   126,     0,     0,     0,     0,     0,    63,
       0,     0,    64,    22,     0,   207,   208,     0,     0,   127,
     128,   129,     0,     0,   130,   131,     1,     2,     3,     4,
     110,     0,     0,   209,     6,   111,   112,   435,   113,   114,
      61,   115,     0,     0,   116,     0,     0,     0,   117,   118,
       0,     0,   436,     0,     0,   119,   120,     8,   121,     0,
     122,   123,   124,   125,     0,     0,   126,     0,     0,     0,
       0,     0,    63,     0,     0,    64,    22,     0,     0,     0,
       0,     0,   127,   128,   129,     0,     0,   130,   131,     0,
      10,     0,    65,   484,     0,     0,   132,     1,     2,     3,
       4,   110,     0,     0,     0,     6,   111,   112,   435,   113,
     114,    61,   115,     0,     0,   116,     0,     0,     0,   117,
     118,     0,     0,   436,     0,     0,   119,   120,     8,   121,
       0,   122,   123,   124,   125,     0,     0,   126,     0,     0,
       0,     0,     0,    63,     0,     0,    64,    22,     0,     0,
       0,     0,     0,   127,   128,   129,     0,     0,   130,   131,
       0,    10,     0,    65,   510,     0,     0,   132,     1,     2,
       3,     4,   110,     0,     0,     0,     6,   111,   112,     0,
     113,   114,    61,   115,     0,     0,   116,     0,     0,     0,
     117,   118,     0,     0,     0,     0,     0,   119,   120,     8,
     121,     0,   122,   123,   124,   125,     0,     0,   126,     0,
       0,     0,     0,     0,    63,     0,     0,    64,    22,     0,
       0,     0,     0,     0,   127,   128,   129,     0,     0,   130,
     131,     0,    10,     0,    65,   267,     0,     0,   132,     1,
       2,     3,     4,   110,     0,     0,     0,     6,   111,   112,
       0,   113,   114,    61,   115,     0,     0,   116,     0,     0,
       0,   117,   118,     0,     0,     0,     0,     0,   305,   120,
       8,   121,     0,   122,   123,   124,   125,     0,     0,   306,
       0,     0,     0,     0,     0,    63,     0,     0,    64,    22,
       0,     0,     0,     0,     0,   127,   128,   129,     0,     0,
     130,   131,     0,    10,     0,    65,   267,     0,     0,   132,
       1,     2,     3,     4,   110,     0,     0,     0,     6,   111,
     112,     0,   113,   114,    61,   115,     0,     0,   116,     0,
       0,     0,   117,   118,     0,     0,     0,     0,     0,   119,
     120,     8,   121,     0,   122,   123,   124,   125,     0,     0,
     126,     0,     0,     0,     0,     0,    63,     0,     0,    64,
      22,     0,     0,     0,     0,     0,   127,   128,   129,     0,
       0,   130,   131,     0,    10,     0,    65,     0,     0,     0,
     132,     1,     2,     3,     4,     5,     0,     0,     0,     6,
     111,   112,     0,   113,   114,    61,   115,     0,     0,   116,
       0,     0,     0,   117,   118,     0,     0,     0,     0,     0,
     119,   120,     0,   121,     0,   122,   123,   124,   125,     0,
       0,   126,     0,     0,     0,     0,     0,    63,     0,     0,
      64,    22,     0,     0,     0,     0,     0,   127,   128,   129,
       0,     0,   130,   131,     0,    10,     0,    65,     0,     0,
       0,   132,     1,     2,     3,     4,     5,     0,     0,     0,
       6,   111,   112,     0,   459,   114,    61,   115,     0,     0,
     116,     0,     0,     0,   117,   118,     0,     0,     0,     0,
       0,   119,   120,     0,   121,     0,   122,   123,   124,   125,
       0,     0,   126,     0,     0,     0,     0,     0,    63,     0,
       0,    64,    22,     1,     2,     3,     4,     5,   127,   128,
     129,     6,     0,   130,   131,     0,    10,    61,    65,     0,
       0,     0,   132,     0,   111,   112,    62,     0,     0,    61,
       0,     0,     0,     0,     8,     0,     0,     0,   118,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,    63,
       0,   124,    64,    22,     0,   126,     0,     0,     0,     0,
       0,    63,     0,     0,    64,    22,    61,    10,     0,    65,
     104,   127,   128,   129,     0,   118,   130,   131,     0,     0,
       0,   119,     0,     0,     0,   132,     0,     0,   124,     0,
       0,     0,   126,     0,     0,     0,     0,     0,    63,     0,
       0,    64,    22,     0,   207,   208,     0,     0,   127,   128,
     129,     0,     0,   130,   131,     0,     0,     0,     0,     0,
       0,     0,   209
};

static const yytype_int16 yycheck[] =
{
       8,     0,    59,    86,   295,    72,    18,    57,   142,   393,
     102,   394,   163,    12,    13,    14,   302,    57,   446,     7,
     308,     9,    14,   311,    74,    12,    76,    35,    39,    37,
      96,    30,    98,    43,    33,    34,    76,    48,    63,    82,
      43,    81,   134,    42,    57,    56,    33,    72,    58,   440,
     100,    39,   359,    96,    62,    58,   394,    82,    57,    67,
      48,    74,    74,    76,    17,    18,    19,    20,    56,    57,
     137,   463,    67,   457,   466,   111,   112,    76,    86,    46,
     463,   388,   122,   466,    46,    82,    74,    86,    76,    99,
     518,    83,   483,   101,   102,   145,    99,   525,    86,   387,
      53,    12,     0,    14,   394,    87,   101,   102,   116,   416,
      59,    78,   100,   124,    81,    82,    78,   125,   100,    81,
      82,   204,    33,   111,   112,   463,   134,   139,   466,    48,
     394,   523,    13,   419,   142,   527,   124,   529,   188,   531,
     523,   448,   150,   142,   527,   212,   529,    56,   531,    30,
     158,    60,   160,    34,   142,    96,    97,   145,    86,   450,
     227,    42,   103,    95,   100,    86,    87,   103,   100,   205,
     206,   207,   208,   463,    95,   163,   466,   311,   270,   100,
      82,   102,   190,    95,    96,   523,   253,   254,   196,   527,
      95,   529,    95,   531,    96,   100,   204,    97,   103,   463,
     188,    95,   466,   103,    97,   204,   100,    32,    33,    34,
      35,    36,    46,    98,   142,    40,   204,   205,   206,   207,
     208,   209,   150,   374,   375,   308,    51,    96,    97,    97,
     158,    99,   160,   523,   103,   163,    97,   527,    63,   529,
     248,   531,   103,    99,    78,    97,    71,    81,    82,   316,
     317,   103,   302,   387,   100,   263,    46,   103,    97,   523,
     272,   102,   270,   527,   103,   529,    97,   531,    95,   103,
     100,    96,   103,   100,    97,   102,   204,   285,   354,   101,
     103,   357,   102,    97,   320,   321,   322,   354,    78,   103,
     357,    81,    82,    95,    96,   446,   327,   328,   329,   330,
     308,    96,    97,   311,    86,     5,     6,     7,   348,   308,
      98,   351,   311,   103,   302,    86,    87,   150,   102,    98,
     308,   100,   356,   311,   358,   158,   100,   160,    86,    87,
      41,    42,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   485,    95,    86,   390,    41,    42,    82,    95,     0,
     142,    86,    87,    41,    42,    86,    87,   518,   150,   419,
      95,    12,    13,    14,   525,   100,   158,   102,   160,   387,
     308,   163,   102,   311,    96,    97,   394,   102,   387,    30,
       3,     4,    33,    34,     8,     9,    15,    16,   102,   387,
      98,    42,   390,   323,   324,   393,    95,   447,   104,   142,
     102,    32,    33,    34,    35,    36,    57,   150,   475,    40,
     456,    96,   204,    96,    96,   158,    95,   160,   325,   326,
     163,   419,   440,   332,   333,    76,    32,    33,    34,    35,
      36,   440,    63,   100,    40,   101,   374,   375,   101,    10,
      86,   508,   440,    11,    13,   463,    12,    96,   466,   387,
       0,    96,    96,    63,   102,    96,   394,    63,   456,   457,
     100,   204,    12,    13,    14,   483,   103,   485,    63,    97,
     488,    63,   470,    98,   483,    62,   485,    97,   100,    96,
      30,   102,   500,    33,    34,   483,   102,   485,   103,   103,
      96,   102,    42,   101,   103,   513,   142,   101,   103,   102,
     102,   102,   440,   103,   150,   523,   104,    57,   446,   527,
     101,   529,   158,   531,   160,    98,   308,   163,   104,   311,
      96,   103,    86,   102,    52,   463,    76,    52,   466,    96,
     103,    96,   104,    32,    33,    34,    35,    36,    98,    96,
     103,    40,   103,    96,   103,   483,    52,   485,   103,   103,
     488,   394,    51,    32,    33,    34,    35,    36,   204,   331,
      56,    40,   500,    14,    63,   308,   124,    43,   311,    50,
     196,    76,   190,    74,   109,   513,   188,   438,   142,   163,
     518,   438,   374,   375,   349,   523,   150,   525,   163,   527,
     142,   529,   349,   531,   158,   387,   160,    96,   254,   163,
     334,   337,   394,   335,    86,   338,   470,   336,    -1,    -1,
     291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,    -1,    -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,   375,    32,    33,    34,    35,    36,    -1,    -1,
     204,    40,    -1,    -1,   387,   488,    -1,    46,   440,    -1,
      -1,   394,    -1,    -1,   446,   114,    55,   500,   117,    -1,
     142,    -1,   308,    -1,    63,   311,    -1,    -1,   150,    -1,
     513,   463,    -1,   132,   466,    -1,   158,    -1,   160,    78,
     523,   163,    81,    82,   527,    -1,   529,    -1,   531,    -1,
      -1,   483,    -1,   485,    -1,    -1,   488,   440,    -1,    -1,
      -1,    -1,    -1,   446,    86,    -1,    -1,    -1,   500,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,   513,   204,   466,    -1,    -1,   518,    -1,   374,   375,
      -1,   523,   191,   525,    -1,   527,    -1,   529,    -1,   531,
     483,   387,   485,    -1,   308,   488,    -1,   311,   394,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   226,   150,    -1,
     513,    -1,    -1,    -1,    -1,   518,   158,    -1,   160,    -1,
     523,   163,   525,    -1,   527,    -1,   529,    -1,   531,    -1,
     249,   250,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,
     446,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,
     374,   375,    -1,    -1,    -1,    -1,    -1,   463,    -1,    -1,
     466,    57,   204,   387,   283,   284,   308,   286,    -1,   311,
     394,    -1,    -1,    -1,    -1,    -1,   295,   483,    74,   485,
      76,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   513,    -1,    -1,
      -1,    -1,   518,    -1,    -1,    -1,   440,   523,    -1,   525,
     339,   527,   446,   529,    -1,   531,    -1,    -1,   124,    -1,
      -1,    -1,   374,   375,   353,    -1,    -1,    -1,    -1,   463,
      -1,    57,   466,    -1,    -1,   387,   142,    -1,    -1,   145,
      -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,    74,   483,
      76,   485,    -1,    -1,   488,    -1,   308,   163,    -1,   311,
      86,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   513,
      -1,    -1,   188,    -1,   518,    -1,    -1,    -1,   440,   523,
      -1,   525,    -1,   527,   446,   529,    -1,   531,   204,    -1,
      -1,    -1,    -1,   209,   433,    -1,    -1,   436,    -1,    -1,
      -1,   463,    -1,   442,   466,    -1,   142,    -1,    -1,   145,
      -1,   450,   374,   375,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   483,    -1,   485,    -1,   387,   488,   163,    -1,    -1,
      -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,   500,    -1,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,   513,   188,    -1,    -1,    -1,   518,    -1,    -1,   132,
     499,   523,    -1,   525,   503,   527,    -1,   529,   204,   531,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,
      -1,    -1,    -1,    -1,   446,    -1,   302,    -1,    36,    -1,
      -1,    -1,   308,    41,    42,   311,    -1,    -1,    46,    -1,
      -1,   463,    -1,    -1,   466,    -1,    -1,    55,    -1,    -1,
     111,   112,    -1,    61,    -1,   331,    -1,    -1,   191,    -1,
      68,   483,    -1,   485,    72,    -1,   488,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,   209,    -1,   500,    -1,
      88,    89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,   513,    -1,   226,   102,    -1,   518,    -1,    -1,    -1,
      -1,   523,    -1,   525,    -1,   527,   302,   529,    -1,   531,
      -1,   387,   308,    -1,    -1,   311,   249,   250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   264,   265,   111,   112,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,   205,   206,   207,   208,    -1,    -1,
     283,   284,    -1,   286,    -1,    -1,    -1,    -1,   291,    -1,
      -1,    -1,   295,    -1,   440,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,   387,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   339,   483,    -1,   485,
      -1,    -1,    -1,    78,    -1,    -1,    81,    82,    -1,    -1,
     353,    -1,    -1,   419,    -1,    -1,   359,   205,   206,   207,
     208,    96,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,   483,    -1,   485,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,    -1,    -1,   436,    -1,    -1,    -1,    -1,    -1,   442,
      -1,    -1,    -1,    -1,    -1,   448,    -1,   450,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   390,
      -1,    -1,   393,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    -1,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
     503,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,   456,   457,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,   470,
      78,    -1,   390,    81,    82,   393,    84,    85,    -1,    -1,
      88,    89,    90,    41,    42,    93,    94,    -1,    46,    -1,
       3,     4,    -1,    -1,   102,   103,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,    84,    85,    41,    42,
      88,    89,    90,    46,    -1,    93,    94,    -1,   456,   457,
       3,     4,    55,    -1,   102,   103,    -1,    -1,    61,    -1,
      -1,    -1,   470,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    89,    90,    41,    42,
      93,    94,    -1,    46,    -1,     3,     4,    -1,    -1,   102,
     103,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    41,    42,    88,    89,    90,    46,    -1,
      93,    94,    -1,    -1,    -1,     3,     4,    55,    -1,   102,
     103,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    89,    90,    41,    42,    93,    94,    -1,    46,    -1,
       3,     4,    -1,    -1,   102,   103,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,    84,    85,    41,    42,
      88,    89,    90,    46,    -1,    93,    94,    -1,    -1,    -1,
      98,    99,    55,    -1,   102,     3,     4,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    89,    90,    -1,    -1,
      93,    94,    -1,    41,    42,    98,    99,    -1,    46,   102,
       3,     4,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,    84,    85,    41,    42,
      88,    89,    90,    46,    -1,    93,    94,    -1,    96,    -1,
       3,     4,    55,    -1,   102,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    89,    90,    41,    42,
      93,    94,    -1,    46,    -1,    98,    -1,    -1,    -1,   102,
       3,     4,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    -1,    -1,    88,    89,    90,    41,    42,
      93,    94,    -1,    46,    -1,     3,     4,    -1,   101,   102,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    41,    42,    88,    89,    90,    46,    -1,
      93,    94,    -1,    96,    -1,    -1,    -1,    55,    -1,   102,
      -1,    -1,    -1,    61,     3,     4,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    -1,    84,    85,    -1,    -1,
      88,    89,    90,    -1,    -1,    93,    94,    -1,    96,    -1,
      -1,    -1,    41,    42,   102,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      89,    90,    -1,    -1,    93,    94,    32,    33,    34,    35,
      36,    -1,    -1,   102,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    -1,    -1,    93,    94,    -1,
      96,    -1,    98,    99,    -1,    -1,   102,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    -1,    -1,    93,    94,
      -1,    96,    -1,    98,    99,    -1,    -1,   102,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      44,    45,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    93,
      94,    -1,    96,    -1,    98,    99,    -1,    -1,   102,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,
      93,    94,    -1,    96,    -1,    98,    99,    -1,    -1,   102,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    93,    94,    -1,    96,    -1,    98,    -1,    -1,    -1,
     102,    32,    33,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      -1,    -1,    93,    94,    -1,    96,    -1,    98,    -1,    -1,
      -1,   102,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    44,    45,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    81,    82,    32,    33,    34,    35,    36,    88,    89,
      90,    40,    -1,    93,    94,    -1,    96,    46,    98,    -1,
      -1,    -1,   102,    -1,    41,    42,    55,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    78,
      -1,    68,    81,    82,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    81,    82,    46,    96,    -1,    98,
      99,    88,    89,    90,    -1,    55,    93,    94,    -1,    -1,
      -1,    61,    -1,    -1,    -1,   102,    -1,    -1,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    81,    82,    -1,    84,    85,    -1,    -1,    88,    89,
      90,    -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    34,    35,    36,    40,    51,    63,    71,
      96,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   169,    82,   114,   115,   116,   117,   117,   114,     0,
     120,   122,   124,   119,   120,    63,   126,    95,    96,    59,
     130,    96,   120,   117,   117,   110,   111,   114,    48,   131,
     130,   110,   112,   132,   129,   131,    97,    98,   133,   128,
     112,    46,    55,    78,    81,    98,    99,   107,   108,   109,
     110,   113,   114,   115,   125,   127,   134,   135,   136,   137,
     142,   143,   148,   150,   151,   158,   159,   169,   133,   117,
     144,    99,   117,   138,   139,   140,   144,   100,   220,   220,
     102,    55,   107,   151,    99,   135,    96,   147,   158,   149,
      36,    41,    42,    44,    45,    47,    50,    54,    55,    61,
      62,    64,    66,    67,    68,    69,    72,    88,    89,    90,
      93,    94,   102,   106,   107,   108,   113,   114,   117,   125,
     127,   158,   161,   162,   163,   164,   165,   166,   168,   169,
     170,   171,   173,   174,   175,   176,   178,   180,   186,   187,
     189,   190,   191,   193,   194,   198,   199,   200,   201,   202,
     203,   204,   209,   210,   211,   212,   213,   217,   221,   222,
     223,   224,   225,   226,   228,   229,   244,   245,   102,    96,
      97,    87,   100,   101,   100,   103,   107,   145,   146,   144,
     138,   144,    98,   152,   159,     3,     4,    84,    85,   102,
     108,   113,   114,   212,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   227,   102,   114,   227,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   247,    96,   117,    96,   247,    95,    95,   102,
     102,   158,   102,   108,   110,   111,    96,   117,   247,   117,
     138,    95,    95,    95,   100,   102,   104,    99,   160,   162,
     107,    96,   125,   166,    96,   179,   166,   166,    36,   165,
     174,   195,   197,    96,   102,    95,   100,    41,    42,    86,
      87,   246,   103,   145,   139,    98,   141,   156,   247,   101,
     101,   140,    97,   103,    96,    61,    72,   153,   154,   155,
     160,   161,   227,   227,   227,   227,   108,   114,   247,   247,
       5,     6,     7,     3,     4,     8,     9,    17,    18,    19,
      20,    53,    15,    16,    10,    11,    12,    13,    14,    83,
      96,    96,    96,    63,   117,   247,   247,    56,    60,   205,
     206,   207,   208,   100,   218,   219,   220,   218,   220,   102,
      96,   103,    63,    63,    63,    72,   247,   103,   216,   247,
     138,    98,   181,    62,    97,    96,   247,   247,   117,   247,
     243,   103,    99,   141,   157,   146,   153,   161,   102,   153,
     103,   220,   220,   103,   103,   227,   227,   227,   232,   232,
     233,   233,   234,   234,   234,   234,   108,   109,   235,   235,
     236,   237,   238,   239,   240,   247,   102,   103,   103,   102,
     158,   206,   208,   158,   247,   219,   220,   156,   220,   156,
     103,   216,   101,    97,   103,    43,    58,    99,   182,   183,
     184,   185,   102,   174,   196,   197,    96,   103,   102,   101,
      97,    99,   153,   103,   216,   227,   103,   103,   230,    44,
     166,   167,   168,   170,   172,   177,   186,   188,   192,   194,
     104,   103,   216,   146,   101,   215,   103,   247,   104,   247,
     248,    99,   183,   184,    99,   161,   185,   247,   103,   196,
     158,   103,   216,    99,   141,    96,   103,   227,   230,   102,
      52,   167,   167,    96,   242,   103,   103,   133,   214,   104,
      99,   103,   166,   103,   103,    96,   247,   166,    96,   247,
     133,    96,   166,   103,   196,    96,   167,   103,   196,    52,
     167,   103,   167,   167
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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

    { (yyval) = new(zone()) Literal(this, EXPR_INT_LITERAL, (yyvsp[(1) - (1)])); ;}
    break;

  case 3:

    { (yyval) = new(zone()) Literal(this, EXPR_FLOAT_LITERAL, (yyvsp[(1) - (1)])); ;}
    break;

  case 4:

    { (yyval) = new(zone()) Literal(this, EXPR_BOOL_LITERAL, (yyvsp[(1) - (1)])); ;}
    break;

  case 5:

    { (yyval) = new(zone()) Literal(this, EXPR_STRING_LITERAL, (yyvsp[(1) - (1)])); ;}
    break;

  case 6:

    { (yyval) = new(zone()) Literal(this, EXPR_NULL_LITERAL, 0); ;}
    break;

  case 9:

    { (yyval) = INTEGER_TYPE; ;}
    break;

  case 10:

    { (yyval) = FLOAT_TYPE; ;}
    break;

  case 11:

    { (yyval) = BOOLEAN_TYPE; ;}
    break;

  case 12:

    {
		LoadType( (yyvsp[(1) - (1)]) );
	;}
    break;

  case 17:

    {
		i::Type *prim = (yyvsp[(1) - (2)]);
		string type_name(prim->name());
		
		while(current_osb-- > 0)
		{
			type_name = type_name+"[]";
		}
		// TODO: Register array type here.
	;}
    break;

  case 18:

    {
		i::Type *type = LoadType( (yyvsp[(1) - (2)]) );
		string type_name(type->name());
		
		while(current_osb-- > 0) {
			type_name = type_name+"[]";
		}
		
		// TODO: Register array type
		// type = new i::Type(type, type_name);
	;}
    break;

  case 22:

    {
		(yyvsp[(1) - (3)])->append(1, '.').append(*(yyvsp[(3) - (3)]));
	;}
    break;

  case 36:

    {
		BeginNamespace( (yyvsp[(2) - (3)]) );
	;}
    break;

  case 38:

    {
		DoUse( (yyvsp[(2) - (3)]) );
	;}
    break;

  case 39:

    {
		EndClassDeclaration();
	;}
    break;

  case 41:

    {
		modifier_ = (yyvsp[(1) - (1)]);
	;}
    break;

  case 42:

    {
		modifier_ |= (yyvsp[(2) - (2)]);
	;}
    break;

  case 43:

    { (yyval) = ACC_PUBLIC; ;}
    break;

  case 44:

    { (yyval) = ACC_PRIVATE; ;}
    break;

  case 45:

    { (yyval) = ACC_FINAL; ;}
    break;

  case 46:

    { (yyval) = ACC_ABSTRACT; ;}
    break;

  case 47:

    { (yyval) = ACC_STATIC; ;}
    break;

  case 48:

    { (yyval) = ACC_PROTECTED; ;}
    break;

  case 49:

    { 
		CreateClass( modifier_, (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]) );
	;}
    break;

  case 51:

    {
		CreateClass( ACC_PUBLIC, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]) );
	;}
    break;

  case 53:

    { (yyval) = NULL; ;}
    break;

  case 54:

    { 
		(yyval) = (yyvsp[(2) - (2)]); 
	;}
    break;

  case 56:

    {
		(yyval) =(yyvsp[(2) - (2)]);
	;}
    break;

  case 57:

    {
		(yyval) = new List<string *>();
		(yyval)->append( (yyvsp[(1) - (1)]) );
	;}
    break;

  case 58:

    {
		(yyval)->append( (yyvsp[(3) - (3)]) );
	;}
    break;

  case 68:

    {
		EndClassDeclaration();
	;}
    break;

  case 70:

    {
		DeclareFields( ACC_PUBLIC, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]) );
	;}
    break;

  case 71:

    {
		DeclareFields( (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]) );
	;}
    break;

  case 72:

    {
		(yyval) = new(zone()) List<Expression *>();
		(yyval)->append( (yyvsp[(1) - (1)]) );
	;}
    break;

  case 73:

    {
		(yyval)->append( (yyvsp[(3) - (3)]) );
	;}
    break;

  case 74:

    {
		(yyval) = new(zone()) Identifier(this, (yyvsp[(1) - (1)]));
	;}
    break;

  case 75:

    {
		(yyval) = new(zone()) Assign(this, new(zone()) Identifier(this, (yyvsp[(1) - (3)])), (yyvsp[(3) - (3)]));
	;}
    break;

  case 77:

    {
	
	;}
    break;

  case 80:

    { 
		EndMethodDeclaration( (yyvsp[(2) - (2)]) );
	;}
    break;

  case 81:

    {
		(yyval) = new(zone()) MethodDeclaration(ACC_PUBLIC, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).name, (yyvsp[(2) - (2)]).parameters);
	;}
    break;

  case 82:

    {
		(yyval) = new(zone()) MethodDeclaration(ACC_PUBLIC, VOID_TYPE, (yyvsp[(2) - (2)]).name, (yyvsp[(2) - (2)]).parameters);
	;}
    break;

  case 83:

    {
		(yyval) = new(zone()) MethodDeclaration((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).name, (yyvsp[(3) - (3)]).parameters);
	;}
    break;

  case 84:

    { 
		(yyval) = new(zone()) MethodDeclaration((yyvsp[(1) - (3)]), VOID_TYPE, (yyvsp[(3) - (3)]).name, (yyvsp[(3) - (3)]).parameters);
	;}
    break;

  case 85:

    {
		(yyval).name = (yyvsp[(1) - (3)]);
		(yyval).parameters = NULL;
	;}
    break;

  case 86:

    {
		(yyval).name = (yyvsp[(1) - (4)]);
		(yyval).parameters = (yyvsp[(3) - (4)]);
	;}
    break;

  case 87:

    {
		(yyval) = new(zone()) List<Pair>();
		(yyval)->append( (yyvsp[(1) - (1)]) );
	;}
    break;

  case 88:

    {
		(yyval)->append( (yyvsp[(3) - (3)]) );
	;}
    break;

  case 89:

    {
		(yyval).type = (yyvsp[(1) - (2)]);
		(yyval).name = (yyvsp[(2) - (2)]);
	;}
    break;

  case 91:

    {
		(yyval) = NULL;
	;}
    break;

  case 92:

    {
	
	;}
    break;

  case 93:

    {
	;}
    break;

  case 94:

    {
	
	;}
    break;

  case 95:

    {
	
	;}
    break;

  case 96:

    {
		(yyval) = new(zone()) MethodDeclaration(this, EXPR_METHOD, (yyvsp[(1) - (3)]), NULL);
	;}
    break;

  case 97:

    {
		(yyval) = new(zone()) MethodDeclaration(this, EXPR_METHOD, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	;}
    break;

  case 98:

    {
		(yyval) = (yyvsp[(2) - (2)]);
	;}
    break;

  case 99:

    {
		(yyval) = (yyvsp[(3) - (3)]);
	;}
    break;

  case 100:

    {
		(yyval) = (yyvsp[(3) - (3)]);
	;}
    break;

  case 101:

    { 
		(yyval) = (yyvsp[(4) - (4)]); 
	;}
    break;

  case 103:

    {
		(yyval) = new(zone()) Call(this, (yyvsp[(1) - (4)]), NULL);
	;}
    break;

  case 104:

    {
		(yyval) = new(zone()) Call(this, (yyvsp[(1) - (5)]), NULL);
	;}
    break;

  case 105:

    {
		(yyval) = new(zone()) Unary(this, EXPR_THIS);
	;}
    break;

  case 106:

    {
		(yyval) = new(zone()) Unary(this, EXPR_PARENT);
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
	;}
    break;

  case 113:

    {
	
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
	
	;}
    break;

  case 120:

    {
	
	;}
    break;

  case 122:

    { (yyval) = ACC_FINAL; ;}
    break;

  case 123:

    {
		DeclareVariable( 0, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]) );
	;}
    break;

  case 124:

    {
		DeclareVariable( (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]) );
	;}
    break;

  case 130:

    {
	;}
    break;

  case 135:

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

  case 151:

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

  case 168:

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

  case 186:

    {
	
	;}
    break;

  case 188:

    {
	
	;}
    break;

  case 189:

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

  case 205:

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

    {
	;}
    break;

  case 210:

    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 215:

    { (yyval) = (yyvsp[(2) - (3)]); ;}
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

  case 227:

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
	;}
    break;

  case 233:

    {
	
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
	;}
    break;

  case 244:

    {
		current_osb = 0;
	;}
    break;

  case 245:

    {
		current_osb++;
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

  case 255:

    {
	
	;}
    break;

  case 260:

    {
	
	;}
    break;

  case 261:

    {
	
	;}
    break;

  case 264:

    {
	
	;}
    break;

  case 265:

    {
	
	;}
    break;

  case 267:

    {
	
	;}
    break;

  case 268:

    {
	
	;}
    break;

  case 270:

    {
	
	;}
    break;

  case 271:

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

  case 276:

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

  case 280:

    {
	
	;}
    break;

  case 282:

    {
	
	;}
    break;

  case 283:

    {
	
	;}
    break;

  case 285:

    {
	
	;}
    break;

  case 286:

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

  case 292:

    {
	
	;}
    break;

  case 294:

    {
	
	;}
    break;

  case 295:

    {
	
	;}
    break;

  case 297:

    {
	
	;}
    break;

  case 299:

    {
	
	;}
    break;

  case 301:

    {
	;}
    break;

  case 303:

    {
	;}
    break;

  case 305:

    {
	;}
    break;

  case 307:

    {
	;}
    break;

  case 310:

    {
	
	;}
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




