#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t3;
	int t2;
	int t0 = 10;
	int t1[t0];
	int t4;
	t4 = 0;
	t3 = t4;
LABEL_1:
	int t5;
	t5 = 10;
	int t6;
	t6 = t3 < t5;
	if(!t6) goto LABEL_0;
	t1[t3] = t3;
	goto LABEL_0;
	t3 = t3 + 1;
	goto LABEL_1;
LABEL_0:
	int t7;
	t7 = 0;
	int t8;
	t8 = 0;
	int t9;
	t9 = 1;
	int t10;
	t10 = t0;
LABEL_3:
	cout << t1[t7];
	t7 = t7 + t9;
	t8 = t7 < t10;
	if(t8) goto LABEL_3;

	return 0;
}