#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(void)
{
	char t0[6];
	strcpy(t0,"teste");
	char t1[6];
	strcpy(t1,t0);
	int t2;
	t2 = 1;
	char t3;
	t3 = t1[t2];
	cout << t3 << endl;
	return 0;
}