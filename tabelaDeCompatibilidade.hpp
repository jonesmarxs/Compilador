#include <string.h>
#include <iostream>
#include <utility>
#define QUANT 61

using namespace std;

string tabelaCompatibilidade[QUANT][4] = { 					{"aritmeticos","int","int","int"},
										{"aritmeticos","int","float","float"},
										{"aritmeticos","int","bool","erro"},
										{"aritmeticos","int","char","char"},
										{"aritmeticos","int","string","erro"},
										{"aritmeticos","float","int","float"},
										{"aritmeticos","float","float","float"},
										{"aritmeticos","float","bool","erro"},
										{"aritmeticos","float","char","char"},
										{"aritmeticos","float","string","erro"},
										{"aritmeticos","bool","int","erro"},
										{"aritmeticos","bool","float","erro"},
										{"aritmeticos","bool","bool","erro"},
										{"aritmeticos","bool","char","erro"},
										{"aritmeticos","bool","string","erro"},
                                                                                {"aritmeticos","char","int","char"},
                                                                                {"aritmeticos","char","float","char"},
                                                                                {"aritmeticos","char","bool","erro"},
                                                                                {"aritmeticos","char","char","char"},
                                                                                {"aritmeticos","char","string","erro"},
                                                                                {"aritmeticos","string","int","erro"},
                                                                                {"aritmeticos","string","float","erro"},
                                                                                {"aritmeticos","string","bool","erro"},
                                                                                {"aritmeticos","string","char","erro"},
                                                                                {"aritmeticos","string","string","erro"},
										{"RELACIONAIS","int","int","int"},
										{"RELACIONAIS","int","float","float"},
										{"RELACIONAIS","int","bool","erro"},
										{"RELACIONAIS","int","char","int"},
										{"RELACIONAIS","float","int","float"},
										{"RELACIONAIS","float","float","float"},
										{"RELACIONAIS","float","bool","erro"},
										{"RELACIONAIS","float","char","float"},
										{"RELACIONAIS","bool","int","erro"},
										{"RELACIONAIS","bool","float","erro"},
										{"RELACIONAIS","bool","bool","erro"},
										{"RELACIONAIS","bool","char","erro"},
										{"RELACIONAIS","char","int","int"},
										{"RELACIONAIS","char","float","float"},
										{"RELACIONAIS","char","bool","erro"},
										{"RELACIONAIS","char","char","char"},
										{"AND_OR","int","int","erro"},
										{"AND_OR","int","float","erro"},
										{"AND_OR","int","bool","erro"},
										{"AND_OR","int","char","erro"},
										{"AND_OR","float","int","erro"},
										{"AND_OR","float","float","erro"},
										{"AND_OR","float","bool","erro"},
										{"AND_OR","float","char","erro"},
										{"AND_OR","bool","int","erro"},
										{"AND_OR","bool","float","erro"},
										{"AND_OR","bool","char","erro"},
										{"AND_OR","bool","bool","certo"},
										{"AND_OR","char","int","erro"},
										{"AND_OR","char","float","erro"},
										{"AND_OR","char","bool","erro"},
										{"AND_OR","char","char","erro"},
										{"!","int","","certo"},
										{"!","float","","certo"},
										{"!","bool","","certo"},
										{"!","char","","certo"} };