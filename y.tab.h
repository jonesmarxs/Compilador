/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
