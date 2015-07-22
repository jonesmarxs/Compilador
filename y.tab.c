/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "sintatica.y"

#include "funcoes.hpp"

int yylex(void);
void yyerror(string);


/* Line 268 of yacc.c  */
#line 79 "y.tab.c"

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
     TK_NUM_INT = 258,
     TK_NUM_FLOAT = 259,
     TK_TRUE_FALSE = 260,
     TK_CHAR = 261,
     TK_STRING = 262,
     TK_MAIN = 263,
     TK_ID = 264,
     TK_TIPO = 265,
     TK_FUNC = 266,
     TK_RETURN = 267,
     TK_VOID = 268,
     TK_FIM = 269,
     TK_ERROR = 270,
     TK_PRINT = 271,
     TK_PRINT_LN = 272,
     TK_READ = 273,
     TK_IF = 274,
     TK_ELSE = 275,
     TK_WHILE = 276,
     TK_FOR = 277,
     TK_DO = 278,
     TK_ELSEIF = 279,
     TK_ARITMETICOS = 280,
     TK_RELACIONAIS = 281,
     TK_AND_OR = 282,
     TK_INCREMENTO = 283,
     TK_BREAK = 284,
     TK_CONTINUE = 285,
     TK_MAIOR = 286,
     TK_MENOR = 287,
     TK_MAIORIGUAL = 288,
     TK_MENORIGUAL = 289,
     TK_IGUAL = 290,
     TK_DIFERENTE = 291,
     TK_AND = 292,
     TK_OR = 293,
     TK_NEGADO = 294
   };
#endif
/* Tokens.  */
#define TK_NUM_INT 258
#define TK_NUM_FLOAT 259
#define TK_TRUE_FALSE 260
#define TK_CHAR 261
#define TK_STRING 262
#define TK_MAIN 263
#define TK_ID 264
#define TK_TIPO 265
#define TK_FUNC 266
#define TK_RETURN 267
#define TK_VOID 268
#define TK_FIM 269
#define TK_ERROR 270
#define TK_PRINT 271
#define TK_PRINT_LN 272
#define TK_READ 273
#define TK_IF 274
#define TK_ELSE 275
#define TK_WHILE 276
#define TK_FOR 277
#define TK_DO 278
#define TK_ELSEIF 279
#define TK_ARITMETICOS 280
#define TK_RELACIONAIS 281
#define TK_AND_OR 282
#define TK_INCREMENTO 283
#define TK_BREAK 284
#define TK_CONTINUE 285
#define TK_MAIOR 286
#define TK_MENOR 287
#define TK_MAIORIGUAL 288
#define TK_MENORIGUAL 289
#define TK_IGUAL 290
#define TK_DIFERENTE 291
#define TK_AND 292
#define TK_OR 293
#define TK_NEGADO 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 199 "y.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,    42,    40,    47,    41,    53,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    50,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    16,    25,    34,    35,
      40,    43,    44,    45,    50,    52,    54,    57,    61,    64,
      67,    70,    73,    76,    79,    80,    85,    93,   101,   106,
     107,   111,   118,   119,   125,   130,   138,   147,   151,   155,
     159,   163,   166,   170,   172,   174,   176,   178,   180,   182,
     187,   193,   196,   199,   206,   211,   216,   217,   221,   225,
     227,   228,   233,   238,   243,   247,   248,   252,   253,   259,
     266,   273,   276,   279,   282,   291,   297
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    59,    58,    -1,    64,    57,    -1,
      -1,     8,    45,    46,    61,    -1,    59,    11,    10,     9,
      45,    60,    46,    61,    -1,    59,    11,    13,     9,    45,
      60,    46,    61,    -1,    -1,    10,     9,    47,    60,    -1,
      10,     9,    -1,    -1,    -1,    62,    48,    63,    49,    -1,
      72,    -1,    70,    -1,    70,    63,    -1,    68,    50,    63,
      -1,    68,    63,    -1,    64,    63,    -1,    67,    63,    -1,
      72,    63,    -1,    75,    63,    -1,    77,    63,    -1,    -1,
      10,     9,    66,    50,    -1,    10,     9,    51,    68,    52,
      66,    50,    -1,    10,     9,    51,    68,    52,    65,    50,
      -1,    51,    68,    52,    65,    -1,    -1,    47,     9,    66,
      -1,    47,     9,    51,    68,    52,    66,    -1,    -1,    10,
       9,    44,    68,    50,    -1,     9,    44,    68,    50,    -1,
       9,    51,    68,    52,    44,    68,    50,    -1,     9,    51,
      68,    52,    69,    44,    68,    50,    -1,    68,    53,    68,
      -1,    68,    25,    68,    -1,    68,    26,    68,    -1,    68,
      27,    68,    -1,    39,    68,    -1,    45,    68,    46,    -1,
       3,    -1,     4,    -1,     6,    -1,     7,    -1,     9,    -1,
       5,    -1,     9,    51,    68,    52,    -1,     9,    51,    68,
      52,    69,    -1,     9,    28,    -1,    28,     9,    -1,     9,
      51,    68,    54,    68,    52,    -1,     9,    45,    71,    46,
      -1,    51,    68,    52,    69,    -1,    -1,    12,    68,    50,
      -1,    68,    47,    71,    -1,    68,    -1,    -1,    17,    68,
      73,    50,    -1,    16,    68,    73,    50,    -1,    18,     9,
      74,    50,    -1,    47,    68,    73,    -1,    -1,    47,     9,
      74,    -1,    -1,    19,    45,    68,    46,    61,    -1,    19,
      45,    68,    46,    61,    76,    -1,    24,    45,    68,    46,
      61,    76,    -1,    20,    61,    -1,    29,    50,    -1,    30,
      50,    -1,    22,    45,    67,    68,    50,    68,    46,    61,
      -1,    21,    45,    68,    46,    61,    -1,    23,    61,    21,
      45,    68,    46,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    24,    24,    36,    40,    43,    48,    77,    95,    98,
     113,   127,   129,   129,   142,   145,   148,   151,   154,   157,
     160,   163,   166,   169,   172,   175,   218,   249,   282,   286,
     288,   296,   310,   312,   348,   382,   403,   441,   467,   485,
     502,   519,   534,   539,   544,   549,   555,   561,   570,   577,
     602,   647,   657,   667,   711,   731,   736,   739,   749,   755,
     762,   764,   781,   798,   827,   837,   839,   867,   870,   883,
     899,   912,   917,   924,   931,   957,   984
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM_INT", "TK_NUM_FLOAT",
  "TK_TRUE_FALSE", "TK_CHAR", "TK_STRING", "TK_MAIN", "TK_ID", "TK_TIPO",
  "TK_FUNC", "TK_RETURN", "TK_VOID", "TK_FIM", "TK_ERROR", "TK_PRINT",
  "TK_PRINT_LN", "TK_READ", "TK_IF", "TK_ELSE", "TK_WHILE", "TK_FOR",
  "TK_DO", "TK_ELSEIF", "TK_ARITMETICOS", "TK_RELACIONAIS", "TK_AND_OR",
  "TK_INCREMENTO", "TK_BREAK", "TK_CONTINUE", "TK_MAIOR", "TK_MENOR",
  "TK_MAIORIGUAL", "TK_MENORIGUAL", "TK_IGUAL", "TK_DIFERENTE", "TK_AND",
  "TK_OR", "TK_NEGADO", "'+'", "'-'", "'*'", "'/'", "'='", "'('", "')'",
  "','", "'{'", "'}'", "';'", "'['", "']'", "'.'", "':'", "$accept", "S",
  "GLOBAL", "MAIN", "FUNC", "FUNCDECLAR", "BLOCO", "$@1", "COMANDOS",
  "DECLARACAO", "MULTIVET", "DECLARACAO_MULTIPLA", "ATRIBUICAO", "E",
  "MULTIDIMENSAO", "RETORNO", "PARAMETRO", "IO", "PRINT_MULT", "READ_MULT",
  "CONDICIONAL", "ELSE", "LOOP", 0
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
      43,    45,    42,    47,    61,    40,    41,    44,   123,   125,
      59,    91,    93,    46,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    59,    59,    59,    60,
      60,    60,    62,    61,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    65,    65,
      66,    66,    66,    67,    67,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    70,    71,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     4,     8,     8,     0,     4,
       2,     0,     0,     4,     1,     1,     2,     3,     2,     2,
       2,     2,     2,     2,     0,     4,     7,     7,     4,     0,
       3,     6,     0,     5,     4,     7,     8,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     2,     6,     4,     4,     0,     3,     3,     1,
       0,     4,     4,     4,     3,     0,     3,     0,     5,     6,
       6,     2,     2,     2,     8,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     8,     4,    32,     1,     0,     3,     0,
       0,     0,     0,     0,     2,    32,    43,    44,    48,    45,
      46,    47,     0,     0,     0,     0,    25,     0,     0,     0,
       0,    30,    51,    60,     0,    52,    41,     0,     0,     0,
       0,    29,     0,    12,     0,     0,     0,    59,     0,     0,
      42,    38,    39,    40,     0,     0,     0,    37,     5,     0,
      11,    11,    32,    60,    54,    49,     0,     0,    27,    26,
      24,     0,     0,     0,    31,    58,     0,    50,     0,    29,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     0,    24,    24,    24,    15,    14,    24,    24,
      10,    12,    12,     0,    53,    28,     0,     0,    32,     0,
      65,    65,    67,     0,     0,     0,     0,    72,    73,    13,
      19,    20,    24,    18,    16,    21,    22,    23,    11,     6,
       7,    56,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     9,    55,
      34,    49,     0,    65,    62,    61,    67,    63,    12,    12,
       0,     0,     0,     0,     0,    50,    33,    64,    66,    68,
      75,     0,     0,     0,     0,     0,    12,     0,    69,     0,
       0,     0,    35,     0,    71,     0,     0,    12,    76,    36,
       0,    74,    12,     0,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,     7,    72,    58,    59,    92,    93,
      55,    11,    94,    95,    77,    96,    48,    97,   137,   140,
      98,   178,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
       5,    18,    33,  -126,     5,   -40,  -126,   102,  -126,    38,
      36,     2,    25,   109,  -126,   -30,  -126,  -126,  -126,  -126,
    -126,   106,    60,    36,    36,    80,  -126,    34,    70,    81,
      36,  -126,  -126,    36,    36,  -126,   298,    68,    36,    36,
      36,    11,    36,  -126,    44,    53,    90,   111,    62,    24,
    -126,   298,   -22,    12,    36,    49,    73,   298,  -126,    64,
     108,   108,    83,    36,  -126,    88,    36,   152,  -126,  -126,
     215,   122,    94,    95,  -126,  -126,    36,  -126,   203,    96,
     -26,   139,    36,    36,    36,   140,   107,   110,   114,  -126,
     113,   134,   112,   215,   215,   164,   215,   215,   215,   215,
     141,  -126,  -126,   214,  -126,  -126,    36,    36,   -39,   173,
     119,   119,   148,    36,    36,    51,   135,  -126,  -126,  -126,
    -126,  -126,   215,  -126,  -126,  -126,  -126,  -126,   108,  -126,
    -126,    88,   221,    75,    36,  -126,    36,   146,   147,   151,
     156,   224,   232,   -35,   192,    36,   157,  -126,  -126,  -126,
    -126,     4,   236,   119,  -126,  -126,   148,  -126,  -126,  -126,
      36,   163,   254,    36,    36,   166,  -126,  -126,  -126,    39,
    -126,   257,    36,   265,   269,    36,  -126,   167,  -126,     4,
     274,   158,  -126,   287,  -126,    36,   166,  -126,  -126,  -126,
     290,  -126,  -126,    39,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,   207,  -126,  -126,   -60,   -67,  -126,   -11,    67,
     136,    -5,    98,   -10,  -125,  -126,   153,  -126,  -107,    79,
    -126,    59,  -126
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,    73,    32,    38,   138,   134,   149,     9,     9,   106,
      31,    10,    10,    36,    37,     1,   160,     9,   106,    33,
      46,    30,   116,    47,    49,   107,   165,     5,    51,    52,
      53,    42,    57,     6,   129,   130,    56,    38,    39,    16,
      17,    18,    19,    20,    67,    21,   167,    15,   164,    38,
      39,    40,    26,    47,   186,    76,    78,    74,     9,   176,
     143,   144,    54,   177,    22,    42,   103,     4,   148,    35,
      27,     4,   109,   110,   111,    23,    65,    42,    66,    44,
      43,    24,   120,   121,   123,   124,   125,   126,   127,    60,
      45,   169,   170,    38,    39,    40,   132,   133,    61,    68,
      38,    39,    40,   141,   142,    38,    39,    40,    64,   184,
      12,   147,    70,    13,    50,    38,    39,    40,    71,    28,
     191,    42,    29,    69,   152,   193,   153,   151,    42,    66,
       9,   100,    41,    42,    32,   162,    38,    39,    40,    76,
     101,   102,    62,    42,    38,    39,    40,    54,   108,   112,
     171,    33,   113,   173,   174,   114,   146,    34,    63,   115,
     156,   119,   180,   117,    42,   183,   136,    16,    17,    18,
      19,    20,    42,    80,    81,   190,    82,    38,    39,    40,
      83,    84,    85,    86,   118,    87,    88,    89,   128,    38,
      39,    40,    22,    90,    91,   139,   154,   155,    38,    39,
      40,   161,   163,    23,    79,    42,   157,   134,   188,    24,
     175,     8,   185,   145,   122,   105,    75,    42,    16,    17,
      18,    19,    20,   135,    80,    81,    42,    82,    38,    39,
      40,    83,    84,    85,    86,   168,    87,    88,    89,    38,
      39,    40,     0,    22,    90,    91,    38,    39,    40,    38,
      39,    40,   194,     0,    23,   104,    42,    38,    39,    40,
      24,    38,    39,    40,     0,     0,   131,    42,     0,     0,
     158,   150,     0,     0,    42,     0,     0,    42,   159,    38,
      39,    40,    38,    39,    40,    42,   166,     0,     0,    42,
      38,    39,    40,     0,    38,    39,    40,     0,     0,    38,
      39,    40,     0,     0,   172,     0,     0,    42,     0,   179,
      42,   181,    38,    39,    40,    38,    39,    40,    42,   182,
     187,     0,    42,    38,    39,    40,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,   192,   189,     0,     0,
      42,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    42
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-126))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      10,    61,    28,    25,   111,    44,   131,    47,    47,    44,
      15,    51,    51,    23,    24,    10,    51,    47,    44,    45,
      30,    51,    89,    33,    34,    51,   151,     9,    38,    39,
      40,    53,    42,     0,   101,   102,    41,    25,    26,     3,
       4,     5,     6,     7,    54,     9,   153,     9,    44,    25,
      26,    27,    50,    63,   179,    51,    66,    62,    47,    20,
       9,    10,    51,    24,    28,    53,    76,     0,   128,     9,
      45,     4,    82,    83,    84,    39,    52,    53,    54,     9,
      46,    45,    93,    94,    95,    96,    97,    98,    99,    45,
       9,   158,   159,    25,    26,    27,   106,   107,    45,    50,
      25,    26,    27,   113,   114,    25,    26,    27,    46,   176,
       8,   122,    48,    11,    46,    25,    26,    27,    10,    10,
     187,    53,    13,    50,   134,   192,   136,    52,    53,    54,
      47,     9,    52,    53,    28,   145,    25,    26,    27,    51,
      46,    46,    52,    53,    25,    26,    27,    51,     9,     9,
     160,    45,    45,   163,   164,    45,    21,    51,    47,    45,
       9,    49,   172,    50,    53,   175,    47,     3,     4,     5,
       6,     7,    53,     9,    10,   185,    12,    25,    26,    27,
      16,    17,    18,    19,    50,    21,    22,    23,    47,    25,
      26,    27,    28,    29,    30,    47,    50,    50,    25,    26,
      27,     9,    45,    39,    52,    53,    50,    44,    50,    45,
      44,     4,    45,   115,    50,    79,    63,    53,     3,     4,
       5,     6,     7,    50,     9,    10,    53,    12,    25,    26,
      27,    16,    17,    18,    19,   156,    21,    22,    23,    25,
      26,    27,    -1,    28,    29,    30,    25,    26,    27,    25,
      26,    27,   193,    -1,    39,    52,    53,    25,    26,    27,
      45,    25,    26,    27,    -1,    -1,    52,    53,    -1,    -1,
      46,    50,    -1,    -1,    53,    -1,    -1,    53,    46,    25,
      26,    27,    25,    26,    27,    53,    50,    -1,    -1,    53,
      25,    26,    27,    -1,    25,    26,    27,    -1,    -1,    25,
      26,    27,    -1,    -1,    50,    -1,    -1,    53,    -1,    52,
      53,    46,    25,    26,    27,    25,    26,    27,    53,    50,
      46,    -1,    53,    25,    26,    27,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    50,    -1,    -1,
      53,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    56,    57,    64,     9,     0,    59,    57,    47,
      51,    66,     8,    11,    58,     9,     3,     4,     5,     6,
       7,     9,    28,    39,    45,    68,    50,    45,    10,    13,
      51,    66,    28,    45,    51,     9,    68,    68,    25,    26,
      27,    52,    53,    46,     9,     9,    68,    68,    71,    68,
      46,    68,    68,    68,    51,    65,    66,    68,    61,    62,
      45,    45,    52,    47,    46,    52,    54,    68,    50,    50,
      48,    10,    60,    60,    66,    71,    51,    69,    68,    52,
       9,    10,    12,    16,    17,    18,    19,    21,    22,    23,
      29,    30,    63,    64,    67,    68,    70,    72,    75,    77,
       9,    46,    46,    68,    52,    65,    44,    51,     9,    68,
      68,    68,     9,    45,    45,    45,    61,    50,    50,    49,
      63,    63,    50,    63,    63,    63,    63,    63,    47,    61,
      61,    52,    68,    68,    44,    50,    47,    73,    73,    47,
      74,    68,    68,     9,    10,    67,    21,    63,    60,    69,
      50,    52,    68,    68,    50,    50,     9,    50,    46,    46,
      51,     9,    68,    45,    44,    69,    50,    73,    74,    61,
      61,    68,    50,    68,    68,    44,    20,    24,    76,    52,
      68,    46,    50,    68,    61,    45,    69,    46,    50,    50,
      68,    61,    46,    61,    76
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 24 "sintatica.y"
    {
				cout << "#include<stdio.h>\n";
				cout << "#include<string.h>\n";
				cout << "#include<iostream>\n\n";
				cout << "using namespace std;\n";
				cout << "\n" + (yyvsp[(1) - (3)]).traducao;
				cout << (yyvsp[(2) - (3)]).traducao << endl;
				cout << "int main(void)\n{\n" ;
				cout << (yyvsp[(3) - (3)]).traducao + "\treturn 0;\n}";
			}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 37 "sintatica.y"
    {
				(yyval).traducao =  (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao + "\n" ;				
			}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 43 "sintatica.y"
    {				
				(yyval).traducao = (yyvsp[(4) - (4)]).traducao; 
			}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 49 "sintatica.y"
    {			
				string aux = (yyvsp[(3) - (8)]).label + " " + (yyvsp[(4) - (8)]).label + "(" + (yyvsp[(6) - (8)]).traducao + ")\n{\n";
				
				//Verifica se já existe uma função com o mesmo nome
				for(int i = 0; i < listaFuncoes.size(); i++)										
					if(listaFuncoes[i].nome == (yyvsp[(4) - (8)]).label)
						yyerror("NOME DE FUNCAO EXISTENTE");						

				//verificando o retorno
				if( returnVar.size() == 0)
					yyerror("FUNCAO SEM RETORNO");

				for(int i = 0; i < returnVar.size(); i++)
					if(returnVar[i] != (yyvsp[(3) - (8)]).label)
						yyerror("TIPO INCOMPATIVEL");					

				criaFuncao((yyvsp[(4) - (8)]).label, (yyvsp[(3) - (8)]).label, parametros);

				returnVar.clear();
				parametros.clear();
				parametrosVar.clear();

				if((yyvsp[(1) - (8)]).traducao[0] == '\t')
					(yyval).traducao = aux + (yyvsp[(8) - (8)]).traducao + "}\n\n"; 
				else
					(yyval).traducao = aux + (yyvsp[(8) - (8)]).traducao + "}\n\n" +(yyvsp[(1) - (8)]).traducao; 
				
			}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 78 "sintatica.y"
    {	
				string aux = (yyvsp[(3) - (8)]).label + " " + (yyvsp[(4) - (8)]).label + "(" + (yyvsp[(6) - (8)]).traducao + ")\n{\n";

				//verificando o retorno
				if( returnVar.size() != 0)
					yyerror("FUNCAO VOID COM RETORNO");

				criaFuncao((yyvsp[(4) - (8)]).label, (yyvsp[(3) - (8)]).label, parametros);
				returnVar.clear();
				parametros.clear();
				parametrosVar.clear();

				if((yyvsp[(1) - (8)]).traducao[0] == '\t')
					(yyval).traducao = aux + (yyvsp[(8) - (8)]).traducao + "}\n\n"; 
				else
					(yyval).traducao = aux + (yyvsp[(8) - (8)]).traducao + "}\n\n" +(yyvsp[(1) - (8)]).traducao;
			}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 99 "sintatica.y"
    {	
				parametros.push_back((yyvsp[(1) - (4)]).label);				

				for(int i = 0; i < parametrosVar.size(); i++)
				{
					if(parametrosVar[i] == (yyvsp[(2) - (4)]).label)
						yyerror("VARIAVEL JA DECLARADA");
				}

				parametrosVar.push_back((yyvsp[(2) - (4)]).label);	
			
				(yyval).label = criaAtributo((yyvsp[(1) - (4)]).label, (yyvsp[(2) - (4)]).label);
				(yyval).traducao = (yyvsp[(2) - (4)]).traducao + (yyvsp[(1) - (4)]).label + " " +(yyval).label+ ", "+ (yyvsp[(4) - (4)]).traducao;				
			}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 114 "sintatica.y"
    { 
				parametros.push_back((yyvsp[(1) - (2)]).label);				

				for(int i = 0; i < parametrosVar.size(); i++)
				{
					if(parametrosVar[i] == (yyvsp[(2) - (2)]).label)
						yyerror("VARIAVEL JA DECLARADA");
				}

				parametrosVar.push_back((yyvsp[(2) - (2)]).label);	
				(yyval).label = criaAtributo((yyvsp[(1) - (2)]).label, (yyvsp[(2) - (2)]).label);
				(yyval).traducao = (yyvsp[(2) - (2)]).traducao + (yyvsp[(1) - (2)]).label + " " +(yyval).label;				
			}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 129 "sintatica.y"
    {	contexto++;
				map<string, Atributos> tabela;
				pilha.push_back(tabela);
			}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 133 "sintatica.y"
    {

				(yyval).traducao = (yyvsp[(3) - (4)]).traducao;
			
				contexto--;
				pilha.pop_back();
			}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 142 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (1)]).traducao;
			}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 145 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (1)]).traducao;
			}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 148 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 151 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao;
			}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 154 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 157 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 160 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;	
			}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 163 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 166 "sintatica.y"
    {
				 (yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 169 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 175 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (4)]).label);
				if(i != contexto){
					if((yyvsp[(1) - (4)]).label == "string") {
						(yyval).label = criaAtributo("string", (yyvsp[(2) - (4)]).label);
						(yyval).traducao = (yyvsp[(2) - (4)]).traducao + "\tchar " + (yyval).label + "[0];\n";
						for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								pilha[contexto][it -> first].tipo = "string";
								pilha[contexto][pilha[contexto][it -> first].label].tipo = "string";
								(yyval).traducao += "\tchar " + pilha[contexto][it -> first].label + "[0];\n";
							}
						}
					}
					else {
						(yyval).label = criaAtributo((yyvsp[(1) - (4)]).label, (yyvsp[(2) - (4)]).label);
						string tipo = (yyvsp[(1) - (4)]).label == "bool" ? "int" : (yyvsp[(1) - (4)]).label;
						(yyval).traducao = (yyvsp[(2) - (4)]).traducao + "\t"+ tipo + " " +(yyval).label + ";\n";

						for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								if(pilha[contexto][it -> first].tipo == "vetor_") {
									pilha[contexto][it -> first].tipo += (yyvsp[(1) - (4)]).label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo += (yyvsp[(1) - (4)]).label;
									pilha[contexto][pilha[contexto][it -> first].traducao].tipo += (yyvsp[(1) - (4)]).label;
									(yyval).traducao += "\tint " + pilha[contexto][it -> first].tamanho + " = " + pilha[contexto][pilha[contexto][it -> first].tamanho].traducao + ";\n";
									(yyval).traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + "[" + pilha[contexto][it -> first].tamanho + "];\n";
								}
								else {
									pilha[contexto][it -> first].tipo = (yyvsp[(1) - (4)]).label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo = (yyvsp[(1) - (4)]).label;
									(yyval).traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + ";\n";	
								}
							}
						}
					}
					
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (4)]).label+"\" já foi declarada");

			}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 218 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (7)]).label);
				int j = procuraVariavel((yyvsp[(4) - (7)]).label);

				if(i != contexto){
					(yyval).label = criaAtributo("vetor_"+(yyvsp[(1) - (7)]).label, (yyvsp[(2) - (7)]).label);
					pilha[contexto][(yyval).label].tamanho = pilha[j][(yyvsp[(4) - (7)]).label].label;
					string tipo = (yyvsp[(1) - (7)]).label == "bool" ? "int" : (yyvsp[(1) - (7)]).label;
					(yyval).traducao = (yyvsp[(2) - (7)]).traducao + (yyvsp[(4) - (7)]).traducao + "\t" + tipo + " " + (yyval).label + "[" + pilha[j][(yyvsp[(4) - (7)]).label].label + "]" + ";\n";

					for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								if(pilha[contexto][it -> first].tipo == "vetor_") {
									pilha[contexto][it -> first].tipo += (yyvsp[(1) - (7)]).label;
									pilha[contexto][pilha[contexto][it -> first].traducao].tipo += (yyvsp[(1) - (7)]).label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo += (yyvsp[(1) - (7)]).label;
									(yyval).traducao += "\tint " + pilha[contexto][it -> first].tamanho + " = " + pilha[contexto][pilha[contexto][it -> first].tamanho].traducao + ";\n";
									(yyval).traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + "[" + pilha[contexto][it -> first].tamanho + "];\n";
								}
								else {
									pilha[contexto][it -> first].tipo = (yyvsp[(1) - (7)]).label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo = (yyvsp[(1) - (7)]).label;
									(yyval).traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + ";\n";	
								}
							}
						}
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (7)]).label+"\" já foi declarada");
			}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 249 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (7)]).label);
				int j = procuraVariavel((yyvsp[(4) - (7)]).label);
				
				int tamanho = 1;				
				parametrosVar.push_back(pilha[contexto][(yyvsp[(4) - (7)]).label].traducao);

				for(int i = 0; i < parametrosVar.size(); i++)
					tamanho *= atoi(parametrosVar[i].c_str());

				if(i != contexto){
					string tamanhoString = intToString(tamanho);
					string tipo = (yyvsp[(1) - (7)]).label == "bool" ? "int" : (yyvsp[(1) - (7)]).label;
					(yyval).label = criaAtributo("vetor_"+(yyvsp[(1) - (7)]).label, (yyvsp[(2) - (7)]).label);

					pilha[contexto][(yyval).label].dimensao = parametrosVar;
					pilha[contexto][(yyval).label].tamanho = tamanhoString;

					pilha[contexto][(yyvsp[(2) - (7)]).label].dimensao = parametrosVar;
					pilha[contexto][(yyvsp[(2) - (7)]).label].tamanho = tamanhoString;


					(yyval).traducao = (yyvsp[(2) - (7)]).traducao + "\t" + tipo + " " + (yyval).label + "[" + tamanhoString + "];\n";

					parametrosVar.clear();
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (7)]).label+"\" já foi declarada");
			}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 283 "sintatica.y"
    {			
				parametrosVar.push_back(pilha[contexto][(yyvsp[(2) - (4)]).label].traducao);
			}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 288 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("", (yyvsp[(2) - (3)]).label);
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (3)]).label+"\" já foi declarada");
			}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 296 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (6)]).label);
				int j = procuraVariavel((yyvsp[(4) - (6)]).label);

				if(i != contexto){
					(yyval).label = criaAtributo("vetor_", (yyvsp[(2) - (6)]).label);
					pilha[contexto][(yyval).label].tamanho = pilha[j][(yyvsp[(4) - (6)]).label].label;
					pilha[contexto][pilha[contexto][(yyval).label].traducao].tamanho = pilha[j][(yyvsp[(4) - (6)]).label].label;	
					pilha[contexto][pilha[contexto][(yyval).label].label].tamanho = pilha[j][(yyvsp[(4) - (6)]).label].label;				
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (6)]).label+"\" já foi declarada");
			}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 312 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(2) - (5)]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[(1) - (5)]).label, (yyvsp[(2) - (5)]).label);
					int j = procuraVariavel((yyvsp[(4) - (5)]).label);
					
					if((yyvsp[(1) - (5)]).label == "bool"){
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo != "bool")
							yyerror("TIPOS INCOMPATIVEIS");
						else
							adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[(1) - (5)]).label, pilha[j][(yyvsp[(4) - (5)]).label].tipo) + (yyvsp[(4) - (5)]).label + ";\n";
					}
					else if((yyvsp[(1) - (5)]).label == "string"){
						i = procuraVariavel((yyval).label);
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo != "string")
							yyerror("TIPOS INCOMPATIVEIS");
						else {
							adicional = "\tchar "  + (yyval).label + "[" + pilha[j][(yyvsp[(4) - (5)]).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[(4) - (5)]).label + ");\n";						
							pilha[j][(yyvsp[(2) - (5)]).label].tamanho = pilha[j][(yyvsp[(4) - (5)]).label].tamanho;
							pilha[i][(yyval).label].tamanho = pilha[j][(yyvsp[(4) - (5)]).label].tamanho;
						}
					}
					else {
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo == "bool" || pilha[j][(yyvsp[(4) - (5)]).label].tipo == "string")
							yyerror("TIPOS INCOMPATIVEIS");
						else
							adicional = "\t" + (yyvsp[(1) - (5)]).label + " " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[(1) - (5)]).label, pilha[j][(yyvsp[(4) - (5)]).label].tipo) + (yyvsp[(4) - (5)]).label + ";\n";
					}
				}
				else
					yyerror("Variavel \""+(yyvsp[(2) - (5)]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[(2) - (5)]).traducao + (yyvsp[(4) - (5)]).traducao + adicional;
			}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 348 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(1) - (4)]).label);
				int j = procuraVariavel((yyvsp[(3) - (4)]).label);
				if(i != -1){
					if((pilha[i][(yyvsp[(1) - (4)]).label].tipo == "bool" && pilha[i][(yyvsp[(3) - (4)]).label].tipo != "bool") 
					|| (pilha[i][(yyvsp[(1) - (4)]).label].tipo != "bool" && pilha[i][(yyvsp[(3) - (4)]).label].tipo == "bool")
					|| (pilha[i][(yyvsp[(1) - (4)]).label].tipo == "string" && pilha[i][(yyvsp[(3) - (4)]).label].tipo != "string")
					|| (pilha[i][(yyvsp[(1) - (4)]).label].tipo != "string" && pilha[i][(yyvsp[(3) - (4)]).label].tipo == "string")){
						yyerror("TIPOS INCOMPATIVEIS");						
					}
					if(pilha[i][(yyvsp[(1) - (4)]).label].tipo == "string"){
						string novaLabel = criaAtributo("string","");
						Atributos atributo = pilha[i][(yyvsp[(1) - (4)]).label];		

						pilha[i][atributo.traducao].label = novaLabel;
						pilha[i][novaLabel] = atributo;
						pilha[i][novaLabel].label = novaLabel;

						string aux = "\tchar " + novaLabel + "[" + pilha[j][(yyvsp[(3) - (4)]).label].tamanho + "];\n";
						adicional = aux + "\tstrcpy(" + pilha[i][(yyvsp[(1) - (4)]).label].label + "," + pilha[i][(yyvsp[(3) - (4)]).label].label + ");\n";	
						
						pilha[i][novaLabel].tamanho = pilha[j][(yyvsp[(3) - (4)]).label].tamanho;
						pilha[i][atributo.traducao].tamanho = pilha[j][(yyvsp[(3) - (4)]).label].tamanho;
					}
					else
						adicional = "\t" + pilha[i][(yyvsp[(1) - (4)]).label].label + " = " + verificaCastAtribuicao(pilha[i][(yyvsp[(1) - (4)]).label].tipo, pilha[i][(yyvsp[(3) - (4)]).label].tipo) + (yyvsp[(3) - (4)]).label + ";\n";			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[(1) - (4)]).traducao + (yyvsp[(3) - (4)]).traducao + adicional;
			}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 382 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(1) - (7)]).label);
				int j = procuraVariavel((yyvsp[(6) - (7)]).label);	
				
				if(pilha[i][(yyvsp[(1) - (7)]).label].tipo[0] == 'v' || pilha[i][(yyvsp[(1) - (7)]).label].tipo[0] == 's'){
					if(i != -1){
						if((pilha[i][(yyvsp[(1) - (7)]).label].tipo != "bool" && pilha[i][(yyvsp[(6) - (7)]).label].tipo == "bool")
						|| (pilha[i][(yyvsp[(1) - (7)]).label].tipo == "bool" && pilha[i][(yyvsp[(6) - (7)]).label].tipo != "bool")
						|| (pilha[i][(yyvsp[(1) - (7)]).label].tipo == "string" && pilha[i][(yyvsp[(6) - (7)]).label].tipo != "char")
						|| (pilha[i][(yyvsp[(1) - (7)]).label].tipo != "string" && pilha[i][(yyvsp[(6) - (7)]).label].tipo == "string")) {
							yyerror("TIPOS INCOMPATIVEIS");						
						}
						adicional = "\t" + pilha[i][(yyvsp[(1) - (7)]).label].label + "[" + (yyvsp[(3) - (7)]).label + "] = " + pilha[j][(yyvsp[(6) - (7)]).label].label + ";\n";		
					}
					else
						yyerror("VARIAVEL NAO DECLARADA");
				}
				(yyval).traducao = (yyvsp[(1) - (7)]).traducao + (yyvsp[(3) - (7)]).traducao + (yyvsp[(6) - (7)]).traducao + adicional;
			}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 403 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(1) - (8)]).label);	
				int l = procuraVariavel((yyvsp[(7) - (8)]).label);
				string adicional;
				parametrosVar.push_back(pilha[contexto][(yyvsp[(3) - (8)]).label].traducao);
				if(i != -1){

					int pos = 0;
					if(pilha[i][(yyvsp[(1) - (8)]).label].dimensao.size() > 1)
					{
						for(int j = parametrosVar.size()-1; j >= 0; j--){
							if(atoi(parametrosVar[j].c_str()) >= atoi(pilha[i][(yyvsp[(1) - (8)]).label].dimensao[j].c_str()))
								yyerror("ACESSO INVALIDO");
							int dis = 1;
							for(int k = 0; k < j; k++)
								dis *= atoi(pilha[i][(yyvsp[(1) - (8)]).label].dimensao[k].c_str());
							pos += dis * atoi(parametrosVar[j].c_str());
						}

						if(pilha[i][(yyvsp[(1) - (8)]).label].tipo[0] == 'v' || pilha[i][(yyvsp[(1) - (8)]).label].tipo[0] == 's'){
							if((pilha[i][(yyvsp[(1) - (8)]).label].tipo != "bool" && pilha[i][(yyvsp[(7) - (8)]).label].tipo == "bool")
							|| (pilha[i][(yyvsp[(1) - (8)]).label].tipo == "bool" && pilha[i][(yyvsp[(7) - (8)]).label].tipo != "bool")
							|| (pilha[i][(yyvsp[(1) - (8)]).label].tipo == "string" && pilha[i][(yyvsp[(7) - (8)]).label].tipo != "char")
							|| (pilha[i][(yyvsp[(1) - (8)]).label].tipo != "string" && pilha[i][(yyvsp[(7) - (8)]).label].tipo == "string")) {
								yyerror("TIPOS INCOMPATIVEIS");						
							}
							string label = criaAtributo("int", "");
							adicional = "\tint " + label + ";\n\t" + label + " = " + intToString(pos) + ";\n"; 
							adicional += "\t" + pilha[i][(yyvsp[(1) - (8)]).label].label + "[" + label + "] = " + pilha[l][(yyvsp[(7) - (8)]).label].label + ";\n";		
						}
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
				parametrosVar.clear();
				(yyval).traducao = (yyvsp[(1) - (8)]).traducao + (yyvsp[(3) - (8)]).traducao + (yyvsp[(7) - (8)]).traducao + adicional;
			}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 441 "sintatica.y"
    {		

				string adicional;

				if(pilha[contexto][(yyvsp[(1) - (3)]).label].tipo == "string" && pilha[contexto][(yyvsp[(3) - (3)]).label].tipo == "string")
				{
					(yyval).label = criaAtributo("string", "");
					int tamanho = atoi(pilha[contexto][(yyvsp[(1) - (3)]).label].tamanho.c_str()) + atoi(pilha[contexto][(yyvsp[(3) - (3)]).label].tamanho.c_str());

					stringstream aux;   
				    aux << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = aux.str();
					pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

					string aux0 = "\tchar " + (yyval).label + "[" + tamanhoNovaString + "] = \"\";\n";
					string aux1 = "\tstrcat(" + (yyval).label + "," + (yyvsp[(1) - (3)]).label + ");\n";
					string varBase = "\tstrcat(" + (yyval).label + "," + (yyvsp[(3) - (3)]).label + ");\n";
					adicional = aux0 + aux1 + varBase;
				}
				else
					yyerror("OPERACAO INVALIDA");

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;
			
			}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 467 "sintatica.y"
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("aritmeticos",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo((yyvsp[(1) - (3)]).label, "");
					adicional = formaExpressao(resultado, " "+(yyvsp[(2) - (3)]).label+" ", (yyval).label, (yyvsp[(1) - (3)]).label, (yyvsp[(3) - (3)]).label);
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;

			}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 485 "sintatica.y"
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " "+(yyvsp[(2) - (3)]).label+" ", (yyval).label, (yyvsp[(1) - (3)]).label, (yyvsp[(3) - (3)]).label);
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;				
			}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 502 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("AND_OR",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = "\tint " + (yyval).label + " = " + (yyvsp[(1) - (3)]).label + " && " + (yyvsp[(3) - (3)]).label + ";\n";
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;
			}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 519 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);
				string resultado = verificaCompatibilidadeVariaveis("!",pilha[contexto][(yyvsp[(2) - (2)]).label].tipo,"");
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					string adicional = "\tint " + (yyval).label + " = !" + (yyvsp[(2) - (2)]).label + ";\n";
					(yyval).traducao = (yyvsp[(2) - (2)]).traducao + adicional;
				}
					
			}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 534 "sintatica.y"
    {

				(yyval).label = (yyvsp[(2) - (3)]).label;
				(yyval).traducao = (yyvsp[(2) - (3)]).traducao;
			}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 539 "sintatica.y"
    {

				(yyval).label = criaAtributo("int", (yyvsp[(1) - (1)]).label);
				(yyval).traducao = "\tint " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
			}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 544 "sintatica.y"
    {

				(yyval).label = criaAtributo("float", (yyvsp[(1) - (1)]).label);
				(yyval).traducao = "\tfloat " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
			}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 549 "sintatica.y"
    {
				
				(yyval).label = criaAtributo("char", (yyvsp[(1) - (1)]).label);				
				(yyval).traducao = "\tchar " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
				
			}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 555 "sintatica.y"
    {

				(yyval).label = criaAtributo("string", (yyvsp[(1) - (1)]).label);				
				(yyval).traducao = "\tchar " + (yyval).label + "[" + pilha[contexto][(yyval).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[(1) - (1)]).label + ");\n";

			}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 561 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(1) - (1)]).label), i != -1)
					(yyval).label = pilha[i][(yyvsp[(1) - (1)]).label].label;					
				
				else 
					yyerror("VARIAVEL NAO DECLARADA");

			}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 570 "sintatica.y"
    {
				(yyval).label = criaAtributo("bool", (yyvsp[(1) - (1)]).label);
				if((yyvsp[(1) - (1)]).label == "true")
					(yyval).traducao = "\tint " + (yyval).label + " = " + "1" + ";\n";
				else
					(yyval).traducao = "\tint " + (yyval).label + " = " + "0" + ";\n";
			}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 577 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(1) - (4)]).label);	
				string adicional;
				if(i != -1){
					if(pilha[i][(yyvsp[(1) - (4)]).label].tipo == "string" && pilha[i][(yyvsp[(1) - (4)]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("char","");
						adicional = "\tchar " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (4)]).label].label + "[" + (yyvsp[(3) - (4)]).label + "];\n";
					}
					else if(pilha[i][(yyvsp[(1) - (4)]).label].tamanho != "0"){
						string tipo = pilha[i][(yyvsp[(1) - (4)]).label].tipo.substr(6, pilha[i][(yyvsp[(1) - (4)]).label].tipo.size() - 6);
						(yyval).label = criaAtributo(tipo, "");
						if(tipo != "bool")
							adicional = "\t" + tipo + " " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (4)]).label].label + "[" + (yyvsp[(3) - (4)]).label + "];\n";
						else
							adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (4)]).label].label + "[" + (yyvsp[(3) - (4)]).label + "];\n";
					}			
					else
						yyerror("OPERACAO INVALIDA");			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[(3) - (4)]).traducao + adicional;
			}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 602 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(1) - (5)]).label);	
				string adicional;
				parametrosVar.push_back(pilha[contexto][(yyvsp[(3) - (5)]).label].traducao);
				if(i != -1){

					if(pilha[i][(yyvsp[(1) - (5)]).label].tipo == "string" && pilha[i][(yyvsp[(1) - (5)]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("char","");
						adicional = "\tchar " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (5)]).label].label + "[" + (yyvsp[(3) - (5)]).label + "];\n";
					}
					else if(pilha[i][(yyvsp[(1) - (5)]).label].tamanho != "0"){
						string tipo = pilha[i][(yyvsp[(1) - (5)]).label].tipo.substr(6, pilha[i][(yyvsp[(1) - (5)]).label].tipo.size() - 6);
						(yyval).label = criaAtributo(tipo, "");
						int pos = 0;
						if(pilha[i][(yyvsp[(1) - (5)]).label].dimensao.size() > 1)
						{
							for(int j = 0; j < pilha[i][(yyvsp[(1) - (5)]).label].dimensao.size(); j++){
								if(atoi(parametrosVar[j].c_str()) >= atoi(pilha[i][(yyvsp[(1) - (5)]).label].dimensao[j].c_str()))
									yyerror("ACESSO INVALIDO");
								int dis = 1;
								for(int k = 0; i < pilha[i][(yyvsp[(1) - (5)]).label].dimensao.size()-(j+1); i++)
									dis *= atoi(pilha[i][(yyvsp[(1) - (5)]).label].dimensao[k].c_str());
								pos += dis * atoi(parametrosVar[j].c_str());
							}
						
							if(atoi(pilha[i][(yyvsp[(1) - (5)]).label].tamanho.c_str()) < pos)
								yyerror("ACESSO INVALIDO");

							//$$.traducao = "\t" + pilha[i][$1.label].tipo + " " + $$.label + ";\n\t" + $$.label + " = " +  pilha[2].simbolo[$1.label].label + "["+ intToString(pos) +"];\n";
						}
						if(tipo != "bool")
							adicional = "\t" + tipo + " " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (5)]).label].label + "[" + intToString(pos) + "];\n";
						else
							adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[(1) - (5)]).label].label + "[" + intToString(pos) + "];\n";
						parametrosVar.clear();
					}			
					else
						yyerror("OPERACAO INVALIDA");			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[(3) - (5)]).traducao + adicional;
			}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 647 "sintatica.y"
    {	
				int i = procuraVariavel((yyvsp[(1) - (2)]).label);	
				string adicional;
				if(i != -1){
					(yyval).label = pilha[i][(yyvsp[(1) - (2)]).label].label;
					(yyval).traducao = "\t" + pilha[i][(yyvsp[(1) - (2)]).label].label + " = " + pilha[i][(yyvsp[(1) - (2)]).label].label + " " + (yyvsp[(2) - (2)]).label[0] +" 1;\n";
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 657 "sintatica.y"
    {		
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);		
				string adicional;
				if(i != -1){
					(yyval).label = pilha[i][(yyvsp[(1) - (2)]).label].label;
					(yyval).traducao = "\t" + pilha[i][(yyvsp[(2) - (2)]).label].label + " = " + pilha[i][(yyvsp[(2) - (2)]).label].label + " " + (yyvsp[(1) - (2)]).label[0] +" 1;\n";
				}	
				else
					yyerror("VARIAVEL NAO DECLARADA");		
			}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 667 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(1) - (6)]).label);	
				int j = procuraVariavel((yyvsp[(5) - (6)]).label);
				int tam1 = atoi(pilha[j][(yyvsp[(5) - (6)]).label].traducao.c_str());
				int tam2 = atoi(pilha[j][(yyvsp[(3) - (6)]).label].traducao.c_str());
				int tamanho = tam1 - tam2 + 1;

				if((tam1 < 0 || tam2 < 0) || (tam2 > tam1) || (tam1 > atoi(pilha[i][(yyvsp[(1) - (6)]).label].tamanho.c_str()) || tam2 > atoi(pilha[i][(yyvsp[(1) - (6)]).label].tamanho.c_str())))
					yyerror("OPERACAO INVALIDA");	

			    string tamanhoNovaString = intToString(tamanho);
			    string adicional;
				if(pilha[i][(yyvsp[(1) - (6)]).label].tipo == "string" && pilha[i][(yyvsp[(1) - (6)]).label].tamanho != "0")
				{
					(yyval).label = criaAtributo("string","");
				    pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

				    adicional = "\tchar " + (yyval).label + "[" + tamanhoNovaString + "];\n\t" + (yyval).label + "[" + tamanhoNovaString + "] = \'\\0\';\n"; 
				}
				else if(pilha[i][(yyvsp[(1) - (6)]).label].tamanho != "0"){
					(yyval).label = criaAtributo(pilha[i][(yyvsp[(1) - (6)]).label].tipo,"");
				    pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

				    string tipo = pilha[i][(yyvsp[(1) - (6)]).label].tipo == "vetor_float" ? "float" : "int";
				    adicional = "\t"+ tipo + " " + (yyval).label + "[" + tamanhoNovaString + "];\n"; 
				}
				else
					yyerror("OPERACAO INVALIDA");	

				string varContador = criaAtributo("int","");
				string varBase = criaAtributo("int","");				  
				string varTeste = criaAtributo("int","");

				string inicioWhile = criaLabel();

				adicional += "\tint " + pilha[contexto][varContador].label + ";\n" + "\tint " + pilha[contexto][varBase].label+ ";\n" + "\tint " + pilha[contexto][varTeste].label + ";\n";
				adicional += "\t" + pilha[contexto][varContador].label + " = 0;\n" + "\t" + pilha[contexto][varBase].label + " = 0;\n" + "\t" + pilha[contexto][varTeste].label + " = 0;\n" + inicioWhile+":\n";
				adicional += "\t" + pilha[contexto][varBase].label + " = " + pilha[contexto][varContador].label + " + " + (yyvsp[(3) - (6)]).label + ";\n";
				adicional += "\t" + pilha[contexto][(yyval).label].label + "[" + pilha[contexto][varContador].label + "]" + " = " + pilha[i][(yyvsp[(1) - (6)]).label].label + "[" + pilha[contexto][varBase].label + "];\n";
				adicional += "\t" + pilha[contexto][varContador].label + " = " + pilha[contexto][varContador].label + " + " + "1;\n"; 
				adicional += "\t" + pilha[contexto][varTeste].label + " = " + pilha[contexto][varContador].label + " < " + tamanhoNovaString + ";\n";
				adicional += "\tif(" + pilha[contexto][varTeste].label + ") goto " + inicioWhile + ";\n";
				(yyval).traducao = (yyvsp[(3) - (6)]).traducao + (yyvsp[(5) - (6)]).traducao + adicional;		
			}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 711 "sintatica.y"
    {
				string adicional;
				int i = verificaDeclaracaoFuncao((yyvsp[(1) - (4)]).label);
				//verifica se a função existe
				if(i == -1)
					yyerror("FUNCAO NAO ENCONTRADA");

				//verifica se os parametros da funcao estão corretos
				verificaParametrosFuncao(i);
				if(listaFuncoes[i].tipo != "void"){
					(yyval).label = criaAtributo(listaFuncoes[i].tipo, "");
					adicional = "\t"+listaFuncoes[i].tipo + " " + (yyval).label + ";\n";
					adicional += "\t" + (yyval).label + " = " + (yyvsp[(1) - (4)]).label + "(" + (yyvsp[(3) - (4)]).traducao + ");\n";
				}
				else {
					adicional = "\t" + (yyvsp[(1) - (4)]).label + "(" + (yyvsp[(3) - (4)]).traducao + ");\n";
				}
				(yyval).traducao = (yyvsp[(3) - (4)]).label + adicional;
			}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 732 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (4)]).label);
				parametrosVar.push_back(pilha[i][(yyvsp[(2) - (4)]).label].traducao);
			}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 740 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);				
				returnVar.push_back(pilha[i][(yyvsp[(2) - (3)]).label].tipo);
				(yyval).label = criaAtributo(pilha[i][(yyvsp[(2) - (3)]).label].tipo, "");
				string adicional = "\t" + pilha[i][(yyvsp[(2) - (3)]).label].tipo + " " + (yyval).label + ";\n";
				adicional += "\t" + (yyval).label + " = " + (yyvsp[(2) - (3)]).label + ";\n";
				(yyval).traducao = (yyvsp[(2) - (3)]).traducao + adicional + "\treturn " + (yyval).label + ";\n";
			}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 749 "sintatica.y"
    {	
				(yyval).label = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).label;
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				parametrosVar.push_back(pilha[i][(yyvsp[(1) - (3)]).label].tipo);
				(yyval).traducao = pilha[i][(yyvsp[(1) - (3)]).label].label + ", " + (yyvsp[(3) - (3)]).traducao;
			}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 756 "sintatica.y"
    {
				(yyval).label =  (yyvsp[(1) - (1)]).traducao;
				int i = procuraVariavel((yyvsp[(1) - (1)]).label);
				parametrosVar.push_back(pilha[i][(yyvsp[(1) - (1)]).label].tipo);
				(yyval).traducao = pilha[i][(yyvsp[(1) - (1)]).label].label ;
			}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 764 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (4)]).label), i != -1){
					if(pilha[i][(yyvsp[(2) - (4)]).label].tipo[0] != 'v') {
						(yyval).label = pilha[i][(yyvsp[(2) - (4)]).label].label;
						(yyval).traducao = (yyvsp[(2) - (4)]).traducao + "\tcout << " + (yyval).label + ";\n" + (yyvsp[(3) - (4)]).traducao + "\tcout << endl;\n";
					}
					else {
						if(pilha[i][(yyvsp[(2) - (4)]).label].tamanho != "0") {
							string adicional = printVetor(i, (yyvsp[(2) - (4)]).label);
							(yyval).traducao = (yyvsp[(2) - (4)]).traducao + adicional + "\n" + (yyvsp[(3) - (4)]).traducao + "\tcout << endl;\n";
						}	
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 781 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (4)]).label), i != -1){
					if(pilha[i][(yyvsp[(2) - (4)]).label].tipo[0] != 'v'){
						(yyval).label = pilha[i][(yyvsp[(2) - (4)]).label].label;
						(yyval).traducao = (yyvsp[(2) - (4)]).traducao + "\tcout << " + (yyval).label + ";\n" + (yyvsp[(3) - (4)]).traducao;
					}
					else {
						if(pilha[i][(yyvsp[(2) - (4)]).label].tamanho != "0"){
							string adicional = printVetor(i, (yyvsp[(2) - (4)]).label);
							(yyval).traducao = (yyvsp[(2) - (4)]).traducao + adicional + "\n" + (yyvsp[(3) - (4)]).traducao;
						}	
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 798 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (4)]).label), i != -1){
					if(pilha[i][(yyvsp[(2) - (4)]).label].tipo != "string"){
						(yyval).label = pilha[i][(yyvsp[(2) - (4)]).label].label;
						(yyval).traducao = (yyvsp[(3) - (4)]).traducao + "\tcin >> " + (yyval).label + ";\n";
					}
					else {
						string novaLabel = criaAtributo("string","");
						Atributos atributo = pilha[i][(yyvsp[(2) - (4)]).label];		

						pilha[i][atributo.traducao].label = novaLabel;
						pilha[i][novaLabel] = atributo;
						pilha[i][novaLabel].label = novaLabel;	
						
						pilha[i][novaLabel].tamanho = "10000";
						pilha[i][atributo.traducao].tamanho = "10000";

						string adicional = "\tchar " + novaLabel + "[10000];\n";
						adicional += "\tcin >> " + novaLabel + ";\n";
						
						(yyval).traducao = (yyvsp[(3) - (4)]).traducao + adicional;
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 827 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);

				if(i != -1) {
					(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
					(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tcout << " + (yyval).label + ";\n" + (yyvsp[(3) - (3)]).traducao;
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 839 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);

				if(i != -1) {
					if(pilha[i][(yyvsp[(2) - (3)]).label].tipo != "string"){
						(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tcin >> " + (yyval).label + ";\n" + (yyvsp[(3) - (3)]).traducao;
					}
					else {
						string novaLabel = criaAtributo("string","");
						Atributos atributo = pilha[i][(yyvsp[(2) - (3)]).label];		

						pilha[i][atributo.traducao].label = novaLabel;
						pilha[i][novaLabel] = atributo;
						pilha[i][novaLabel].label = novaLabel;	
						
						pilha[i][novaLabel].tamanho = "10000";
						pilha[i][atributo.traducao].tamanho = "10000";

						string adicional = "\tchar " + novaLabel + "[10000];\n";
						adicional += "\tcin >> " + novaLabel + ";\n";
						
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + adicional + (yyvsp[(3) - (3)]).traducao;
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 870 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(3) - (5)]).label);
				string label = criaLabel();

				if (pilha[i][(yyvsp[(3) - (5)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[(3) - (5)]).label].label + ") goto " + label + ";\n";					
					(yyval).traducao = (yyvsp[(3) - (5)]).traducao + adicional + (yyvsp[(5) - (5)]).traducao + label +":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 883 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(3) - (6)]).label);
				string labelIf = criaLabel();
				string labelElse = criaLabel();

				if (pilha[i][(yyvsp[(3) - (6)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[(3) - (6)]).label].label + ") goto " + labelIf + ";\n";					
					(yyval).traducao = (yyvsp[(3) - (6)]).traducao + adicional + (yyvsp[(5) - (6)]).traducao + "\tgoto " + labelElse + ";\n" + labelIf + ":\n" + (yyvsp[(6) - (6)]).traducao + labelElse + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 899 "sintatica.y"
    {
				string fimIf = criaLabel();
				string fimIf2 = criaLabel();
				int i = procuraVariavel((yyvsp[(3) - (6)]).label);

				if (pilha[i][(yyvsp[(3) - (6)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[(3) - (6)]).label].label + ") goto " + fimIf + ";\n";					
					(yyval).traducao = (yyvsp[(3) - (6)]).traducao + adicional + (yyvsp[(5) - (6)]).traducao + "\tgoto " + fimIf2  + ";\n" +  fimIf + ":\n" + (yyvsp[(6) - (6)]).traducao + fimIf2 + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 913 "sintatica.y"
    {	
				(yyval).traducao =  (yyvsp[(2) - (2)]).traducao ;				
			}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 918 "sintatica.y"
    {
				string label = criaLabel();
				pilhaBreak.push_back(label);

				(yyval).traducao = "\tgoto " + label + ";\n";
			}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 925 "sintatica.y"
    {
				string label = criaLabel();
				pilhaContinue.push_back(label);
					
				(yyval).traducao = "\tgoto " + label + ";\n";
			}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 932 "sintatica.y"
    {
				string inicioFor = criaLabel();
				string fimFor = criaLabel();
				string labelContinue;

				if(pilhaBreak.size() > 0){					
					fimFor = pilhaBreak[pilhaBreak.size()-1];
					pilhaBreak.pop_back();
				}

				if(pilhaContinue.size() > 0) {					
					labelContinue = pilhaContinue[pilhaContinue.size()-1] + ":\n";
					pilhaContinue.pop_back();
				}

				int i = procuraVariavel((yyvsp[(3) - (8)]).label);
				int j = procuraVariavel((yyvsp[(6) - (8)]).label);	

				if (pilha[j][(yyvsp[(4) - (8)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[j][(yyvsp[(4) - (8)]).label].label + ") goto " + fimFor + ";\n";

					(yyval).traducao = (yyvsp[(3) - (8)]).traducao + inicioFor + ":\n" + (yyvsp[(4) - (8)]).traducao + adicional + (yyvsp[(8) - (8)]).traducao + labelContinue + (yyvsp[(6) - (8)]).traducao +"\tgoto "+ inicioFor + ";\n"+fimFor + ":\n";
				}
			}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 957 "sintatica.y"
    {
				
				int i = procuraVariavel((yyvsp[(3) - (5)]).label);			
				string inicioWhile = criaLabel();
				string fimWhile = criaLabel();	
				string labelContinue;

				if(pilhaBreak.size() > 0) {					
					fimWhile = pilhaBreak[pilhaBreak.size()-1];
					pilhaBreak.pop_back();
				}

				if(pilhaContinue.size() > 0) {					
					labelContinue = pilhaContinue[pilhaContinue.size()-1] + ":\n";
					pilhaContinue.pop_back();
				}

				if (pilha[i][(yyvsp[(3) - (5)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[(3) - (5)]).label].label + ") goto " + fimWhile + ";\n";
					string adicional2 = "\tif(" + pilha[i][(yyvsp[(3) - (5)]).label].label + ") goto " + inicioWhile + ";\n";					
					
					(yyval).traducao = inicioWhile + ":\n" + (yyvsp[(3) - (5)]).traducao + adicional + (yyvsp[(5) - (5)]).traducao + labelContinue + adicional2 + fimWhile + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 984 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(5) - (7)]).label);	
				string inicioWhile = criaLabel();
				string fimWhile = "";
				string labelContinue;

				if(pilhaBreak.size() > 0)
				{					
					fimWhile = pilhaBreak[pilhaBreak.size()-1];
					fimWhile = fimWhile + ":\n";
					pilhaBreak.pop_back();
				}

				if(pilhaContinue.size() > 0) {					
					labelContinue = pilhaContinue[pilhaContinue.size()-1] + ":\n";
					pilhaContinue.pop_back();
				}

				if (pilha[i][(yyvsp[(5) - (7)]).label].tipo == "bool")
				{
					string adicional = "\tif(" + pilha[i][(yyvsp[(5) - (7)]).label].label + ") goto " + inicioWhile + ";\n"+fimWhile;
					(yyval).traducao = inicioWhile + ":\n" + (yyvsp[(2) - (7)]).traducao + (yyvsp[(5) - (7)]).traducao + labelContinue + adicional;
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
    break;



/* Line 1806 of yacc.c  */
#line 2939 "y.tab.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 1012 "sintatica.y"


#include "lex.yy.c"

int yyparse();

int main( int argc, char* argv[] )
{
	contexto++;
	map<string, Atributos> tabela;
	pilha.push_back(tabela);
	
	yyparse();	
	
	contexto--;
	pilha.pop_back();	
	return 0;
}



