#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t0;
	t0 = 2;
	int t1[t0];
	int t2;
	t2 = 1;
	int t3;
	t3 = 1;
	t1[t2] = t3;
	int t4;
	t4 = 0;
	int t5;
	t5 = 1;
	t1[t4] = t5;
	int t6;
	t6 = 1;
	int t7;
	t7 = t1[t6];
	cout << t7 << endl;
	return 0;
}
