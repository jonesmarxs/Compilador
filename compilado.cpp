#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	char temp0[6] = "teste";
	char temp1[6];
	strcpy(temp1,temp0);
	char temp2[2] = "1";
	char temp3[2];
	strcpy(temp3,temp2);
	char temp4[8] = "";
	strcat(temp4,temp1);
	strcat(temp4,temp3);
	cout << temp4 << endl;
	return 0;
}

