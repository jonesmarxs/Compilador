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

[\'].*[\'] { yylval.label = yytext; return TK_CHAR; }
[\"].*[\"] 		{ yylval.label = yytext; return TK_STRING; }

">"			{yylval.label = yytext; return TK_MAIOR;}
"<"			{yylval.label = yytext; return TK_MENOR;}
">="		{yylval.label = yytext; return TK_MAIORIGUAL;}
"<="		{yylval.label = yytext; return TK_MENORIGUAL;}
"=="		{yylval.label = yytext; return TK_IGUAL;}
"=!"		{yylval.label = yytext; return TK_DIFERENTE;}

"!"			{yylval.label = yytext; return TK_NEGADO;}

"&&"		{yylval.label = yytext; return TK_AND;}
"||"		{yylval.label = yytext; return TK_OR;}

[(){}[\];,]	{ return *yytext; }

[+\-*/=\.]	{ return *yytext; }

{NUM}		{ yylval.label = yytext; return TK_NUM_INT; }
{REAL}		{ yylval.label = yytext; return TK_NUM_FLOAT; }
{ID}		{ yylval.label = yytext; return TK_ID; }

.			{ *yytext; }

%%