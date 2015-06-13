#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int temp0;
	temp0 = 2;
	int temp1;
	temp1 = temp0;
	int temp2;
	temp2 = temp1;
	int temp3 = temp1 + temp2;
	cout << temp3 << endl;
	int temp4 = temp1 < temp2;
	if(!temp4) goto FIM;
	int temp5;
	temp5 = 1;
	int temp6;
	temp6 = temp5;
	cout << temp1 << endl;
FIM:
	cout << temp4 << endl;
	return 0;
}

