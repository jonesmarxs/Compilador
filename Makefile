all: 	
		clear
		lex lexica.l
		yacc -d sintatica.y
		g++ -o glf y.tab.c -lfl

		./glf < codigo.bat > compilado.cpp

		g++ -o compilado compilado.cpp

		./compilado
