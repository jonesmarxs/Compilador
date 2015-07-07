#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t0;
	t0 = 0;
	int t1;
	t1 = t0;
	int t2;
	t2 = 5;
	int t3[t2];
LABEL_0:
	int t4;
	t4 = 5;
	int t5;
	t5 = t1 < t4;
	if(!t5) goto LABEL_1;
	t3[t1] = t1;
	int t6;
	t6 = 1;
	int t7;
	t7 = t1 + t6;
	t1 = (int)t7;
	if(t5) goto LABEL_0;
LABEL_1:
	int t8;
	t8 = 0;
	int t9;
	t9 = 1;
	int t10[2];
	int t11;
	int t12;
	int t13;
	t11 = 0;
	t12 = 0;
	t13 = 0;
LABEL_2:
	t12 = t11 + t8;
	t10[t11] = t3[t12];
	t11 = t11 + 1;
	t13 = t11 < 2;
	if(t13) goto LABEL_2;
	int t14;
	t14 = 0;
	int t15;
	t15 = 0;
	int t16;
	t16 = 1;
	int t17;
	t17 = 2;
LABEL_3:
	cout << t10[t14] << endl;
	t14 = t14 + t16;
	t15 = t14 < t17;
	if(t15) goto LABEL_3;
	return 0;
}