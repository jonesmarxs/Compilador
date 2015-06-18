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
