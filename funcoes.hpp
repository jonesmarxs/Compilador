#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
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
vector<string> pilhaContinue;

int contexto = -1;
int linha = 1;

string criaVariavel();
string verificaCompatibilidadeVariaveis(string operador, string operandoA, string operandoB);
string criaAtributo(string tipo, string traducao);
string verificaCastAtribuicao(string tipo1, string tipo2);
string formaExpressao(string operando, string resultado, string label, string label1, string label2);
int procuraVariavel(string variavel);
string criaLabel();
void yyerror(string MSG);
string printVetor(int i, string label);

string printVetor(int i, string label){
	string varContador = criaAtributo("int","");				  
	string varTeste = criaAtributo("int","");
	string constUm = criaAtributo("int", "");
	string constTamanho = criaAtributo("int", pilha[i][label].tamanho);
	string inicioWhile = criaLabel();

	string adicional = "\tint " + pilha[contexto][varContador].label + ";\n"+"\t" + pilha[contexto][varContador].label + " = 0;\n";
	adicional += "\tint " + pilha[contexto][varTeste].label + ";\n" + "\t" + pilha[contexto][varTeste].label + " = 0;\n";
	adicional += "\tint " + pilha[contexto][constUm].label + ";\n" + "\t" + pilha[contexto][constUm].label + " = 1;\n";
	adicional += "\tint " + pilha[contexto][constTamanho].label + ";\n" + "\t" + pilha[contexto][constTamanho].label + " = "+ pilha[i][label].tamanho +";\n";
	adicional += inicioWhile + ":\n";
	adicional += "\tcout << " + pilha[i][label].label + "[" + pilha[contexto][varContador].label + "] << endl" + ";\n";
	adicional += "\t" + pilha[contexto][varContador].label + " = " + pilha[contexto][varContador].label + " + " + pilha[contexto][constUm].label + ";\n"; 
	adicional += "\t" + pilha[contexto][varTeste].label + " = " + pilha[contexto][varContador].label + " < " + pilha[contexto][constTamanho].label + ";\n";
	adicional += "\tif(" + pilha[contexto][varTeste].label + ") goto " + inicioWhile + ";\n";

	return adicional;
}
string formaExpressao(string resultado, string operando, string label, string label1, string label2){

	string adicional, tipo = resultado;
	int i = procuraVariavel(label1);
	int j = procuraVariavel(label2);
	if(operando == " < " || operando == " > " || operando == " <= " || operando == " >= " || operando == " == " || operando == " != ")
		tipo = "int";

	if(pilha[i][label1].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string varBase = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label1 + ";\n";
		adicional = varBase + "\t" + tipo + " " + label + ";\n\t" + label + " = " + aux + operando + label2 + ";\n";
	}
	else if(pilha[j][label2].tipo != resultado)
	{
		string aux = criaAtributo(resultado, "");
		string varBase = "\t" + resultado + " " + aux + " = " + '(' + resultado + ')' + label2 + ";\n";
		adicional = varBase+"\t" + tipo + " " + label + ";\n\t" + label + " = " + label1 + operando + aux + ";\n";
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
void yyerror(string MSG) {
	stringstream aux;
    aux << linha;
	cout << MSG + " - Linha: " + aux.str() << endl;
	exit (0);
}