#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	int t0[2];
	int t1;
	t1 = 1;
	t0[1] = t1;
	int t2;
	t2 = 1;
	t0[0] = t2;
	int t3;
	t3 = t0[2];
	cout << t3 << endl;
	return 0;
}

