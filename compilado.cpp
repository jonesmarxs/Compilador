#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	char t1[0];
	char t0[0];
	char t2[6];
	strcpy(t2,"teste");
	char t3[6];
	strcpy(t3,t2);
	int t4;
	t4 = 0;
	char t5;
	t5 = '2';
	t3[t4] = t5;
	char t6[7];
	strcpy(t6,"teste1");
	char t7[7];
	strcpy(t7,t6);
	int t8;
	t8 = 0;
	int t9;
	t9 = 2;
	char t10[3];
	t10[3] = '\0';
	int t11;
	int t12;
	int t13;
	t11 = 0;
	t12 = 0;
	t13 = 0;
LABEL_0:
	t12 = t11 + t8;
	t10[t11] = t3[t12];
	t11 = t11 + 1;
	t13 = t11 < 3;
	if(t13) goto LABEL_0;
	char t14[3];
	strcpy(t14,t10);
	return 0;
}
