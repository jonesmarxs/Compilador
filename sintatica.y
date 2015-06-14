%{
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

%}

%token TK_NUM_INT TK_NUM_FLOAT TK_TRUE TK_FALSE TK_CHAR TK_STRING
%token TK_MAIN TK_ID TK_TIPO_INT TK_TIPO_FLOAT TK_TIPO_BOOL TK_TIPO_CHAR TK_TIPO_STRING 
%token TK_FIM TK_ERROR TK_PRINT TK_READ TK_IF TK_ELSE TK_WHILE TK_DO
%token TK_ARITMETICOS TK_RELACIONAIS TK_ANDOR TK_INDECREMENTO
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

BLOCO		: {	contexto++;
				map<string, Atributos> tabela;
				pilha.push_back(tabela);
			}
			'{' COMANDOS '}' {

				$$.traducao = $3.traducao;
			
				contexto--;
				pilha.pop_back();
			};

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

				if(pilha[contexto][$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tint " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, pilha[contexto][$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $2.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_FLOAT TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if(pilha[contexto][$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tfloat " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, pilha[contexto][$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $2.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_CHAR TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if(pilha[contexto][$4.label].tipo == "bool")
					yyerror("\nTIPOS INCOMPATIVEIS");
				else
					adicional = "\tchar " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, pilha[contexto][$4.label].tipo) + $4.label + ";\n";
					
				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_STRING TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;
					
				if(pilha[contexto][$4.label].tipo == "string")
				{
					adicional = "\tchar "  + $$.label + "[" + pilha[contexto][$4.label].tamanho + "]" + ";\n\tstrcpy(" + $$.label + "," + $4.label + ");\n";						
					pilha[contexto][$2.label].tamanho = pilha[contexto][$4.label].tamanho;
					pilha[contexto][$$.label].tamanho = pilha[contexto][$4.label].tamanho;

				}
				else
					yyerror("\nTIPOS INCOMPATIVEIS");
					
				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_TIPO_BOOL TK_ID '=' E ';' {

				$$.label = criaAtributo($1.label, $2.label);
				string adicional;

				if( $1.label == pilha[contexto][$4.label].tipo )
					adicional = "\tint " + $$.label + " = " + $4.label + ";\n";
				else
					yyerror("\nTIPOS INCOMPATIVEIS");

				$$.traducao = $1.traducao + $4.traducao + adicional;
			}
			| TK_ID '=' E ';' {

				string adicional;
				int i;
				if(i = procuraVariavel($1.label), i != -1){
					if((pilha[i][$1.label].tipo != "bool" && pilha[i][$3.label].tipo == "bool") || (pilha[i][$1.label].tipo == "bool" && pilha[i][$3.label].tipo != "bool")){
						yyerror("\nTIPOS INCOMPATIVEIS");						
					}
					
					adicional = "\t" + pilha[i][$1.label].label + " = " + verificaCastAtribuicao(pilha[i][$1.label].tipo, pilha[i][$3.label].tipo) + $3.label + ";\n";			
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| E '.' E {		

				string adicional;

				if(pilha[contexto][$1.label].tipo == "string" && pilha[contexto][$3.label].tipo == "string")
				{
					$$.label = criaAtributo("string", "");
					int tamanho = atoi(pilha[contexto][$1.label].tamanho.c_str()) + atoi(pilha[contexto][$3.label].tamanho.c_str());

					stringstream aux;   
				    aux << tamanho;
				    string tamanhoNovaString;
				    tamanhoNovaString = aux.str();
					pilha[contexto][$$.label].tamanho = tamanhoNovaString;

					string aux0 = "\tchar " + $$.label + "[" + tamanhoNovaString + "] = \"\";\n";
					string aux1 = "\tstrcat(" + $$.label + "," + $1.label + ");\n";
					string aux2 = "\tstrcat(" + $$.label + "," + $3.label + ");\n";
					adicional = aux0 + aux1 + aux2;
				}
				else
					yyerror("\nOPERACAO INVALIDA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			
			}
			| E TK_ARITMETICOS E {

				string adicional;		
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("aritmeticos",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " "+$2.label+" ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;

			}
			| E TK_RELACIONAIS E{

				string adicional;		
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);

				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " "+$2.label+" ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;				
			}
			| E TK_ANDOR E {

				string adicional;
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("AND_OR",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);
				
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = "\tint " + $$.label + " = " + $1.label + " && " + $3.label + ";\n";
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| TK_NEGADO E {

				string adicional;
				int i = procuraVariavel($2.label);
				string resultado = verificaCompatibilidadeVariaveis("!",pilha[contexto][$2.label].tipo,"");
				if(resultado == "erro") {
					yyerror("\nOPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					string adicional = "\tint " + $$.label + " = !" + $2.label + ";\n";
					$$.traducao = $2.traducao + adicional;
				}
					
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
					$$.traducao = "\tchar " + $$.label + ";\n\t" + $$.label + " = " + $1.label + ";\n";
				}
				else
					yyerror("\nSEGMENTATION FAULT\n");

			}
			| TK_STRING {

				$$.label = criaAtributo("string", $1.label);				
				$$.traducao = "\tchar " + $$.label + "[" + pilha[contexto][$$.label].tamanho + "]" + ";\n\tstrcpy(" + $$.label + "," + $1.label + ");\n";

			}
			| TK_ID {
				int i;
				if(i = procuraVariavel($1.label), i != -1)
					$$.label = pilha[i][$1.label].label;					
				
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
				int i;
				if(i = procuraVariavel($2.label), i != -1){
					
					$$.label = pilha[i][$2.label].label;
					$$.traducao = $2.traducao + "\tcout << " + $$.label + " << endl" + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
			| TK_READ TK_ID ';' {
				int i;
				if(i = procuraVariavel($2.label), i != -1){
			
					$$.label = pilha[i][$2.label].label;
					$$.traducao = "\tcin >> " + $$.label + ";\n";
				}
				else
					yyerror("\nVARIAVEL NAO DECLARADA");
			}
			| TK_IF '(' E ')' BLOCO {

				int i = procuraVariavel($3.label);
				string label = criaLabel();

				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + label + ";\n";					
					$$.traducao = $3.traducao + adicional + $5.traducao + label +":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
			| TK_IF '(' E ')' BLOCO TK_ELSE BLOCO {

				int i = procuraVariavel($3.label);
				string labelIf = criaLabel();
				string labelElse = criaLabel();
				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + labelIf + ";\n";					
					$$.traducao = $3.traducao + adicional + $5.traducao + "\tgoto " + labelElse + ";\n" + labelIf + ":\n" + $7.traducao + labelElse + ":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
			| TK_WHILE '(' E ')' BLOCO {
				
				int i = procuraVariavel($3.label);			
				string inicioWhile = criaLabel();
				string fimWhile = criaLabel();	
				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + fimWhile + ";\n";
					string adicional2 = "\tif(" + pilha[i][$3.label].label + ") goto " + inicioWhile + ";\n";					
					
					$$.traducao = inicioWhile + ":\n" + $3.traducao + adicional + $5.traducao + adicional2 + fimWhile + ":\n";
				}
				else
					yyerror("ERRO: OPERACAO INVALIDA");
			}
			| TK_DO BLOCO TK_WHILE '(' E ')' {

				int i = procuraVariavel($5.label);	
				string inicioWhile = criaLabel();
				if (pilha[i][$5.label].tipo == "bool")
				{
					string adicional = "\tif(" + pilha[i][$5.label].label + ") goto " + inicioWhile + ";\n";
					$$.traducao = inicioWhile + ":\n" + $2.traducao + $5.traducao + adicional;
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

	if(pilha[contexto][label1].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string aux2 = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label1 + ";\n";
		adicional = aux2 + "\t" + tipo + " " + label + ";\n\t" + label + " = " + aux + operando + label2 + ";\n";
	}
	else if(pilha[contexto][label2].tipo != resultado)
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

	for(int i = 0; i <= contexto; i++){
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
