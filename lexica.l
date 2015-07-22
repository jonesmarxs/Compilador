%{
#include <string>
%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z_]

DELIM {ESPACO}+
NUM "-"?{DIGITO}+
REAL {NUM}+("."{NUM}+)?
CHAR \'({LETRA}|{NUM})\'
ID {LETRA}({LETRA}|{NUM})*
RELACIONAIS (==|!=|>=|<=|<|>)
ANDOR (&&|\|\|)
ARITMETICOS [+\-*/]
INCREMENTO (\+\+|\-\-)
TIPOS ("int"|"float"|"bool"|"char"|"string")
%%

"\n"		{linha++;}

{DELIM} 	{}

"main"		{return TK_MAIN;}

{TIPOS}		{yylval.label = yytext; return TK_TIPO;}

"true"|"false" 	{yylval.label = yytext; return TK_TRUE_FALSE;}

"read"		{yylval.label = yytext; return TK_READ;}
"print"		{yylval.label = yytext; return TK_PRINT;}
"println"		{yylval.label = yytext; return TK_PRINT_LN;}
"if"		{yylval.label = yytext; return TK_IF;}
"else"		{yylval.label = yytext; return TK_ELSE;}
"else if"	{yylval.label = yytext; return TK_ELSEIF;}
"do"		{yylval.label = yytext; return TK_DO;}
"while"		{yylval.label = yytext; return TK_WHILE;}
"for"		{yylval.label = yytext; return TK_FOR;}
"break"		{yylval.label = yytext; return TK_BREAK;}
"continue"	{yylval.label = yytext; return TK_CONTINUE;}
"def"		{return TK_FUNC;}
"void"		{yylval.label = yytext; return TK_VOID;}
"return"	{return TK_RETURN;}
["//"].*	{}
[\'].[\'] 	{ yylval.label = yytext; return TK_CHAR; }
[\"].*[\"] 		{ yylval.label = yytext; return TK_STRING; }

"="				{ return *yytext; }

{ARITMETICOS}	{ yylval.label = yytext; return TK_ARITMETICOS; }
{RELACIONAIS}	{ yylval.label = yytext; return TK_RELACIONAIS; }
{ANDOR}			{ yylval.label = yytext; return TK_AND_OR; }
"!"				{yylval.label = yytext; return TK_NEGADO;}
{INCREMENTO}	{yylval.label = yytext; return TK_INCREMENTO;}

[(){}[\];,:]	{ return *yytext; }

"."				{ return *yytext; }

{NUM}		{ yylval.label = yytext; return TK_NUM_INT; }
{REAL}		{ yylval.label = yytext; return TK_NUM_FLOAT; }
{ID}		{ yylval.label = yytext; return TK_ID; }

.			{ *yytext; }

%%
