%{
#include <string>

int linha = 1;
%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z_]

DELIM {ESPACO}+
NUM {DIGITO}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETRA}|{NUM})\'
ID {LETRA}({LETRA}|{NUM})*
RELACIONAIS (==|!=|>=|<=|<|>)
ANDOR (&&|\|\|)
ARITMETICOS [+\-*/]
INDECREMENTO (\+\+|\-\-)

%%

"\n"		{linha++;}

{DELIM} 	{}

"main"		{return TK_MAIN;}

"int"		{yylval.label = yytext; return TK_TIPO_INT;}
"float"		{yylval.label = yytext; return TK_TIPO_FLOAT;}
"bool"		{yylval.label = yytext; return TK_TIPO_BOOL;}
"char"		{yylval.label = yytext; return TK_TIPO_CHAR;}
"string"	{yylval.label = yytext; return TK_TIPO_STRING;}

"true"		{yylval.label = yytext; return TK_TRUE;}
"false"		{yylval.label = yytext; return TK_FALSE;}

"read"		{yylval.label = yytext; return TK_READ;}
"print"		{yylval.label = yytext; return TK_PRINT;}
"if"		{yylval.label = yytext; return TK_IF;}
"else"		{yylval.label = yytext; return TK_ELSE;}
"do"		{yylval.label = yytext; return TK_DO;}
"while"		{yylval.label = yytext; return TK_WHILE;}
"for"		{yylval.label = yytext; return TK_FOR;}
"break"		{yylval.label = yytext; return TK_BREAK;}

[\'].*[\'] { yylval.label = yytext; return TK_CHAR; }
[\"].*[\"] 		{ yylval.label = yytext; return TK_STRING; }

"="				{ return *yytext; }

{ARITMETICOS}	{ yylval.label = yytext; return TK_ARITMETICOS; }
{RELACIONAIS}	{ yylval.label = yytext; return TK_RELACIONAIS; }
{ANDOR}			{ yylval.label = yytext; return TK_ANDOR; }
"!"				{yylval.label = yytext; return TK_NEGADO;}
{INDECREMENTO}	{yylval.label = yytext; return TK_INDECREMENTO;}

[(){}[\];,:]		{ return *yytext; }

"."				{ return *yytext; }

{NUM}		{ yylval.label = yytext; return TK_NUM_INT; }
{REAL}		{ yylval.label = yytext; return TK_NUM_FLOAT; }
{ID}		{ yylval.label = yytext; return TK_ID; }

.			{ *yytext; }

%%
