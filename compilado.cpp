#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t0;
	t0 = 1;
	int t1;
	t1 = t0;
LABEL_0:
	int t2;
	t2 = 0;
	int t3;
	t3 = t1 > t2;
	if(!t3) goto LABEL_1;
	cout << t1 << endl;
	int t4;
	t4 = 1;
	int t6 = (int)t1;
	int t5;
	t5 = t6 - t4;
	t1 = (int)t5;
	if(t3) goto LABEL_0;
LABEL_1:
	return 0;
}

