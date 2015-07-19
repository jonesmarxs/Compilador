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
     TK_FUNC = 263,
     TK_RETURN = 264,
     TK_VOID = 265,
     TK_MAIN = 266,
     TK_ID = 267,
     TK_TIPO = 268,
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
#define TK_FUNC 263
#define TK_RETURN 264
#define TK_VOID 265
#define TK_MAIN 266
#define TK_ID 267
#define TK_TIPO 268
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  162

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
      45,    46,    42,    40,    53,    41,    52,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    49,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,    10,    11,    16,    18,    21,    24,
      27,    30,    33,    36,    39,    40,    44,    51,    57,    62,
      70,    74,    78,    82,    86,    89,    93,    95,    97,    99,
     101,   103,   105,   110,   113,   116,   122,   130,   134,   136,
     137,   142,   147,   151,   155,   160,   164,   167,   168,   172,
     175,   176,   182,   189,   196,   199,   202,   205,   214,   220,
     228
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    11,    45,    46,    58,    -1,
      -1,    59,    47,    60,    48,    -1,    65,    -1,    63,    60,
      -1,    61,    60,    -1,    62,    60,    -1,    65,    60,    -1,
      68,    60,    -1,    70,    60,    -1,    71,    60,    -1,    -1,
      13,    12,    49,    -1,    13,    12,    50,    63,    51,    49,
      -1,    13,    12,    44,    63,    49,    -1,    12,    44,    63,
      49,    -1,    12,    50,    63,    51,    44,    63,    49,    -1,
      63,    52,    63,    -1,    63,    25,    63,    -1,    63,    26,
      63,    -1,    63,    27,    63,    -1,    39,    63,    -1,    45,
      63,    46,    -1,     3,    -1,     4,    -1,     6,    -1,     7,
      -1,    12,    -1,     5,    -1,    12,    50,    63,    51,    -1,
      12,    28,    -1,    28,    12,    -1,    12,    45,    64,    46,
      49,    -1,    12,    44,    12,    45,    64,    46,    49,    -1,
      63,    53,    64,    -1,    63,    -1,    -1,    17,    63,    66,
      49,    -1,    16,    63,    66,    49,    -1,    17,    71,    49,
      -1,    16,    71,    49,    -1,    18,    12,    67,    49,    -1,
      53,    63,    66,    -1,    53,    63,    -1,    -1,    53,    12,
      67,    -1,    53,    12,    -1,    -1,    19,    45,    63,    46,
      58,    -1,    19,    45,    63,    46,    58,    69,    -1,    24,
      45,    63,    46,    58,    69,    -1,    20,    58,    -1,    29,
      49,    -1,    30,    49,    -1,    22,    45,    62,    63,    49,
      63,    46,    58,    -1,    21,    45,    63,    46,    58,    -1,
      23,    58,    21,    45,    63,    46,    49,    -1,    12,    50,
      63,    54,    63,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    24,    24,    34,    39,    39,    52,    55,    58,    61,
      64,    67,    70,    73,    76,    79,    98,   113,   149,   165,
     184,   210,   228,   245,   262,   277,   282,   287,   292,   298,
     304,   313,   320,   346,   356,   366,   379,   399,   405,   412,
     414,   431,   448,   463,   479,   490,   500,   510,   512,   522,
     532,   535,   548,   564,   577,   582,   589,   596,   622,   649,
     677
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM_INT", "TK_NUM_FLOAT",
  "TK_TRUE_FALSE", "TK_CHAR", "TK_STRING", "TK_FUNC", "TK_RETURN",
  "TK_VOID", "TK_MAIN", "TK_ID", "TK_TIPO", "TK_FIM", "TK_ERROR",
  "TK_PRINT", "TK_PRINT_LN", "TK_READ", "TK_IF", "TK_ELSE", "TK_WHILE",
  "TK_FOR", "TK_DO", "TK_ELSEIF", "TK_ARITMETICOS", "TK_RELACIONAIS",
  "TK_AND_OR", "TK_INCREMENTO", "TK_BREAK", "TK_CONTINUE", "TK_MAIOR",
  "TK_MENOR", "TK_MAIORIGUAL", "TK_MENORIGUAL", "TK_IGUAL", "TK_DIFERENTE",
  "TK_AND", "TK_OR", "TK_NEGADO", "'+'", "'-'", "'*'", "'/'", "'='", "'('",
  "')'", "'{'", "'}'", "';'", "'['", "']'", "'.'", "','", "':'", "$accept",
  "S", "MAIN", "BLOCO", "$@1", "COMANDOS", "DECLARACAO", "ATRIBUICAO", "E",
  "PARAMETRO", "IO", "PRINT_MULT", "READ_MULT", "CONDICIONAL", "ELSE",
  "LOOP", "SLICE", 0
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
      43,    45,    42,    47,    61,    40,    41,   123,   125,    59,
      91,    93,    46,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    59,    58,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     0,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     0,     3,     6,     5,     4,     7,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     4,     2,     2,     5,     7,     3,     1,     0,
       4,     4,     3,     3,     4,     3,     2,     0,     3,     2,
       0,     5,     6,     6,     2,     2,     2,     8,     5,     7,
       6
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     4,     3,     0,    14,
      26,    27,    31,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
      14,    14,    14,     6,    14,    14,    14,    33,     0,    39,
       0,     0,    30,    47,     0,    47,     0,    50,     0,     0,
       0,     0,    34,    55,    56,    30,    24,     0,     5,     8,
       9,     0,     0,     0,     0,     7,    10,    11,    12,    13,
      30,     0,    38,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    43,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    21,    22,    23,    20,    39,
      18,    39,     0,    32,     0,     0,     0,     0,     0,    46,
      41,    40,    49,    44,     4,     4,     0,     0,     0,     0,
       0,     0,     0,    37,    35,     0,     0,    17,     0,    39,
      32,    45,    48,    51,    58,     0,     0,     0,     0,     0,
      60,    16,     0,     4,     0,    52,     0,     0,     0,    36,
      19,     0,    54,     0,     4,    59,    36,     0,    57,     4,
       0,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    29,    30,    31,    32,    73,
      33,    81,    86,    34,   145,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
      -6,   -25,    25,   -96,   -11,   -96,   -96,   -96,   -14,   173,
     -96,   -96,   -96,   -96,   -96,    36,    42,    12,    12,    49,
      21,    26,    28,   -96,    71,    62,    69,    85,    85,    73,
     173,   173,   136,   173,   173,   173,   173,   -96,   201,    85,
      85,    -7,    57,    43,    74,    43,    78,    75,    85,    85,
      -5,   108,   -96,   -96,   -96,    70,   268,   147,   -96,   -96,
     -96,    85,    85,    85,    85,   -96,   -96,   -96,   -96,   -96,
      81,    23,    52,    88,   -13,    85,   -96,    85,   120,    85,
      85,    98,   -96,   101,   -96,   123,   102,   184,   189,    15,
     125,    85,   111,    85,   -96,   268,   -16,     4,   268,    85,
     -96,    85,   118,   116,    85,   119,   196,   124,     1,    43,
     -96,   -96,    75,   -96,   -96,   -96,    85,    85,   126,   200,
      85,   206,   137,   -96,   -96,    85,   212,   -96,   133,    85,
     -96,   -96,   -96,    86,   -96,   217,    85,   228,   135,   234,
     -96,   -96,   141,   -96,   152,   -96,   116,   245,   149,   240,
     -96,   151,   -96,    85,   -96,   -96,   -96,   250,   -96,   -96,
      86,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -21,   -96,   273,   -96,   167,   -17,   -95,
     -96,   -42,   107,   -96,    60,   -96,    99
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int16 yytable[] =
{
      43,    45,    51,    83,   122,     1,   123,    89,    90,    61,
      56,    57,    61,    62,    63,    10,    11,    12,    13,    14,
       4,    71,    72,    74,    42,     5,    61,    62,    63,    61,
      62,    87,    88,     9,   142,     6,    64,    75,   103,    64,
      24,   104,    76,    77,    95,    96,    97,    98,    61,    62,
      63,    27,   130,    64,    41,   104,    64,    28,   105,   116,
     106,    47,   108,   109,    37,   117,    48,   131,    61,    62,
      63,    49,   100,    50,   119,    64,   121,    61,    62,    63,
      38,    39,    72,    52,    72,    37,    40,   126,    10,    11,
      12,    13,    14,   133,   134,    64,    80,    55,    37,    71,
     135,    78,    39,   137,    64,   101,   143,    79,   139,    37,
     144,    53,    72,    24,    78,    39,    44,    46,    54,   147,
      93,    58,   152,    82,    27,    78,    99,    84,    85,    92,
      28,    93,   107,   158,   102,   112,   157,   118,   160,    10,
      11,    12,    13,    14,    61,    62,    63,   110,    15,    16,
     111,   113,    17,    18,    19,    20,   120,    21,    22,    23,
     125,    61,    62,    63,    24,    25,    26,   124,   127,   129,
      75,    64,    61,    62,    63,    27,    10,    11,    12,    13,
      14,    28,   141,   138,   149,    15,    16,   151,    64,    17,
      18,    19,    20,    94,    21,    22,    23,   153,   155,    64,
     156,    24,    25,    26,    10,    11,    12,    13,    14,    61,
      62,    63,    27,    70,    61,    62,    63,    91,    28,   132,
     161,    61,    62,    63,     0,    61,    62,    63,     0,    24,
     114,    61,    62,    63,     0,   115,    64,    61,    62,    63,
      27,    64,    61,    62,    63,     0,    28,   128,    64,   136,
       0,     0,    64,    61,    62,    63,     0,   130,    64,    61,
      62,    63,     0,   140,    64,   -35,   -35,   -35,   146,    64,
      61,    62,    63,     0,   148,    61,    62,    63,     0,     0,
      64,     0,     0,   150,     0,     0,    64,     0,     0,   -35,
       0,   154,   -35,    61,    62,    63,   159,    64,     0,     0,
       0,     0,    64,    59,    60,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-96))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    23,    45,    99,    11,   101,    12,    13,    25,
      27,    28,    25,    26,    27,     3,     4,     5,     6,     7,
      45,    38,    39,    40,    12,     0,    25,    26,    27,    25,
      26,    48,    49,    47,   129,    46,    52,    44,    51,    52,
      28,    54,    49,    50,    61,    62,    63,    64,    25,    26,
      27,    39,    51,    52,    12,    54,    52,    45,    75,    44,
      77,    12,    79,    80,    28,    50,    45,   109,    25,    26,
      27,    45,    49,    45,    91,    52,    93,    25,    26,    27,
      44,    45,    99,    12,   101,    28,    50,   104,     3,     4,
       5,     6,     7,   114,   115,    52,    53,    12,    28,   116,
     117,    44,    45,   120,    52,    53,    20,    50,   125,    28,
      24,    49,   129,    28,    44,    45,    17,    18,    49,   136,
      50,    48,   143,    49,    39,    44,    45,    49,    53,    21,
      45,    50,    12,   154,    46,    12,   153,    12,   159,     3,
       4,     5,     6,     7,    25,    26,    27,    49,    12,    13,
      49,    49,    16,    17,    18,    19,    45,    21,    22,    23,
      44,    25,    26,    27,    28,    29,    30,    49,    49,    45,
      44,    52,    25,    26,    27,    39,     3,     4,     5,     6,
       7,    45,    49,    46,    49,    12,    13,    46,    52,    16,
      17,    18,    19,    46,    21,    22,    23,    45,    49,    52,
      49,    28,    29,    30,     3,     4,     5,     6,     7,    25,
      26,    27,    39,    12,    25,    26,    27,    50,    45,   112,
     160,    25,    26,    27,    -1,    25,    26,    27,    -1,    28,
      46,    25,    26,    27,    -1,    46,    52,    25,    26,    27,
      39,    52,    25,    26,    27,    -1,    45,    51,    52,    49,
      -1,    -1,    52,    25,    26,    27,    -1,    51,    52,    25,
      26,    27,    -1,    51,    52,    25,    26,    27,    51,    52,
      25,    26,    27,    -1,    46,    25,    26,    27,    -1,    -1,
      52,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    49,
      -1,    46,    52,    25,    26,    27,    46,    52,    -1,    -1,
      -1,    -1,    52,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    56,    57,    45,     0,    46,    58,    59,    47,
       3,     4,     5,     6,     7,    12,    13,    16,    17,    18,
      19,    21,    22,    23,    28,    29,    30,    39,    45,    60,
      61,    62,    63,    65,    68,    70,    71,    28,    44,    45,
      50,    12,    12,    63,    71,    63,    71,    12,    45,    45,
      45,    58,    12,    49,    49,    12,    63,    63,    48,    60,
      60,    25,    26,    27,    52,    60,    60,    60,    60,    60,
      12,    63,    63,    64,    63,    44,    49,    50,    44,    50,
      53,    66,    49,    66,    49,    53,    67,    63,    63,    12,
      13,    62,    21,    50,    46,    63,    63,    63,    63,    45,
      49,    53,    46,    51,    54,    63,    63,    12,    63,    63,
      49,    49,    12,    49,    46,    46,    44,    50,    12,    63,
      45,    63,    64,    64,    49,    44,    63,    49,    51,    45,
      51,    66,    67,    58,    58,    63,    49,    63,    46,    63,
      51,    49,    64,    20,    24,    69,    51,    63,    46,    49,
      49,    46,    58,    45,    46,    49,    49,    63,    58,    46,
      58,    69
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
				cout << "using namespace std;\n\n";
				cout << "int main(void)\n{\n" ;
				cout << (yyvsp[(1) - (1)]).traducao + "\treturn 0;\n}";
			}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 34 "sintatica.y"
    {				
				(yyval).traducao = (yyvsp[(4) - (4)]).traducao; 
			}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 39 "sintatica.y"
    {	contexto++;
				map<string, Atributos> tabela;
				pilha.push_back(tabela);
			}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 43 "sintatica.y"
    {

				(yyval).traducao = (yyvsp[(3) - (4)]).traducao;
			
				contexto--;
				pilha.pop_back();
			}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 52 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (1)]).traducao;
			}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 55 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 58 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 61 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;	
			}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 64 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 67 "sintatica.y"
    {
				 (yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 70 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 73 "sintatica.y"
    {
				(yyval).traducao = (yyvsp[(1) - (2)]).traducao + (yyvsp[(2) - (2)]).traducao;
			}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 79 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (3)]).label);
				if(i != contexto){
					if((yyvsp[(1) - (3)]).label == "string") {
						(yyval).label = criaAtributo("string", (yyvsp[(2) - (3)]).label);
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tchar " + (yyval).label + "[0];\n";
					}
					else {
						(yyval).label = criaAtributo((yyvsp[(1) - (3)]).label, (yyvsp[(2) - (3)]).label);
						string tipo = (yyvsp[(1) - (3)]).label == "bool" ? "int" : (yyvsp[(1) - (3)]).label;
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\t"+ tipo + " " +(yyval).label + ";\n";
					}
				}
				else
					yyerror("\nVariavel \""+(yyvsp[(2) - (3)]).label+"\" já foi declarada");

			}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 98 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(2) - (6)]).label);
				int j = procuraVariavel((yyvsp[(4) - (6)]).label);

				if(i != contexto){
					(yyval).label = criaAtributo("vetor_"+(yyvsp[(1) - (6)]).label, (yyvsp[(2) - (6)]).label);
					pilha[contexto][(yyval).label].tamanho = pilha[j][(yyvsp[(4) - (6)]).label].label;
					string tipo = (yyvsp[(1) - (6)]).label == "bool" ? "int" : (yyvsp[(1) - (6)]).label;
					(yyval).traducao = (yyvsp[(2) - (6)]).traducao + (yyvsp[(4) - (6)]).traducao + "\t" + tipo + " " + (yyval).label + "[" + pilha[j][(yyvsp[(4) - (6)]).label].label + "]" + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[(2) - (6)]).label+"\" já foi declarada");
			}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 113 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(2) - (5)]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[(1) - (5)]).label, (yyvsp[(2) - (5)]).label);
					int j = procuraVariavel((yyvsp[(4) - (5)]).label);
					
					if((yyvsp[(1) - (5)]).label == "bool"){
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo != "bool")
							yyerror("\nTIPOS INCOMPATIVEIS");
						else
							adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[(1) - (5)]).label, pilha[j][(yyvsp[(4) - (5)]).label].tipo) + (yyvsp[(4) - (5)]).label + ";\n";
					}
					else if((yyvsp[(1) - (5)]).label == "string"){
						i = procuraVariavel((yyval).label);
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo != "string")
							yyerror("\nTIPOS INCOMPATIVEIS");
						else {
							adicional = "\tchar "  + (yyval).label + "[" + pilha[j][(yyvsp[(4) - (5)]).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[(4) - (5)]).label + ");\n";						
							pilha[j][(yyvsp[(2) - (5)]).label].tamanho = pilha[j][(yyvsp[(4) - (5)]).label].tamanho;
							pilha[i][(yyval).label].tamanho = pilha[j][(yyvsp[(4) - (5)]).label].tamanho;
						}
					}
					else {
						if(pilha[j][(yyvsp[(4) - (5)]).label].tipo == "bool" || pilha[j][(yyvsp[(4) - (5)]).label].tipo == "string")
							yyerror("\nTIPOS INCOMPATIVEIS");
						else
							adicional = "\t" + (yyvsp[(1) - (5)]).label + " " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[(1) - (5)]).label, pilha[j][(yyvsp[(4) - (5)]).label].tipo) + (yyvsp[(4) - (5)]).label + ";\n";
					}
				}
				else
					yyerror("\nVariavel \""+(yyvsp[(2) - (5)]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[(2) - (5)]).traducao + (yyvsp[(4) - (5)]).traducao + adicional;
			}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 149 "sintatica.y"
    {

				string adicional;
				int i;
				if(i = procuraVariavel((yyvsp[(1) - (4)]).label), i != -1){
					if((pilha[i][(yyvsp[(1) - (4)]).label].tipo != "bool" && pilha[i][(yyvsp[(3) - (4)]).label].tipo == "bool") || (pilha[i][(yyvsp[(1) - (4)]).label].tipo == "bool" && pilha[i][(yyvsp[(3) - (4)]).label].tipo != "bool")){
						yyerror("\nTIPOS INCOMPATIVEIS");						
					}
					
					adicional = "\t" + pilha[i][(yyvsp[(1) - (4)]).label].label + " = " + verificaCastAtribuicao(pilha[i][(yyvsp[(1) - (4)]).label].tipo, pilha[i][(yyvsp[(3) - (4)]).label].tipo) + (yyvsp[(3) - (4)]).label + ";\n";			
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[(1) - (4)]).traducao + (yyvsp[(3) - (4)]).traducao + adicional;
			}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 165 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(1) - (7)]).label);
				int j = procuraVariavel((yyvsp[(6) - (7)]).label);	
				
				if(pilha[i][(yyvsp[(1) - (7)]).label].tipo[0] == 'v' || pilha[i][(yyvsp[(1) - (7)]).label].tipo[0] == 's'){
					if(i != -1){
						if((pilha[i][(yyvsp[(1) - (7)]).label].tipo != "bool" && pilha[i][(yyvsp[(6) - (7)]).label].tipo == "bool") || (pilha[i][(yyvsp[(1) - (7)]).label].tipo == "bool" && pilha[i][(yyvsp[(6) - (7)]).label].tipo != "bool")) {
							yyerror("\nTIPOS INCOMPATIVEIS");						
						}
						adicional = "\t" + pilha[i][(yyvsp[(1) - (7)]).label].label + "[" + (yyvsp[(3) - (7)]).label + "] = " + pilha[j][(yyvsp[(6) - (7)]).label].label + ";\n";		
					}
					else
						yyerror("\nVARIAVEL NAO DECLARADA");
				}
				(yyval).traducao = (yyvsp[(1) - (7)]).traducao + (yyvsp[(3) - (7)]).traducao + (yyvsp[(6) - (7)]).traducao + adicional;
			}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 184 "sintatica.y"
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
					yyerror("\nOPERACAO INVALIDA");

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;
			
			}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 210 "sintatica.y"
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("aritmeticos",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " "+(yyvsp[(2) - (3)]).label+" ", (yyval).label, (yyvsp[(1) - (3)]).label, (yyvsp[(3) - (3)]).label);
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;

			}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 228 "sintatica.y"
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " "+(yyvsp[(2) - (3)]).label+" ", (yyval).label, (yyvsp[(1) - (3)]).label, (yyvsp[(3) - (3)]).label);
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;				
			}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 245 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				int j = procuraVariavel((yyvsp[(3) - (3)]).label);
				string resultado = verificaCompatibilidadeVariaveis("AND_OR",pilha[i][(yyvsp[(1) - (3)]).label].tipo,pilha[j][(yyvsp[(3) - (3)]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = "\tint " + (yyval).label + " = " + (yyvsp[(1) - (3)]).label + " && " + (yyvsp[(3) - (3)]).label + ";\n";
				}

				(yyval).traducao = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).traducao + adicional;
			}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 262 "sintatica.y"
    {

				string adicional;
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);
				string resultado = verificaCompatibilidadeVariaveis("!",pilha[contexto][(yyvsp[(2) - (2)]).label].tipo,"");
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					string adicional = "\tint " + (yyval).label + " = !" + (yyvsp[(2) - (2)]).label + ";\n";
					(yyval).traducao = (yyvsp[(2) - (2)]).traducao + adicional;
				}
					
			}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 277 "sintatica.y"
    {

				(yyval).label = (yyvsp[(2) - (3)]).label;
				(yyval).traducao = (yyvsp[(2) - (3)]).traducao;
			}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 282 "sintatica.y"
    {

				(yyval).label = criaAtributo("int", (yyvsp[(1) - (1)]).label);
				(yyval).traducao = "\tint " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
			}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 287 "sintatica.y"
    {

				(yyval).label = criaAtributo("float", (yyvsp[(1) - (1)]).label);
				(yyval).traducao = "\tfloat " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
			}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 292 "sintatica.y"
    {
				
				(yyval).label = criaAtributo("char", (yyvsp[(1) - (1)]).label);				
				(yyval).traducao = "\tchar " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[(1) - (1)]).label + ";\n";
				
			}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 298 "sintatica.y"
    {

				(yyval).label = criaAtributo("string", (yyvsp[(1) - (1)]).label);				
				(yyval).traducao = "\tchar " + (yyval).label + "[" + pilha[contexto][(yyval).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[(1) - (1)]).label + ");\n";

			}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 304 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(1) - (1)]).label), i != -1)
					(yyval).label = pilha[i][(yyvsp[(1) - (1)]).label].label;					
				
				else 
					yyerror("\nVARIAVEL NAO DECLARADA");

			}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 313 "sintatica.y"
    {
				(yyval).label = criaAtributo("bool", (yyvsp[(1) - (1)]).label);
				if((yyvsp[(1) - (1)]).label == "true")
					(yyval).traducao = "\tint " + (yyval).label + " = " + "1" + ";\n";
				else
					(yyval).traducao = "\tint " + (yyval).label + " = " + "0" + ";\n";
			}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 320 "sintatica.y"
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
						yyerror("ERRO: OPERACAO INVALIDA");			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[(3) - (4)]).traducao + adicional;
			}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 346 "sintatica.y"
    {	
				int i = procuraVariavel((yyvsp[(1) - (2)]).label);	
				string adicional;
				if(i != -1){
					(yyval).label = pilha[i][(yyvsp[(1) - (2)]).label].label;
					(yyval).traducao = "\t" + pilha[i][(yyvsp[(1) - (2)]).label].label + " = " + pilha[i][(yyvsp[(1) - (2)]).label].label + " " + (yyvsp[(2) - (2)]).label[0] +" 1;\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 356 "sintatica.y"
    {		
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);		
				string adicional;
				if(i != -1){
					(yyval).label = pilha[i][(yyvsp[(1) - (2)]).label].label;
					(yyval).traducao = "\t" + pilha[i][(yyvsp[(2) - (2)]).label].label + " = " + pilha[i][(yyvsp[(2) - (2)]).label].label + " " + (yyvsp[(1) - (2)]).label[0] +" 1;\n";
				}	
				else
					yyerror("\nVARIAVEL NAO DECLARADA");		
			}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 366 "sintatica.y"
    {
				int i = verificaDeclaracaoFuncao((yyvsp[(1) - (5)]).label);
				string aux = "\t" + (yyvsp[(1) - (5)]).label + "(" + (yyvsp[(3) - (5)]).traducao + ");\n";

				//verifica se a função existe
				if(i == -1)
					yyerror("ERRO: FUNCAO NAO ENCONTRADA\n");

				//verifica se os parametros da funcao estão corretos
				verificaParametrosFuncao(i);
				
				(yyval).traducao = (yyvsp[(3) - (5)]).label + aux;
			}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 379 "sintatica.y"
    {
				bool possuiFuncao = false;
				int i = verificaDeclaracaoFuncao((yyvsp[(1) - (7)]).label);
				int localVar = procuraVariavel((yyvsp[(1) - (7)]).label);
	
				if(listaFuncoes[i].tipo == "void")
					yyerror("ERRO: FUNCAO VOID NAO RETORNA\n");

				//verifica se a função existe
				if(i == -1)
					yyerror("ERRO: FUNCAO NAO ENCONTRADA\n");

				if(listaFuncoes[i].tipo != pilha[localVar][(yyvsp[(1) - (7)]).label].tipo)
					yyerror("ERRO: RETORNO DIFERENTE\n");

				verificaParametrosFuncao(i);

				(yyval).traducao = (yyvsp[(5) - (7)]).label + "\t" + pilha[localVar][(yyvsp[(1) - (7)]).label].label+ " = " +(yyvsp[(3) - (7)]).label + "(" + (yyvsp[(5) - (7)]).traducao + ");\n";				
			}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 399 "sintatica.y"
    {	
				(yyval).label = (yyvsp[(1) - (3)]).traducao + (yyvsp[(3) - (3)]).label;
				int i = procuraVariavel((yyvsp[(1) - (3)]).label);
				parametrosVar.push_back(pilha[i][(yyvsp[(1) - (3)]).label].tipo);
				(yyval).traducao = pilha[i][(yyvsp[(1) - (3)]).label].label + ", " + (yyvsp[(3) - (3)]).traducao;
			}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 406 "sintatica.y"
    {
				(yyval).label =  (yyvsp[(1) - (1)]).traducao;
				int i = procuraVariavel((yyvsp[(1) - (1)]).label);
				parametrosVar.push_back(pilha[i][(yyvsp[(1) - (1)]).label].tipo);
				(yyval).traducao = pilha[i][(yyvsp[(1) - (1)]).label].label ;
			}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 414 "sintatica.y"
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
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 431 "sintatica.y"
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
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 448 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (3)]).label), i != -1){
					if(pilha[i][(yyvsp[(2) - (3)]).label].tamanho != "0" && pilha[i][(yyvsp[(2) - (3)]).label].tipo[0] == 'v'){
					  string adicional = printVetor(i, (yyvsp[(2) - (3)]).label);
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + adicional + "cout << endl;";
					}
					else {
						(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tcout << " + (yyval).label + "<< endl;";
					}
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 463 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (3)]).label), i != -1){
					if(pilha[i][(yyvsp[(2) - (3)]).label].tamanho != "0" && pilha[i][(yyvsp[(2) - (3)]).label].tipo[0] == 'v'){
					  string adicional = printVetor(i, (yyvsp[(2) - (3)]).label);
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + adicional;
					}
					else {
						(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
						(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tcout << " + (yyval).label + ";";
					}
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 479 "sintatica.y"
    {
				int i;
				if(i = procuraVariavel((yyvsp[(2) - (4)]).label), i != -1){
					(yyval).label = pilha[i][(yyvsp[(2) - (4)]).label].label;
					(yyval).traducao = "\tcin >> " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 490 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);

				if(i != -1) {
					(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
					(yyval).traducao = (yyvsp[(2) - (3)]).traducao + "\tcout << " + (yyval).label + ";\n" + (yyvsp[(3) - (3)]).traducao;
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA\n");
			}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 500 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);

				if(i != -1) {
					(yyval).label = pilha[i][(yyvsp[(2) - (2)]).label].label;
					(yyval).traducao = (yyvsp[(2) - (2)]).traducao + "\tcout << " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA\n");
			}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 512 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (3)]).label);

				if(i != -1) {
					(yyval).label = pilha[i][(yyvsp[(2) - (3)]).label].label;
					(yyval).traducao = " >> " + (yyval).label + (yyvsp[(3) - (3)]).traducao;
				}
				else
					yyerror("\nERRO: VARIAVEL NAO DECLARADA\n");
			}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 522 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(2) - (2)]).label);

				if(i != -1) {
					(yyval).label = pilha[i][(yyvsp[(2) - (2)]).label].label;
					(yyval).traducao = " >> " + (yyval).label;
				}
				else
					yyerror("\nERRO: VARIAVEL NAO DECLARADA\n");
			}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 535 "sintatica.y"
    {

				int i = procuraVariavel((yyvsp[(3) - (5)]).label);
				string label = criaLabel();

				if (pilha[i][(yyvsp[(3) - (5)]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[(3) - (5)]).label].label + ") goto " + label + ";\n";					
					(yyval).traducao = (yyvsp[(3) - (5)]).traducao + adicional + (yyvsp[(5) - (5)]).traducao + label +":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 548 "sintatica.y"
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
					yyerror("ERRO: OPERACAO INVALIDA");
			}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 564 "sintatica.y"
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
					yyerror("ERRO: OPERACAO INVALIDA");
			}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 578 "sintatica.y"
    {	
				(yyval).traducao =  (yyvsp[(2) - (2)]).traducao ;				
			}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 583 "sintatica.y"
    {
				string label = criaLabel();
				pilhaBreak.push_back(label);

				(yyval).traducao = "\tgoto " + label + ";\n";
			}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 590 "sintatica.y"
    {
				string label = criaLabel();
				pilhaContinue.push_back(label);
					
				(yyval).traducao = "\tgoto " + label + ";\n";
			}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 597 "sintatica.y"
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

  case 58:

/* Line 1806 of yacc.c  */
#line 622 "sintatica.y"
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
					yyerror("ERRO: OPERACAO INVALIDA");
			}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 649 "sintatica.y"
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
					yyerror("ERRO: OPERACAO INVALIDA");
			}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 678 "sintatica.y"
    {
				int i = procuraVariavel((yyvsp[(1) - (6)]).label);	

				if(pilha[i][(yyvsp[(1) - (6)]).label].tipo == "string" && pilha[i][(yyvsp[(1) - (6)]).label].tamanho != "0")
				{
					(yyval).label = criaAtributo("string","");
					int j = procuraVariavel((yyvsp[(5) - (6)]).label);
					int tam1 = atoi(pilha[j][(yyvsp[(5) - (6)]).label].traducao.c_str());
					j = procuraVariavel((yyvsp[(3) - (6)]).label);
					int tam2 = atoi(pilha[j][(yyvsp[(3) - (6)]).label].traducao.c_str());

					int tamanho = tam1 - tam2 + 1;
					stringstream tamanhoS;   
				    tamanhoS << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = tamanhoS.str();

				    pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

				    string adicional = "\tchar " + (yyval).label + "[" + tamanhoNovaString + "];\n\t" + (yyval).label + "[" + tamanhoNovaString + "] = \'\\0\';\n"; 

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
				else if(pilha[i][(yyvsp[(1) - (6)]).label].tamanho != "0"){
					(yyval).label = criaAtributo(pilha[i][(yyvsp[(1) - (6)]).label].tipo,"");

					int j = procuraVariavel((yyvsp[(5) - (6)]).label);
					int tam1 = atoi(pilha[j][(yyvsp[(5) - (6)]).label].traducao.c_str());
					j = procuraVariavel((yyvsp[(3) - (6)]).label);
					int tam2 = atoi(pilha[j][(yyvsp[(3) - (6)]).label].traducao.c_str());

					int tamanho = tam1 - tam2 + 1;

					stringstream tamanhoS;   
				    tamanhoS << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = tamanhoS.str();

				    pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

				    string tipo = pilha[i][(yyvsp[(1) - (6)]).label].tipo == "vetor_float" ? "float" : "int";
				    string adicional = "\t"+ tipo + " " + (yyval).label + "[" + tamanhoNovaString + "];\n"; 

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
				else
					yyerror("ERRO: OPERACAO INVALIDA");			
			}
    break;



/* Line 1806 of yacc.c  */
#line 2615 "y.tab.c"
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
#line 755 "sintatica.y"


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



