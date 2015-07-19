%{
#include "funcoes.hpp"

int yylex(void);
void yyerror(string);
%}

%token TK_NUM_INT TK_NUM_FLOAT TK_TRUE_FALSE TK_CHAR TK_STRING
%token TK_MAIN TK_ID TK_TIPO TK_FUNC TK_RETURN TK_VOID
%token TK_FIM TK_ERROR TK_PRINT TK_PRINT_LN TK_READ TK_IF TK_ELSE TK_WHILE TK_FOR TK_DO TK_ELSEIF
%token TK_ARITMETICOS TK_RELACIONAIS TK_AND_OR TK_INCREMENTO TK_BREAK TK_CONTINUE
%token TK_MAIOR TK_MENOR TK_MAIORIGUAL TK_MENORIGUAL TK_IGUAL TK_DIFERENTE
%token TK_AND TK_OR TK_NEGADO 

%left TK_AND_OR
%left TK_RELACIONAIS
%left '+' '-'
%left '*' '/'
%nonassoc '='
%start S

%%

S			: MAIN {
				cout << "#include<stdio.h>\n";
				cout << "#include<string.h>\n";
				cout << "#include<iostream>\n\n";
				cout << "using namespace std;\n\n";
				cout << "int main(void)\n{\n" ;
				cout << $1.traducao + "\treturn 0;\n}";
			}
			;

MAIN  : TK_MAIN '('')' BLOCO {				
				$$.traducao = $4.traducao; 
			}
			;

BLOCO		: {	contexto++;
				map<string, Atributos> tabela;
				pilha.push_back(tabela);
			}
			'{' COMANDOS '}' {

				$$.traducao = $3.traducao;
			
				contexto--;
				pilha.pop_back();
			}
			;

COMANDOS	: IO {
				$$.traducao = $1.traducao;
			}
			| E  COMANDOS {
				$$.traducao = $1.traducao + $2.traducao;
			}
			| DECLARACAO COMANDOS {
				$$.traducao = $1.traducao + $2.traducao;
			}
			| ATRIBUICAO COMANDOS {
				$$.traducao = $1.traducao + $2.traducao;	
			}
			| IO COMANDOS {
				$$.traducao = $1.traducao + $2.traducao;
			}
			| CONDICIONAL COMANDOS {
				 $$.traducao = $1.traducao + $2.traducao;
			}
			| LOOP COMANDOS {
				$$.traducao = $1.traducao + $2.traducao;
			}
			|
			;

DECLARACAO	: TK_TIPO TK_ID DECLARACAO_MULTIPLA ';' {

				int i = procuraVariavel($2.label);
				if(i != contexto){
					if($1.label == "string") {
						$$.label = criaAtributo("string", $2.label);
						$$.traducao = $2.traducao + "\tchar " + $$.label + "[0];\n";
						for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								pilha[contexto][it -> first].tipo = "string";
								pilha[contexto][pilha[contexto][it -> first].label].tipo = "string";
								$$.traducao += "\tchar " + pilha[contexto][it -> first].label + "[0];\n";
							}
						}
					}
					else {
						$$.label = criaAtributo($1.label, $2.label);
						string tipo = $1.label == "bool" ? "int" : $1.label;
						$$.traducao = $2.traducao + "\t"+ tipo + " " +$$.label + ";\n";

						for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								if(pilha[contexto][it -> first].tipo == "vetor_") {
									pilha[contexto][it -> first].tipo += $1.label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo += $1.label;
									pilha[contexto][pilha[contexto][it -> first].traducao].tipo += $1.label;
									$$.traducao += "\tint " + pilha[contexto][it -> first].tamanho + " = " + pilha[contexto][pilha[contexto][it -> first].tamanho].traducao + ";\n";
									$$.traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + "[" + pilha[contexto][it -> first].tamanho + "];\n";
								}
								else {
									pilha[contexto][it -> first].tipo = $1.label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo = $1.label;
									$$.traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + ";\n";	
								}
							}
						}
					}
					
				}
				else
					yyerror("Variavel \""+$2.label+"\" já foi declarada");

			}
			| TK_TIPO TK_ID '[' E ']' DECLARACAO_MULTIPLA ';' {

				int i = procuraVariavel($2.label);
				int j = procuraVariavel($4.label);

				if(i != contexto){
					$$.label = criaAtributo("vetor_"+$1.label, $2.label);
					pilha[contexto][$$.label].tamanho = pilha[j][$4.label].label;
					string tipo = $1.label == "bool" ? "int" : $1.label;
					$$.traducao = $2.traducao + $4.traducao + "\t" + tipo + " " + $$.label + "[" + pilha[j][$4.label].label + "]" + ";\n";

					for(map<string, Atributos>::iterator it = pilha[contexto].begin(); it != pilha[contexto].end(); ++it) {
							if(pilha[contexto][it -> first].tipo == "" || pilha[contexto][it -> first].tipo == "vetor_") {
								if(pilha[contexto][it -> first].tipo == "vetor_") {
									pilha[contexto][it -> first].tipo += $1.label;
									pilha[contexto][pilha[contexto][it -> first].traducao].tipo += $1.label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo += $1.label;
									$$.traducao += "\tint " + pilha[contexto][it -> first].tamanho + " = " + pilha[contexto][pilha[contexto][it -> first].tamanho].traducao + ";\n";
									$$.traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + "[" + pilha[contexto][it -> first].tamanho + "];\n";
								}
								else {
									pilha[contexto][it -> first].tipo = $1.label;
									pilha[contexto][pilha[contexto][it -> first].label].tipo = $1.label;
									$$.traducao += "\t"+ tipo + " " + pilha[contexto][it -> first].label + ";\n";	
								}
							}
						}
				}
				else
					yyerror("Variavel \""+$2.label+"\" já foi declarada");
			}
			;
DECLARACAO_MULTIPLA : ',' TK_ID DECLARACAO_MULTIPLA {
				int i = procuraVariavel($2.label);
				if(i != contexto){
					$$.label = criaAtributo("", $2.label);
				}
				else
					yyerror("Variavel \""+$2.label+"\" já foi declarada");
			}
			| ',' TK_ID '[' E ']' DECLARACAO_MULTIPLA {

				int i = procuraVariavel($2.label);
				int j = procuraVariavel($4.label);

				if(i != contexto){
					$$.label = criaAtributo("vetor_", $2.label);
					pilha[contexto][$$.label].tamanho = pilha[j][$4.label].label;
					pilha[contexto][pilha[contexto][$$.label].traducao].tamanho = pilha[j][$4.label].label;	
					pilha[contexto][pilha[contexto][$$.label].label].tamanho = pilha[j][$4.label].label;				
				}
				else
					yyerror("Variavel \""+$2.label+"\" já foi declarada");
			}
			|
			;
ATRIBUICAO	: TK_TIPO TK_ID '=' E ';' {

				string adicional;
				int i = procuraVariavel($2.label);
				if(i != contexto){
					$$.label = criaAtributo($1.label, $2.label);
					int j = procuraVariavel($4.label);
					
					if($1.label == "bool"){
						if(pilha[j][$4.label].tipo != "bool")
							yyerror("TIPOS INCOMPATIVEIS");
						else
							adicional = "\tint " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, pilha[j][$4.label].tipo) + $4.label + ";\n";
					}
					else if($1.label == "string"){
						i = procuraVariavel($$.label);
						if(pilha[j][$4.label].tipo != "string")
							yyerror("TIPOS INCOMPATIVEIS");
						else {
							adicional = "\tchar "  + $$.label + "[" + pilha[j][$4.label].tamanho + "]" + ";\n\tstrcpy(" + $$.label + "," + $4.label + ");\n";						
							pilha[j][$2.label].tamanho = pilha[j][$4.label].tamanho;
							pilha[i][$$.label].tamanho = pilha[j][$4.label].tamanho;
						}
					}
					else {
						if(pilha[j][$4.label].tipo == "bool" || pilha[j][$4.label].tipo == "string")
							yyerror("TIPOS INCOMPATIVEIS");
						else
							adicional = "\t" + $1.label + " " + $$.label + ";\n\t" + $$.label +" = " + verificaCastAtribuicao($1.label, pilha[j][$4.label].tipo) + $4.label + ";\n";
					}
				}
				else
					yyerror("Variavel \""+$2.label+"\" já foi declarada");
					
				$$.traducao = $2.traducao + $4.traducao + adicional;
			}
			| TK_ID '=' E ';' {

				string adicional;
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				if(i != -1){
					if((pilha[i][$1.label].tipo == "bool" && pilha[i][$3.label].tipo != "bool") 
					|| (pilha[i][$1.label].tipo != "bool" && pilha[i][$3.label].tipo == "bool")
					|| (pilha[i][$1.label].tipo == "string" && pilha[i][$3.label].tipo != "string")
					|| (pilha[i][$1.label].tipo != "string" && pilha[i][$3.label].tipo == "string")){
						yyerror("TIPOS INCOMPATIVEIS");						
					}
					if(pilha[i][$1.label].tipo == "string"){
						string novaLabel = criaAtributo("string","");
						Atributos atributo = pilha[i][$1.label];		

						pilha[i][atributo.traducao].label = novaLabel;
						pilha[i][novaLabel] = atributo;
						pilha[i][novaLabel].label = novaLabel;

						string aux = "\tchar " + novaLabel + "[" + pilha[j][$3.label].tamanho + "];\n";
						adicional = aux + "\tstrcpy(" + pilha[i][$1.label].label + "," + pilha[i][$3.label].label + ");\n";	
						
						pilha[i][novaLabel].tamanho = pilha[j][$3.label].tamanho;
						pilha[i][atributo.traducao].tamanho = pilha[j][$3.label].tamanho;
					}
					else
						adicional = "\t" + pilha[i][$1.label].label + " = " + verificaCastAtribuicao(pilha[i][$1.label].tipo, pilha[i][$3.label].tipo) + $3.label + ";\n";			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			}
			| TK_ID '[' E ']' '=' E ';'{

				string adicional;
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($6.label);	
				
				if(pilha[i][$1.label].tipo[0] == 'v' || pilha[i][$1.label].tipo[0] == 's'){
					if(i != -1){
						if((pilha[i][$1.label].tipo != "bool" && pilha[i][$6.label].tipo == "bool")
						|| (pilha[i][$1.label].tipo == "bool" && pilha[i][$6.label].tipo != "bool")
						|| (pilha[i][$1.label].tipo == "string" && pilha[i][$6.label].tipo != "char")
						|| (pilha[i][$1.label].tipo != "string" && pilha[i][$6.label].tipo == "string")) {
							yyerror("TIPOS INCOMPATIVEIS");						
						}
						adicional = "\t" + pilha[i][$1.label].label + "[" + $3.label + "] = " + pilha[j][$6.label].label + ";\n";		
					}
					else
						yyerror("VARIAVEL NAO DECLARADA");
				}
				$$.traducao = $1.traducao + $3.traducao + $6.traducao + adicional;
			}
			;
E			: E '.' E {		

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
					string varBase = "\tstrcat(" + $$.label + "," + $3.label + ");\n";
					adicional = aux0 + aux1 + varBase;
				}
				else
					yyerror("OPERACAO INVALIDA");

				$$.traducao = $1.traducao + $3.traducao + adicional;
			
			}
			| E TK_ARITMETICOS E {

				string adicional;		
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("aritmeticos",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo(resultado, "");
					adicional = formaExpressao(resultado, " "+$2.label+" ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;

			}
			| E TK_RELACIONAIS E {

				string adicional;		
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("RELACIONAIS",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
				}
				else{
					$$.label = criaAtributo("bool", "");
					adicional = formaExpressao(resultado, " "+$2.label+" ", $$.label, $1.label, $3.label);
				}

				$$.traducao = $1.traducao + $3.traducao + adicional;				
			}
			| E TK_AND_OR E {

				string adicional;
				int i = procuraVariavel($1.label);
				int j = procuraVariavel($3.label);
				string resultado = verificaCompatibilidadeVariaveis("AND_OR",pilha[i][$1.label].tipo,pilha[j][$3.label].tipo);
				
				if(resultado == "erro") {
					yyerror("OPERACAO INVALIDA");
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
					yyerror("OPERACAO INVALIDA");
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
				
				$$.label = criaAtributo("char", $1.label);				
				$$.traducao = "\tchar " + $$.label + ";\n\t" + $$.label + " = " + $1.label + ";\n";
				
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
					yyerror("VARIAVEL NAO DECLARADA");

			}
			| TK_TRUE_FALSE {
				$$.label = criaAtributo("bool", $1.label);
				if($1.label == "true")
					$$.traducao = "\tint " + $$.label + " = " + "1" + ";\n";
				else
					$$.traducao = "\tint " + $$.label + " = " + "0" + ";\n";
			}
			| TK_ID '[' E ']' {
				int i = procuraVariavel($1.label);	
				string adicional;
				if(i != -1){
					if(pilha[i][$1.label].tipo == "string" && pilha[i][$1.label].tamanho != "0")
					{
						$$.label = criaAtributo("char","");
						adicional = "\tchar " + $$.label + ";\n\t" + $$.label + " = " + pilha[i][$1.label].label + "[" + $3.label + "];\n";
					}
					else if(pilha[i][$1.label].tamanho != "0"){
						string tipo = pilha[i][$1.label].tipo.substr(6, pilha[i][$1.label].tipo.size() - 6);
						$$.label = criaAtributo(tipo, "");
						if(tipo != "bool")
							adicional = "\t" + tipo + " " + $$.label + ";\n\t" + $$.label + " = " + pilha[i][$1.label].label + "[" + $3.label + "];\n";
						else
							adicional = "\tint " + $$.label + ";\n\t" + $$.label + " = " + pilha[i][$1.label].label + "[" + $3.label + "];\n";
					}			
					else
						yyerror("OPERACAO INVALIDA");			
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");

				$$.traducao = $3.traducao + adicional;
			}
			| TK_ID TK_INCREMENTO {	
				int i = procuraVariavel($1.label);	
				string adicional;
				if(i != -1){
					$$.label = pilha[i][$1.label].label;
					$$.traducao = "\t" + pilha[i][$1.label].label + " = " + pilha[i][$1.label].label + " " + $2.label[0] +" 1;\n";
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			| TK_INCREMENTO TK_ID {		
				int i = procuraVariavel($2.label);		
				string adicional;
				if(i != -1){
					$$.label = pilha[i][$1.label].label;
					$$.traducao = "\t" + pilha[i][$2.label].label + " = " + pilha[i][$2.label].label + " " + $1.label[0] +" 1;\n";
				}	
				else
					yyerror("VARIAVEL NAO DECLARADA");		
			}
			| TK_ID '(' PARAMETRO ')' ';' {
				int i = verificaDeclaracaoFuncao($1.label);
				string aux = "\t" + $1.label + "(" + $3.traducao + ");\n";

				//verifica se a função existe
				if(i == -1)
					yyerror("FUNCAO NAO ENCONTRADA");

				//verifica se os parametros da funcao estão corretos
				verificaParametrosFuncao(i);
				
				$$.traducao = $3.label + aux;
			}
			| TK_ID '=' TK_ID '(' PARAMETRO ')' ';' {
				bool possuiFuncao = false;
				int i = verificaDeclaracaoFuncao($1.label);
				int localVar = procuraVariavel($1.label);
	
				if(listaFuncoes[i].tipo == "void")
					yyerror("FUNCAO VOID NAO RETORNA");

				//verifica se a função existe
				if(i == -1)
					yyerror("FUNCAO NAO ENCONTRADA");

				if(listaFuncoes[i].tipo != pilha[localVar][$1.label].tipo)
					yyerror("RETORNO DIFERENTE");

				verificaParametrosFuncao(i);

				$$.traducao = $5.label + "\t" + pilha[localVar][$1.label].label+ " = " +$3.label + "(" + $5.traducao + ");\n";				
			}
			| TK_ID '[' E ':' E ']' {
				int i = procuraVariavel($1.label);	
				int j = procuraVariavel($5.label);
				int tam1 = atoi(pilha[j][$5.label].traducao.c_str());
				int tam2 = atoi(pilha[j][$3.label].traducao.c_str());
				int tamanho = tam1 - tam2 + 1;

				if((tam1 < 0 || tam2 < 0) || (tam2 > tam1) || (tam1 > atoi(pilha[i][$1.label].tamanho.c_str()) || tam2 > atoi(pilha[i][$1.label].tamanho.c_str())))
					yyerror("OPERACAO INVALIDA");	

			    string tamanhoNovaString = intToString(tamanho);
			    string adicional;
				if(pilha[i][$1.label].tipo == "string" && pilha[i][$1.label].tamanho != "0")
				{
					$$.label = criaAtributo("string","");
				    pilha[contexto][$$.label].tamanho = tamanhoNovaString;

				    adicional = "\tchar " + $$.label + "[" + tamanhoNovaString + "];\n\t" + $$.label + "[" + tamanhoNovaString + "] = \'\\0\';\n"; 
				}
				else if(pilha[i][$1.label].tamanho != "0"){
					$$.label = criaAtributo(pilha[i][$1.label].tipo,"");
				    pilha[contexto][$$.label].tamanho = tamanhoNovaString;

				    string tipo = pilha[i][$1.label].tipo == "vetor_float" ? "float" : "int";
				    adicional = "\t"+ tipo + " " + $$.label + "[" + tamanhoNovaString + "];\n"; 
				}
				else
					yyerror("OPERACAO INVALIDA");	

				string varContador = criaAtributo("int","");
				string varBase = criaAtributo("int","");				  
				string varTeste = criaAtributo("int","");

				string inicioWhile = criaLabel();

				adicional += "\tint " + pilha[contexto][varContador].label + ";\n" + "\tint " + pilha[contexto][varBase].label+ ";\n" + "\tint " + pilha[contexto][varTeste].label + ";\n";
				adicional += "\t" + pilha[contexto][varContador].label + " = 0;\n" + "\t" + pilha[contexto][varBase].label + " = 0;\n" + "\t" + pilha[contexto][varTeste].label + " = 0;\n" + inicioWhile+":\n";
				adicional += "\t" + pilha[contexto][varBase].label + " = " + pilha[contexto][varContador].label + " + " + $3.label + ";\n";
				adicional += "\t" + pilha[contexto][$$.label].label + "[" + pilha[contexto][varContador].label + "]" + " = " + pilha[i][$1.label].label + "[" + pilha[contexto][varBase].label + "];\n";
				adicional += "\t" + pilha[contexto][varContador].label + " = " + pilha[contexto][varContador].label + " + " + "1;\n"; 
				adicional += "\t" + pilha[contexto][varTeste].label + " = " + pilha[contexto][varContador].label + " < " + tamanhoNovaString + ";\n";
				adicional += "\tif(" + pilha[contexto][varTeste].label + ") goto " + inicioWhile + ";\n";
				$$.traducao = $3.traducao + $5.traducao + adicional;		
			}
			;				

PARAMETRO: E ',' PARAMETRO {	
				$$.label = $1.traducao + $3.label;
				int i = procuraVariavel($1.label);
				parametrosVar.push_back(pilha[i][$1.label].tipo);
				$$.traducao = pilha[i][$1.label].label + ", " + $3.traducao;
			}
			| E
			{
				$$.label =  $1.traducao;
				int i = procuraVariavel($1.label);
				parametrosVar.push_back(pilha[i][$1.label].tipo);
				$$.traducao = pilha[i][$1.label].label ;
			}
			|;
			;
IO			: TK_PRINT_LN E PRINT_MULT ';' {
				int i;
				if(i = procuraVariavel($2.label), i != -1){
					if(pilha[i][$2.label].tipo[0] != 'v') {
						$$.label = pilha[i][$2.label].label;
						$$.traducao = $2.traducao + "\tcout << " + $$.label + ";\n" + $3.traducao + "\tcout << endl;\n";
					}
					else {
						if(pilha[i][$2.label].tamanho != "0") {
							string adicional = printVetor(i, $2.label);
							$$.traducao = $2.traducao + adicional + "\n" + $3.traducao + "\tcout << endl;\n";
						}	
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			| TK_PRINT E PRINT_MULT ';' {
				int i;
				if(i = procuraVariavel($2.label), i != -1){
					if(pilha[i][$2.label].tipo[0] != 'v'){
						$$.label = pilha[i][$2.label].label;
						$$.traducao = $2.traducao + "\tcout << " + $$.label + ";\n" + $3.traducao;
					}
					else {
						if(pilha[i][$2.label].tamanho != "0"){
							string adicional = printVetor(i, $2.label);
							$$.traducao = $2.traducao + adicional + "\n" + $3.traducao;
						}	
					}
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			| TK_READ TK_ID READ_MULT ';' {
				int i;
				if(i = procuraVariavel($2.label), i != -1){
					$$.label = pilha[i][$2.label].label;
					$$.traducao = $3.traducao + "\tcin >> " + $$.label + ";\n";
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			;

PRINT_MULT 	: ',' E PRINT_MULT {
				int i = procuraVariavel($2.label);

				if(i != -1) {
					$$.label = pilha[i][$2.label].label;
					$$.traducao = $2.traducao + "\tcout << " + $$.label + ";\n" + $3.traducao;
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			| {
				$$.traducao = "";
			}
			;
READ_MULT 	: ',' TK_ID READ_MULT {
				int i = procuraVariavel($2.label);

				if(i != -1) {
					$$.label = pilha[i][$2.label].label;
					$$.traducao = $2.traducao + "\tcin >> " + $$.label + ";\n" + $3.traducao;
				}
				else
					yyerror("VARIAVEL NAO DECLARADA");
			}
			|
			;

CONDICIONAL	: TK_IF '(' E ')' BLOCO {

				int i = procuraVariavel($3.label);
				string label = criaLabel();

				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + label + ";\n";					
					$$.traducao = $3.traducao + adicional + $5.traducao + label +":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
			| TK_IF '(' E ')' BLOCO ELSE {

				int i = procuraVariavel($3.label);
				string labelIf = criaLabel();
				string labelElse = criaLabel();

				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + labelIf + ";\n";					
					$$.traducao = $3.traducao + adicional + $5.traducao + "\tgoto " + labelElse + ";\n" + labelIf + ":\n" + $6.traducao + labelElse + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
			;

ELSE 		: TK_ELSEIF '(' E ')' BLOCO ELSE {
				string fimIf = criaLabel();
				string fimIf2 = criaLabel();
				int i = procuraVariavel($3.label);

				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + fimIf + ";\n";					
					$$.traducao = $3.traducao + adicional + $5.traducao + "\tgoto " + fimIf2  + ";\n" +  fimIf + ":\n" + $6.traducao + fimIf2 + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
			| TK_ELSE BLOCO
			{	
				$$.traducao =  $2.traducao ;				
			}
			;
LOOP		: TK_BREAK ';'
			{
				string label = criaLabel();
				pilhaBreak.push_back(label);

				$$.traducao = "\tgoto " + label + ";\n";
			}
			| TK_CONTINUE ';'
			{
				string label = criaLabel();
				pilhaContinue.push_back(label);
					
				$$.traducao = "\tgoto " + label + ";\n";
			}
			| TK_FOR '(' ATRIBUICAO E ';' E ')' BLOCO
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

				int i = procuraVariavel($3.label);
				int j = procuraVariavel($6.label);	

				if (pilha[j][$4.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[j][$4.label].label + ") goto " + fimFor + ";\n";

					$$.traducao = $3.traducao + inicioFor + ":\n" + $4.traducao + adicional + $8.traducao + labelContinue + $6.traducao +"\tgoto "+ inicioFor + ";\n"+fimFor + ":\n";
				}
			}
			| TK_WHILE '(' E ')' BLOCO {
				
				int i = procuraVariavel($3.label);			
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

				if (pilha[i][$3.label].tipo == "bool")
				{
					string adicional = "\tif(!" + pilha[i][$3.label].label + ") goto " + fimWhile + ";\n";
					string adicional2 = "\tif(" + pilha[i][$3.label].label + ") goto " + inicioWhile + ";\n";					
					
					$$.traducao = inicioWhile + ":\n" + $3.traducao + adicional + $5.traducao + labelContinue + adicional2 + fimWhile + ":\n";
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
			| TK_DO BLOCO TK_WHILE '(' E ')' ';'{

				int i = procuraVariavel($5.label);	
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

				if (pilha[i][$5.label].tipo == "bool")
				{
					string adicional = "\tif(" + pilha[i][$5.label].label + ") goto " + inicioWhile + ";\n"+fimWhile;
					$$.traducao = inicioWhile + ":\n" + $2.traducao + $5.traducao + labelContinue + adicional;
				}
				else
					yyerror("OPERACAO INVALIDA");
			}
			;
%%

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


