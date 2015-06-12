%{
#include <iostream>
#include <string>
#include <sstream>
#include <map>
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

map <string, Atributos> tabelaVariaveis;
map <string, Atributos> tabelaTemp;

int yylex(void);
void yyerror(string);
string criaLabel();
bool procuraTabelaVariaveis(string variavel);
string verificaCompatibilidadeVariaveis(string operador, string operandoA, string operandoB);
string criaAtributo(string tipo, string traducao);
string verificaCastAtribuicao(string tipo1, string tipo2);
string formaExpressao(string operando, string resultado, string label, string label1, string label2);

%}

%token TK_NUM_INT TK_NUM_FLOAT TK_TRUE TK_FALSE TK_CHAR TK_STRING
%token TK_MAIN TK_ID TK_TIPO_INT TK_TIPO_FLOAT TK_TIPO_BOOL TK_TIPO_CHAR TK_TIPO_STRING 
%token TK_FIM TK_ERROR TK_PRINT TK_READ TK_IF
%token TK_MAIOR TK_MENOR TK_MAIORIGUAL TK_MENORIGUAL TK_IGUAL TK_DIFERENTE
%token TK_AND TK_OR TK_NEGADO

%left TK_AND TK_OR
%left TK_MENOR TK_MAIOR TK_MAIORIGUAL TK_MENORIGUAL TK_IGUAL TK_DIFERENTE
%left '+' '-'
%left '*' '/'
%nonassoc '='
%start S

%%

S 			: TK_TIPO_INT TK_MAIN '(' ')' BLOCO {

				cout << "#include<stdio.h>\n";
				cout << "#include<string.h>\n";
				cout << "#include<iostream>\n\n";
				cout << "using namespace std;\n\n";
				cout << "int main(void)\n{\n" ;

				cout << $5.traducao << "\treturn 0;\n}\n" << endl; 
			} ;

BLOCO		: '{' COMANDOS '}' {

				$$.traducao = $2.traducao;
			} ;

COMANDOS	: E  COMANDOS {

				$$.traducao = $1.traducao + $2.traducao;
				
			}
			| E {
				$$.traducao = $1.traducao;
			}
			;			
E 			: TK_TIPO_INT TK_ID ';' {

				$$.label = criaAtributo("int", $2.label);
				$$.traducao = $2.traducao + "\tint " + $$.label + ";\n";
			}
			| TK_TIPO_FLOAT TK_ID ';' {

				$$.label = criaAtributo("float", $2.label);
				$$.traducao = $2.traducao + "\tfloat " + $$.label + ";\n";
			}
			| TK_TIPO_CHAR TK_ID ';' {

				$$.label = criaAtributo("char", $2.label);
				$$.traducao = $2.traducao + "\tchar " + $$.label + ";\n";
			}
			| TK_TIPO_STRING TK_ID ';' {

				$$.label = criaAtributo("string", $2.label);
				$$.traducao = $2.traducao + "\tchar " + $$.label + "[0];\n";
			}
			| TK_TIPO_BOOL TK_ID ';' {

				$$.label = criaAtributo("bool", $2.label);
				$$.traducao = $2.traducao + "\tint " + $$.label + ";\n";
			}
			| TK_TIPO_INT TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if(tabelaTemp[$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tint " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, tabelaTemp[$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $2.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_FLOAT TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if(tabelaTemp[$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tfloat " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, tabelaTemp[$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $2.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_CHAR TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if(tabelaTemp[$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tchar " + $$.label + " = " + verificaCastAtribuicao($1.label, tabelaTemp[$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_STRING TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;
					
				if(tabelaTemp[$4.label].tipo == "string")
				{
					adicional = "\tchar "  + $$.label + "[" + tabelaTemp[$4.label].tamanho + "]" + ";\n\tstrcpy(" + $$.label + "," + $4.label + ");\n";						
					tabelaTemp[$2.label].tamanho = tabelaTemp[$4.label].tamanho;
					tabelaVariaveis[$2.label].tamanho = tabelaTemp[$4.label].tamanho;
					tabelaTemp[$$.label].tamanho = tabelaTemp[$4.label].tamanho;
					tabelaVariaveis[$$.label].tamanho = tabelaTemp[$4.label].tamanho;

				}
				else
					yyerror("\nTIPOS INCOMPATIVEIS");
					
				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_BOOL TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if( $1.label == tabelaTemp[$4.label].tipo )
					adicional = "\tint " + $$.label + " = " + $4.label + ";\n";
				else
					yyerror("\nTIPOS INCOMPATIVEIS");

				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_ID '=' E ';' {

				string adicional;

				if(procuraTabelaVariaveis($1.label)){
					if((tabelaVariaveis[$1.label].tipo != "bool" && tabelaTemp[$3.label].tipo == "bool") || (tabelaVariaveis[$1.label].tipo == "bool" && tabelaTemp[$3.label].tipo != "bool")){
						yyerror("\nTIPOS INCOMPATIVEIS");						
					}
					
					adicional = "\t" + tabelaVariaveis[$1.label].label + " = " + verificaCastAtribuicao(tabelaVariaveis[$1.label].tipo, tabelaTemp[$3.label].tipo) + $3.label + ";\n";			
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E '.' E {		

				string adicional;

				if(tabelaTemp[$1.label].tipo == "string" && tabelaTemp[$3.label].tipo == "string")
				{
					$$.label = criaAtributo("string", "");
					int tamanho = atoi(tabelaTemp[$1.label].tamanho.c_str()) + atoi(tabelaTemp[$3.label].tamanho.c_str());

					stringstream aux;   
				    aux << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = aux.str();
					tabelaTemp[$$.label].tamanho = tamanhoNovaString;

					string aux0 = "\tchar " + $$.label + "[" + tamanhoNovaString + "] = \"\";\n";
					string aux1 = "\tstrcat(" + $$.label + "," + $1.label + ");\n";
					string aux2 = "\tstrcat(" + $$.label + "," + $3.label + ");\n";
					adicional = aux0 + aux1 + aux2;
				}
				else
					yyerror("\nOPERACAO INVALIDA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			
			}
			| E '+' E {		

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("+",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " + ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			
			}
			| E '-' E {		

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("+",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " - ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			
			}
			| E '*' E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("*",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " * ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E '/' E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("/",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " / ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			} 
			| E TK_MENOR E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS", tabelaTemp[$1.label].tipo, tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " < ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_MAIOR E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " > ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_MAIORIGUAL E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " >= ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_MENORIGUAL E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " <= ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_IGUAL E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("IGUAL_DIFERENTE",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " == ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_DIFERENTE E {

				string adicional;		
				string resultado = verificaCompatibilidadeVariaveis("IGUAL_DIFERENTE",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " != ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E TK_AND E {

				if(verificaCompatibilidadeVariaveis("AND_OR",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo)=="certo") {
					
					$$.label = criaAtributo("bool", "");
					string adicional = "\tint " + $$.label + " = " + $1.label + " && " + $3.label + ";\n";
					$$.traducao = $1.traducao + $3.traducao + adicional;
				}
				else
					yyerror("\nOPERACAO INVALIDA");
			}
			| E TK_OR E {

				if(verificaCompatibilidadeVariaveis("AND_OR",tabelaTemp[$1.label].tipo,tabelaTemp[$3.label].tipo)=="certo") {
					
					$$.label = criaAtributo("bool", "");
					string adicional = "\tint " + $$.label + " = " + $1.label + " || " + $3.label + ";\n";
					$$.traducao = $1.traducao + $3.traducao + adicional;
				}
				else
					yyerror("\nOPERACAO INVALIDA");
			}
			| TK_NEGADO E {

				if(verificaCompatibilidadeVariaveis("!",tabelaTemp[$2.label].tipo,"")=="certo") {

					$$.label = criaAtributo("bool", "");
					string adicional = "\tint " + $$.label + " = !" + $2.label + ";\n";
					$$.traducao = $2.traducao + adicional;
				}
				else
					yyerror("\nOPERACAO INVALIDA");
			}
			|  '(' E ')' {

				$$.label = $2.label;
				$$.traducao = $2.traducao;
			}
			| TK_NUM_INT {

				$$.label = criaAtributo("int", $1.label);
				$$.traducao = "\tint " + $$.label + ";\n\t" + $$.label + " = " + $1.label + ";\n";
			}
			| TK_NUM_FLOAT {

				$$.label = criaAtributo("float", $1.label);
				$$.traducao = "\tfloat " + $$.label + ";\n\t" + $$.label + " = " + $1.label + ";\n";
			}
			| TK_CHAR {

				if($1.label.length() == 3) {

					$$.label = criaAtributo("char", $1.label);				
					$$.traducao = "\tchar " + $$.label + " = " + $1.label + ";\n";
				}
				else
					yyerror("\nSEGMENTATION FAULT\n");

			}
			| TK_STRING {

				$$.label = criaAtributo("string", $1.label);				
				$$.traducao = "\tchar " + $$.label + "[" + tabelaTemp[$$.label].tamanho + "] = " + $1.label + ";\n";

			}
			| TK_ID {

				if(procuraTabelaVariaveis($1.label)) 
					$$.label = tabelaVariaveis[$1.label].label;					
				
				else 
					yyerror("\nVARIAVEL NAO DECLARADA");

			}
			| TK_TRUE {

				$$.label = criaAtributo("bool", $1.label);
				$$.traducao = "\tint " + $$.label + " = " + "1" + ";\n";
			}
			| TK_FALSE {

				$$.label = criaAtributo("bool", $1.label);
				$$.traducao = "\tint " + $$.label + " = " + "0" + ";\n";
			}
			| TK_PRINT E ';' {
				if(procuraTabelaVariaveis(tabelaTemp[$2.label].traducao)){
					$$.label = tabelaTemp[$2.label].label;
					$$.traducao = $2.traducao + "\tcout << " + $$.label + " << endl" + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
			| TK_READ TK_ID ';' {

				if(procuraTabelaVariaveis($2.label)){
					$$.label = tabelaVariaveis[$2.label].label;
					$$.traducao = "\tcin >> " + $$.label + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
			| TK_IF '(' E ')' BLOCO
			{
				if (tabelaTemp[$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + tabelaTemp[$3.label].label + ") goto FIM;\n";					
					$$.traducao = $3.traducao +adicional+ $5.traducao+"FIM:\n";
					//cout << $$.traducao << endl;
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			};
%%

#include "lex.yy.c"

int yyparse();

string formaExpressao(string resultado, string operando, string label, string label1, string label2){

	string adicional, tipo = resultado;

	if(operando == " < " || operando == " > " || operando == " <= " || operando == " >= " || operando == " == " || operando == " != ")
		tipo = "int";

	if(tabelaTemp[label1].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string aux2 = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label1 + ";\n";
		adicional = aux2 + "\t" + tipo + " " + label + " = " + aux + operando + label2 + ";\n";
	}
	else if(tabelaTemp[label2].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string aux2 = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label2 + ";\n";
		adicional = aux2+"\t" + tipo + " " + label + " = " + label1 + operando + aux + ";\n";
	}
	else
		adicional = "\t" + tipo + " " + label + " = " + label1 + operando + label2 + ";\n";

	return adicional;
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

string criaLabel()
{
    stringstream aux;
    static int i = 0;
    aux << i;

    string temp ("temp");
    temp = temp + aux.str();

    i++;

    return temp;
}

bool procuraTabelaVariaveis(string variavel)
{
    if(tabelaVariaveis.find(variavel) == tabelaVariaveis.end())
        return false;
    else
        return true;
}

string verificaCompatibilidadeVariaveis(string operador, string operandoA, string operandoB)
{
	int quant = (sizeof(tabelaCompatibilidade)/4);
	
	for (int i = 0; i < quant; i++)
	{
		if(tabelaCompatibilidade[i][0] == operador && tabelaCompatibilidade[i][1] == operandoA && tabelaCompatibilidade[i][2] == operandoB)
		{
			return tabelaCompatibilidade[i][3];
		}
	}
}

string criaAtributo(string tipo, string traducao)
{
	Atributos atributo;
	atributo.label = criaLabel();
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

	tabelaTemp[atributo.label] = atributo;
	tabelaVariaveis[traducao] = atributo;

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
