/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatica.y" /* yacc.c:339  */

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include "tabelaDeCompatibilidade.hpp"

#define YYSTYPE atributos

using namespace std;

typedef struct atributos
{
	string label;
	string traducao;
	string tipo;
	string tamanho;
} Atributos;

vector<map <string, Atributos> > pilha;
vector<string> pilhaBreak;

int contexto = -1;

int yylex(void);
void yyerror(string);
string criaVariavel();
string verificaCompatibilidadeVariaveis(string operador, string operandoA, string operandoB);
string criaAtributo(string tipo, string traducao);
string verificaCastAtribuicao(string tipo1, string tipo2);
string formaExpressao(string operando, string resultado, string label, string label1, string label2);
int procuraVariavel(string variavel);
string criaLabel();


#line 103 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_NUM_INT = 258,
    TK_NUM_FLOAT = 259,
    TK_TRUE = 260,
    TK_FALSE = 261,
    TK_CHAR = 262,
    TK_STRING = 263,
    TK_MAIN = 264,
    TK_ID = 265,
    TK_TIPO_INT = 266,
    TK_TIPO_FLOAT = 267,
    TK_TIPO_BOOL = 268,
    TK_TIPO_CHAR = 269,
    TK_TIPO_STRING = 270,
    TK_FIM = 271,
    TK_ERROR = 272,
    TK_PRINT = 273,
    TK_READ = 274,
    TK_IF = 275,
    TK_ELSE = 276,
    TK_WHILE = 277,
    TK_DO = 278,
    TK_ARITMETICOS = 279,
    TK_RELACIONAIS = 280,
    TK_ANDOR = 281,
    TK_INDECREMENTO = 282,
    TK_BREAK = 283,
    TK_MAIOR = 284,
    TK_MENOR = 285,
    TK_MAIORIGUAL = 286,
    TK_MENORIGUAL = 287,
    TK_IGUAL = 288,
    TK_DIFERENTE = 289,
    TK_AND = 290,
    TK_OR = 291,
    TK_NEGADO = 292
  };
#endif
/* Tokens.  */
#define TK_NUM_INT 258
#define TK_NUM_FLOAT 259
#define TK_TRUE 260
#define TK_FALSE 261
#define TK_CHAR 262
#define TK_STRING 263
#define TK_MAIN 264
#define TK_ID 265
#define TK_TIPO_INT 266
#define TK_TIPO_FLOAT 267
#define TK_TIPO_BOOL 268
#define TK_TIPO_CHAR 269
#define TK_TIPO_STRING 270
#define TK_FIM 271
#define TK_ERROR 272
#define TK_PRINT 273
#define TK_READ 274
#define TK_IF 275
#define TK_ELSE 276
#define TK_WHILE 277
#define TK_DO 278
#define TK_ARITMETICOS 279
#define TK_RELACIONAIS 280
#define TK_ANDOR 281
#define TK_INDECREMENTO 282
#define TK_BREAK 283
#define TK_MAIOR 284
#define TK_MENOR 285
#define TK_MAIORIGUAL 286
#define TK_MENORIGUAL 287
#define TK_IGUAL 288
#define TK_DIFERENTE 289
#define TK_AND 290
#define TK_OR 291
#define TK_NEGADO 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,    40,    38,     2,    39,    48,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    47,
       2,    42,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    65,    65,    77,    82,    87,    98,   109,
     120,   130,   140,   157,   174,   191,   214,   231,   247,   273,
     291,   308,   325,   340,   345,   350,   355,   366,   372,   381,
     386,   391,   400,   410,   423,   436,   443,   465,   486,   525,
     567,   577,   587,   597
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM_INT", "TK_NUM_FLOAT", "TK_TRUE",
  "TK_FALSE", "TK_CHAR", "TK_STRING", "TK_MAIN", "TK_ID", "TK_TIPO_INT",
  "TK_TIPO_FLOAT", "TK_TIPO_BOOL", "TK_TIPO_CHAR", "TK_TIPO_STRING",
  "TK_FIM", "TK_ERROR", "TK_PRINT", "TK_READ", "TK_IF", "TK_ELSE",
  "TK_WHILE", "TK_DO", "TK_ARITMETICOS", "TK_RELACIONAIS", "TK_ANDOR",
  "TK_INDECREMENTO", "TK_BREAK", "TK_MAIOR", "TK_MENOR", "TK_MAIORIGUAL",
  "TK_MENORIGUAL", "TK_IGUAL", "TK_DIFERENTE", "TK_AND", "TK_OR",
  "TK_NEGADO", "'+'", "'-'", "'*'", "'/'", "'='", "'('", "')'", "'{'",
  "'}'", "';'", "'.'", "'['", "']'", "':'", "$accept", "S", "BLOCO", "$@1",
  "COMANDOS", "E", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    61,    40,    41,   123,   125,    59,    46,    91,
      93,    58
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     9,    35,     1,   -46,    -3,   -46,   -46,     2,   121,
     -46,   -46,   -46,   -46,   -46,   -46,    20,    46,    47,    48,
      56,    66,   121,    67,    30,    59,   -46,    45,   121,   121,
      71,    75,   121,   110,    12,    18,    62,    49,    63,   -22,
      72,   121,   121,    98,   -46,    82,   -12,   -46,   121,   121,
     121,   121,   -46,    -9,   -45,   121,   -46,   118,   121,   -46,
     119,   121,   -46,   139,   121,   -46,   121,   -46,   -46,   -46,
      -2,    24,   102,   -46,    82,     7,   -15,    82,   -46,   114,
     154,    27,   112,    90,   113,   122,   125,   126,   129,   -46,
     -46,   121,   121,   128,   -46,   124,   -46,   133,   -46,   134,
     -46,   -46,   147,   -46,   135,   141,   -46,   -46,   -46,   -46,
     -46,   137,   -46,   -46,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     2,     0,     0,
      24,    25,    29,    30,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    22,     0,     4,     0,     0,
       0,     0,     5,     0,     0,     0,     7,     0,     0,     8,
       0,     0,    11,     0,     0,     9,     0,    10,    31,    32,
       0,     0,     0,    23,    19,    20,    21,    18,    17,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       3,     0,     0,     0,    12,     0,    13,     0,    16,     0,
      14,    15,    33,    36,     0,     0,    39,    40,    41,    42,
       3,     0,    43,    34,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -26,   -46,   151,   -21
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    30,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    39,    48,    49,    50,    79,    80,    45,    46,    48,
      49,    53,    48,    49,    50,    48,    49,    50,     3,     1,
      70,    71,    48,    49,    50,    68,    51,    74,    75,    76,
      77,    48,    73,    51,    81,     4,    51,    83,    78,    51,
      85,     6,    89,    87,     5,    88,    51,     9,    48,    49,
      50,    48,    49,    50,    55,    51,    34,    35,    36,    56,
      58,    57,    32,   102,   103,    59,    37,    60,    90,    33,
     104,   105,    51,    41,    94,    51,    38,    40,    10,    11,
      12,    13,    14,    15,   113,    16,    17,    18,    19,    20,
      21,    64,    44,    22,    23,    24,    65,    25,    26,    48,
      49,    50,    42,    27,    61,    66,    48,    49,    50,    62,
      67,    63,    28,    54,    48,    49,    50,    47,    29,    69,
      72,    82,    84,    51,    10,    11,    12,    13,    14,    15,
      51,    16,    17,    18,    19,    20,    21,    96,    51,    22,
      23,    24,    86,    25,    26,    91,    48,    49,    50,    27,
      48,    49,    50,    48,    49,    50,    92,    93,    28,    48,
      49,    50,    95,    97,    29,    48,    49,    50,   110,    98,
      51,   107,     0,   100,    51,    99,   101,    51,   106,   111,
     108,   109,    52,    51,   114,     0,     0,     0,   112,    51
};

static const yytype_int8 yycheck[] =
{
      26,    22,    24,    25,    26,    50,    51,    28,    29,    24,
      25,    32,    24,    25,    26,    24,    25,    26,     9,    11,
      41,    42,    24,    25,    26,    47,    48,    48,    49,    50,
      51,    24,    44,    48,    55,     0,    48,    58,    47,    48,
      61,    44,    44,    64,    43,    66,    48,    45,    24,    25,
      26,    24,    25,    26,    42,    48,    10,    10,    10,    47,
      42,    49,    42,    89,    90,    47,    10,    49,    44,    49,
      91,    92,    48,    43,    47,    48,    10,    10,     3,     4,
       5,     6,     7,     8,   110,    10,    11,    12,    13,    14,
      15,    42,    47,    18,    19,    20,    47,    22,    23,    24,
      25,    26,    43,    28,    42,    42,    24,    25,    26,    47,
      47,    49,    37,     3,    24,    25,    26,    46,    43,    47,
      22,     3,     3,    48,     3,     4,     5,     6,     7,     8,
      48,    10,    11,    12,    13,    14,    15,    47,    48,    18,
      19,    20,     3,    22,    23,    43,    24,    25,    26,    28,
      24,    25,    26,    24,    25,    26,    42,     3,    37,    24,
      25,    26,    50,    50,    43,    24,    25,    26,    21,    47,
      48,    47,    -1,    47,    48,    50,    47,    48,    50,    44,
      47,    47,    31,    48,    47,    -1,    -1,    -1,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    53,     9,     0,    43,    44,    54,    55,    45,
       3,     4,     5,     6,     7,     8,    10,    11,    12,    13,
      14,    15,    18,    19,    20,    22,    23,    28,    37,    43,
      56,    57,    42,    49,    10,    10,    10,    10,    10,    57,
      10,    43,    43,    54,    47,    57,    57,    46,    24,    25,
      26,    48,    56,    57,     3,    42,    47,    49,    42,    47,
      49,    42,    47,    49,    42,    47,    42,    47,    47,    47,
      57,    57,    22,    44,    57,    57,    57,    57,    47,    50,
      51,    57,     3,    57,     3,    57,     3,    57,    57,    44,
      44,    43,    42,     3,    47,    50,    47,    50,    47,    50,
      47,    47,    54,    54,    57,    57,    50,    47,    47,    47,
      21,    44,    47,    54,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    55,    54,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     4,     2,     1,     3,     3,     3,
       3,     3,     5,     5,     5,     5,     5,     4,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     5,     7,     2,     5,     7,     4,     6,
       6,     6,     6,     7
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
#line 54 "sintatica.y" /* yacc.c:1646  */
    {

				cout << "#include<stdio.h>\n";
				cout << "#include<string.h>\n";
				cout << "#include<iostream>\n\n";
				cout << "using namespace std;\n\n";
				cout << "int main(void)\n{\n" ;

				cout << (yyvsp[0]).traducao << "\treturn 0;\n}\n" << endl; 
			}
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "sintatica.y" /* yacc.c:1646  */
    {	contexto++;
				map<string, Atributos> tabela;
				pilha.push_back(tabela);
			}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 69 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).traducao = (yyvsp[-1]).traducao;
			
				contexto--;
				pilha.pop_back();
			}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 77 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).traducao = (yyvsp[-1]).traducao + (yyvsp[0]).traducao;
				
			}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-1]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("int", (yyvsp[-1]).label);
					(yyval).traducao = (yyvsp[-1]).traducao + "\tint " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-1]).label+"\" já foi declarada");

			}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-1]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("float", (yyvsp[-1]).label);
					(yyval).traducao = (yyvsp[-1]).traducao + "\tfloat " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-1]).label+"\" já foi declarada");

			}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-1]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("char", (yyvsp[-1]).label);
					(yyval).traducao = (yyvsp[-1]).traducao + "\tchar " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-1]).label+"\" já foi declarada");

			}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-1]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("string", (yyvsp[-1]).label);
					(yyval).traducao = (yyvsp[-1]).traducao + "\tchar " + (yyval).label + "[0];\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-1]).label+"\" já foi declarada");
			}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-1]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("bool", (yyvsp[-1]).label);
					(yyval).traducao = (yyvsp[-1]).traducao + "\tint " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-1]).label+"\" já foi declarada");
			}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 140 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-3]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[-4]).label, (yyvsp[-3]).label);
					int j = procuraVariavel((yyvsp[-1]).label);
					if(pilha[j][(yyvsp[-1]).label].tipo == "bool" || pilha[j][(yyvsp[-1]).label].tipo == "string")
						yyerror("\nTIPOS INCOMPATIVEIS");
					else
						adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[-4]).label, pilha[j][(yyvsp[-1]).label].tipo) + (yyvsp[-1]).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-3]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[-3]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-3]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[-4]).label, (yyvsp[-3]).label);
					int j = procuraVariavel((yyvsp[-1]).label);
					if(pilha[j][(yyvsp[-1]).label].tipo == "bool" || pilha[j][(yyvsp[-1]).label].tipo == "string")
						yyerror("\nTIPOS INCOMPATIVEIS");
					else
						adicional = "\tfloat " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[-4]).label, pilha[j][(yyvsp[-1]).label].tipo) + (yyvsp[-1]).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-3]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[-3]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-3]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[-4]).label, (yyvsp[-3]).label);
					int j = procuraVariavel((yyvsp[-1]).label);
					if(pilha[j][(yyvsp[-1]).label].tipo == "bool" || pilha[j][(yyvsp[-1]).label].tipo == "string")
						yyerror("\nTIPOS INCOMPATIVEIS");
					else
						adicional = "\tchar " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[-4]).label, pilha[j][(yyvsp[-1]).label].tipo) + (yyvsp[-1]).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-3]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[-3]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-3]).label);
				if(i != contexto){

					(yyval).label = criaAtributo((yyvsp[-4]).label, (yyvsp[-3]).label);
					int i = procuraVariavel((yyval).label);
					int j = procuraVariavel((yyvsp[-1]).label);
					if(pilha[j][(yyvsp[-1]).label].tipo != "string"){
						yyerror("\nTIPOS INCOMPATIVEIS");
					}
					else{
						adicional = "\tchar "  + (yyval).label + "[" + pilha[j][(yyvsp[-1]).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[-1]).label + ");\n";						
						pilha[j][(yyvsp[-3]).label].tamanho = pilha[j][(yyvsp[-1]).label].tamanho;
						pilha[i][(yyval).label].tamanho = pilha[j][(yyvsp[-1]).label].tamanho;
					}
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-3]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[-4]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 214 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-3]).label);
				if(i != contexto){
					(yyval).label = criaAtributo((yyvsp[-4]).label, (yyvsp[-3]).label);
					int j = procuraVariavel((yyvsp[-1]).label);
					if(pilha[j][(yyvsp[-1]).label].tipo != "bool")
						yyerror("\nTIPOS INCOMPATIVEIS");
					else
						adicional = "\tint " + (yyval).label + ";\n\t" + (yyval).label +" = " + verificaCastAtribuicao((yyvsp[-4]).label, pilha[j][(yyvsp[-1]).label].tipo) + (yyvsp[-1]).label + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-3]).label+"\" já foi declarada");
					
				(yyval).traducao = (yyvsp[-3]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 231 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i;
				if(i = procuraVariavel((yyvsp[-3]).label), i != -1){
					if((pilha[i][(yyvsp[-3]).label].tipo != "bool" && pilha[i][(yyvsp[-1]).label].tipo == "bool") || (pilha[i][(yyvsp[-3]).label].tipo == "bool" && pilha[i][(yyvsp[-1]).label].tipo != "bool")){
						yyerror("\nTIPOS INCOMPATIVEIS");						
					}
					
					adicional = "\t" + pilha[i][(yyvsp[-3]).label].label + " = " + verificaCastAtribuicao(pilha[i][(yyvsp[-3]).label].tipo, pilha[i][(yyvsp[-1]).label].tipo) + (yyvsp[-1]).label + ";\n";			
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[-3]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 247 "sintatica.y" /* yacc.c:1646  */
    {		

				string adicional;

				if(pilha[contexto][(yyvsp[-2]).label].tipo == "string" && pilha[contexto][(yyvsp[0]).label].tipo == "string")
				{
					(yyval).label = criaAtributo("string", "");
					int tamanho = atoi(pilha[contexto][(yyvsp[-2]).label].tamanho.c_str()) + atoi(pilha[contexto][(yyvsp[0]).label].tamanho.c_str());

					stringstream aux;   
				    aux << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = aux.str();
					pilha[contexto][(yyval).label].tamanho = tamanhoNovaString;

					string aux0 = "\tchar " + (yyval).label + "[" + tamanhoNovaString + "] = \"\";\n";
					string aux1 = "\tstrcat(" + (yyval).label + "," + (yyvsp[-2]).label + ");\n";
					string aux2 = "\tstrcat(" + (yyval).label + "," + (yyvsp[0]).label + ");\n";
					adicional = aux0 + aux1 + aux2;
				}
				else
					yyerror("\nOPERACAO INVALIDA");

				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + adicional;
			
			}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 273 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[-2]).label);
				int j = procuraVariavel((yyvsp[0]).label);
				string resultado = verificaCompatibilidadeVariaveis("aritmeticos",pilha[i][(yyvsp[-2]).label].tipo,pilha[j][(yyvsp[0]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " "+(yyvsp[-1]).label+" ", (yyval).label, (yyvsp[-2]).label, (yyvsp[0]).label);
				}

				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + adicional;

			}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 291 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;		
				int i = procuraVariavel((yyvsp[-2]).label);
				int j = procuraVariavel((yyvsp[0]).label);
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",pilha[i][(yyvsp[-2]).label].tipo,pilha[j][(yyvsp[0]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " "+(yyvsp[-1]).label+" ", (yyval).label, (yyvsp[-2]).label, (yyvsp[0]).label);
				}

				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + adicional;				
			}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 308 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-2]).label);
				int j = procuraVariavel((yyvsp[0]).label);
				string resultado = verificaCompatibilidadeVariaveis("AND_OR",pilha[i][(yyvsp[-2]).label].tipo,pilha[j][(yyvsp[0]).label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					adicional = "\tint " + (yyval).label + " = " + (yyvsp[-2]).label + " && " + (yyvsp[0]).label + ";\n";
				}

				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + adicional;
			}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 325 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[0]).label);
				string resultado = verificaCompatibilidadeVariaveis("!",pilha[contexto][(yyvsp[0]).label].tipo,"");
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					(yyval).label = criaAtributo("bool", "");
					string adicional = "\tint " + (yyval).label + " = !" + (yyvsp[0]).label + ";\n";
					(yyval).traducao = (yyvsp[0]).traducao + adicional;
				}
					
			}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 340 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = (yyvsp[-1]).label;
				(yyval).traducao = (yyvsp[-1]).traducao;
			}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 345 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = criaAtributo("int", (yyvsp[0]).label);
				(yyval).traducao = "\tint " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[0]).label + ";\n";
			}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 350 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = criaAtributo("float", (yyvsp[0]).label);
				(yyval).traducao = "\tfloat " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[0]).label + ";\n";
			}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 355 "sintatica.y" /* yacc.c:1646  */
    {

				if((yyvsp[0]).label.length() == 3) {

					(yyval).label = criaAtributo("char", (yyvsp[0]).label);				
					(yyval).traducao = "\tchar " + (yyval).label + ";\n\t" + (yyval).label + " = " + (yyvsp[0]).label + ";\n";
				}
				else
					yyerror("\nSEGMENTATION FAULT\n");

			}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 366 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = criaAtributo("string", (yyvsp[0]).label);				
				(yyval).traducao = "\tchar " + (yyval).label + "[" + pilha[contexto][(yyval).label].tamanho + "]" + ";\n\tstrcpy(" + (yyval).label + "," + (yyvsp[0]).label + ");\n";

			}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 372 "sintatica.y" /* yacc.c:1646  */
    {
				int i;
				if(i = procuraVariavel((yyvsp[0]).label), i != -1)
					(yyval).label = pilha[i][(yyvsp[0]).label].label;					
				
				else 
					yyerror("\nVARIAVEL NAO DECLARADA");

			}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 381 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = criaAtributo("bool", (yyvsp[0]).label);
				(yyval).traducao = "\tint " + (yyval).label + " = " + "1" + ";\n";
			}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 386 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).label = criaAtributo("bool", (yyvsp[0]).label);
				(yyval).traducao = "\tint " + (yyval).label + " = " + "0" + ";\n";
			}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 391 "sintatica.y" /* yacc.c:1646  */
    {
				int i;
				if(i = procuraVariavel((yyvsp[-1]).label), i != -1){
					(yyval).label = pilha[i][(yyvsp[-1]).label].label;
					(yyval).traducao = (yyvsp[-1]).traducao + "\tcout << " + (yyval).label + " << endl" + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 400 "sintatica.y" /* yacc.c:1646  */
    {
				int i;
				if(i = procuraVariavel((yyvsp[-1]).label), i != -1){
			
					(yyval).label = pilha[i][(yyvsp[-1]).label].label;
					(yyval).traducao = "\tcin >> " + (yyval).label + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 410 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-2]).label);
				string label = criaLabel();

				if (pilha[i][(yyvsp[-2]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[-2]).label].label + ") goto " + label + ";\n";					
					(yyval).traducao = (yyvsp[-2]).traducao + adicional + (yyvsp[0]).traducao + label +":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 423 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-4]).label);
				string labelIf = criaLabel();
				string labelElse = criaLabel();
				if (pilha[i][(yyvsp[-4]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[-4]).label].label + ") goto " + labelIf + ";\n";					
					(yyval).traducao = (yyvsp[-4]).traducao + adicional + (yyvsp[-2]).traducao + "\tgoto " + labelElse + ";\n" + labelIf + ":\n" + (yyvsp[0]).traducao + labelElse + ":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 437 "sintatica.y" /* yacc.c:1646  */
    {
				string label = criaLabel();
				pilhaBreak.push_back(label);

				(yyval).traducao = "\tgoto " + label + ";\n";
			}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 443 "sintatica.y" /* yacc.c:1646  */
    {
				
				int i = procuraVariavel((yyvsp[-2]).label);			
				string inicioWhile = criaLabel();
				string fimWhile = criaLabel();	

				if(pilhaBreak.size() > 0)
				{					
					fimWhile = pilhaBreak[pilhaBreak.size()-1];
					pilhaBreak.pop_back();
				}

				if (pilha[i][(yyvsp[-2]).label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][(yyvsp[-2]).label].label + ") goto " + fimWhile + ";\n";
					string adicional2 = "\tif(" + pilha[i][(yyvsp[-2]).label].label + ") goto " + inicioWhile + ";\n";					
					
					(yyval).traducao = inicioWhile + ":\n" + (yyvsp[-2]).traducao + adicional + (yyvsp[0]).traducao + adicional2 + fimWhile + ":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 465 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-2]).label);	
				string inicioWhile = criaLabel();
				string fimWhile = "";

				if(pilhaBreak.size() > 0)
				{					
					fimWhile = pilhaBreak[pilhaBreak.size()-1];
					fimWhile = fimWhile + ":\n";
					pilhaBreak.pop_back();
				}

				if (pilha[i][(yyvsp[-2]).label].tipo == "bool")
				{
					string adicional = "\tif(" + pilha[i][(yyvsp[-2]).label].label + ") goto " + inicioWhile + ";\n"+fimWhile;
					(yyval).traducao = inicioWhile + ":\n" + (yyvsp[-5]).traducao + (yyvsp[-2]).traducao + adicional;
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 487 "sintatica.y" /* yacc.c:1646  */
    {
				int i = procuraVariavel((yyvsp[-3]).label);	

				if(i != -1){
					if(pilha[i][(yyvsp[-3]).label].tipo == "string" && pilha[i][(yyvsp[-3]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("char","");

						string adicional = "\tchar " + 	(yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[-3]).label].label + "[" + (yyvsp[-1]).label + "];\n";
						(yyval).traducao = adicional;
					}
					else if(pilha[i][(yyvsp[-3]).label].tipo == "vetor_int" && pilha[i][(yyvsp[-3]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("int","");

						string adicional = "\tint " + 	(yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[-3]).label].label + "[" + (yyvsp[-1]).label + "];\n";
						(yyval).traducao = adicional;
					}
					else if(pilha[i][(yyvsp[-3]).label].tipo == "vetor_float" && pilha[i][(yyvsp[-3]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("float","");

						string adicional = "\tfloat " + 	(yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[-3]).label].label + "[" + (yyvsp[-1]).label + "];\n";
						(yyval).traducao = adicional;
					}
					else if(pilha[i][(yyvsp[-3]).label].tipo == "vetor_bool" && pilha[i][(yyvsp[-3]).label].tamanho != "0")
					{
						(yyval).label = criaAtributo("bool","");
 
						string adicional = "\tint " + 	(yyval).label + ";\n\t" + (yyval).label + " = " + pilha[i][(yyvsp[-3]).label].label + "[" + (yyvsp[-1]).label + "];\n";
						(yyval).traducao = adicional;
					}					
					else
						yyerror("ERRO: OPERACAO INVALIDA");			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");	
			}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 526 "sintatica.y" /* yacc.c:1646  */
    {
				int i = procuraVariavel((yyvsp[-5]).label);	

				if(pilha[i][(yyvsp[-5]).label].tipo == "string" && pilha[i][(yyvsp[-5]).label].tamanho != "0")
				{
					(yyval).label = criaAtributo("string","");

					int j = procuraVariavel((yyval).label);
					int tam1 = atoi((yyvsp[-1]).label.c_str());
					int tam2 = atoi((yyvsp[-3]).label.c_str());
					int tamanho = tam1 - tam2 + 1;

					stringstream tamanhoS;   
				    tamanhoS << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = tamanhoS.str();

				    pilha[j][(yyval).label].tamanho = tamanhoNovaString;

				    string adicional1 = "\tchar " + (yyval).label + "[" + tamanhoNovaString + "];\n\t" + (yyval).label + "[" + tamanhoNovaString + "] = \'\\0\';\n"; 

				    string aux = criaAtributo("int","");
				    string aux2 = criaAtributo("int","");				  
				    string aux3 = criaAtributo("int","");


				    string inicioWhile = criaLabel();

				    string adicional2 = "\tint " + pilha[contexto][aux].label + ";\n" + "\tint " + pilha[contexto][aux2].label+ ";\n" + "\tint " + pilha[contexto][aux3].label + ";\n";
				    string adicional3 = "\t" + pilha[contexto][aux].label + " = 0;\n" + "\t" + pilha[contexto][aux2].label + " = 0;\n" + "\t" + pilha[contexto][aux3].label + " = 0;\n" + inicioWhile+":\n";
				    string adicional4 = "\t" + pilha[contexto][aux2].label + " = " + pilha[contexto][aux].label + " + " + (yyvsp[-3]).label + ";\n";
				    string adicional5 = "\t" + pilha[j][(yyval).label].label + "[" + pilha[contexto][aux].label + "]" + " = " + pilha[i][(yyvsp[-5]).label].label + "[" + pilha[contexto][aux2].label + "];\n";
				    string adicional6 = "\t" + pilha[contexto][aux].label + " = " + pilha[contexto][aux].label + " + " + "1;\n"; 
				    string adicional7 = "\t" + pilha[contexto][aux3].label + " = " + pilha[contexto][aux].label + " < " + tamanhoNovaString + ";\n";
				    string adicional8 = "\tif(" + pilha[contexto][aux3].label + ") goto " + inicioWhile + ";\n";
					(yyval).traducao = adicional1 + adicional2 + adicional3 + adicional4 + adicional5 + adicional6 + adicional7 +adicional8 ;
					
				}					
				else
					yyerror("ERRO: OPERACAO INVALIDA")	;			
			}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 567 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-4]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("vetor_int", (yyvsp[-4]).label);
					(yyval).traducao = (yyvsp[-4]).traducao + "\tint " + (yyval).label + "[" + (yyvsp[-2]).label + "]" + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-4]).label+"\" já foi declarada");
			}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 577 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-4]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("vetor_float", (yyvsp[-4]).label);
					(yyval).traducao = (yyvsp[-4]).traducao + "\tfloat " + (yyval).label + "[" + (yyvsp[-2]).label + "]" + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-4]).label+"\" já foi declarada");
			}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 587 "sintatica.y" /* yacc.c:1646  */
    {

				int i = procuraVariavel((yyvsp[-4]).label);
				if(i != contexto){
					(yyval).label = criaAtributo("vetor_int", (yyvsp[-4]).label);
					(yyval).traducao = (yyvsp[-4]).traducao + "\tint " + (yyval).label + "[" + (yyvsp[-2]).label + "]" + ";\n";
				}
				else
					yyerror("\nVariavel \""+(yyvsp[-4]).label+"\" já foi declarada");
			}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 597 "sintatica.y" /* yacc.c:1646  */
    {

				string adicional;
				int i = procuraVariavel((yyvsp[-6]).label);
				int j = procuraVariavel((yyvsp[-1]).label);	

				if(i != -1){

					adicional = "\t" + pilha[i][(yyvsp[-6]).label].label + "[" + (yyvsp[-4]).label + "] = " + pilha[j][(yyvsp[-1]).label].label + ";\n";		
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				(yyval).traducao = (yyvsp[-6]).traducao + (yyvsp[-4]).traducao + (yyvsp[-1]).traducao + adicional;
			}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2151 "y.tab.c" /* yacc.c:1646  */
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
#line 612 "sintatica.y" /* yacc.c:1906  */


#include "lex.yy.c"

int yyparse();

string formaExpressao(string resultado, string operando, string label, string label1, string label2){

	string adicional, tipo = resultado;
	int i = procuraVariavel(label1);
	int j = procuraVariavel(label2);
	if(operando == " < " || operando == " > " || operando == " <= " || operando == " >= " || operando == " == " || operando == " != ")
		tipo = "int";

	if(pilha[i][label1].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string aux2 = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label1 + ";\n";
		adicional = aux2 + "\t" + tipo + " " + label + ";\n\t" + label + " = " + aux + operando + label2 + ";\n";
	}
	else if(pilha[j][label2].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string aux2 = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label2 + ";\n";
		adicional = aux2+"\t" + tipo + " " + label + ";\n\t" + label + " = " + label1 + operando + aux + ";\n";
	}
	else
		adicional = "\t" + tipo + " " + label + ";\n\t" + label + " = " + label1 + operando + label2 + ";\n";

	return adicional;
}

string criaLabel(){
    stringstream aux;
    static int i = 0;
    aux << i;

    string temp ("LABEL_");
    temp = temp + aux.str();
    i++;

    return temp;
}

string verificaCastAtribuicao(string tipo1, string tipo2) {
	if(tipo1 == tipo2)
		return "";
	if(tipo1 == "int")
		return "(int)";
	else if(tipo1 == "float")
		return "(float)";
	else if(tipo1 == "char")
		return "(char)";
}

int procuraVariavel(string variavel){

	for(int i = contexto; i >= 0; i--){
	    if(pilha[i].find(variavel) != pilha[i].end()){
	        return i;
	    }
	}
	return -1;
}

string verificaCompatibilidadeVariaveis(string operador, string operandoA, string operandoB){
	int quant = (sizeof(tabelaCompatibilidade)/4);
	
	for (int i = 0; i < quant; i++)
	{
		if(tabelaCompatibilidade[i][0] == operador && tabelaCompatibilidade[i][1] == operandoA && tabelaCompatibilidade[i][2] == operandoB)
		{
			return tabelaCompatibilidade[i][3];
		}
	}
}

string criaVariavel(){
    stringstream aux;
    static int i = 0;
    aux << i;

    string temp ("t");
    temp = temp + aux.str();

    i++;

    return temp;
}

string criaAtributo(string tipo, string traducao){
	Atributos atributo;
	atributo.label = criaVariavel();
	atributo.traducao = traducao;
	atributo.tipo = tipo;
	atributo.tamanho = "NULL";

	if(tipo == "string")
	{
		stringstream aux;   
	    aux << traducao.length()-1;
	    string tamanho;
	    tamanho = aux.str();
		atributo.tamanho = tamanho;
	}

	pilha[contexto][atributo.label] = atributo;
	pilha[contexto][traducao] = atributo;

	return atributo.label;
}

int main( int argc, char* argv[] )
{
	yyparse();
	return 0;
}

void yyerror( string MSG )
{
	stringstream aux;
    aux << linha;
	cout << MSG + " - Linha: " + aux.str() << endl;
	exit (0);
}
