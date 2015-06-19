aqui
#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t0;
	int t1;
	t1 = 5;
	int t2[t1];
	int t3;
	t3 = 0;
	t0 = t3;
LABEL_0:
	int t4;
	t4 = 5;
	int t5;
	t5 = t0 < t4;
	if(!t5) goto LABEL_1;
	t2[t0] = t0;
	t0 = t0 + 1;
	goto LABEL_0;
LABEL_1:
	return 0;
}

