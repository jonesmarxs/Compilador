#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;


int main(void)
{
	int t1;
	int t0;
	int t2;
	t2 = 1;
	t1 = t2;
	int t3;
	t3 = 1;
	t0 = t3;
	int t4;
	t4 = t1 < t0;
	if(!t4) goto LABEL_2;
	cout << t1;
	cout << endl;
	goto LABEL_3;
LABEL_2:
	int t5;
	t5 = t1 == t0;
	if(!t5) goto LABEL_0;
	cout << t1;
	cout << t0;
	cout << endl;
	goto LABEL_1;
LABEL_0:
	cout << t0;
	cout << endl;
LABEL_1:
LABEL_3:
	return 0;
}