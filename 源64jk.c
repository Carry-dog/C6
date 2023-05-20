#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int interchange(int u, int v);
int main(void)
{
	int x = 5, y = 10;
	printf("originally x=%d and y=%d.\n",x,y);
	interchange(x, y);
	printf("Now x=%d and y=%d\n", x, y);
	return 0;
}
int  interchange(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
	printf("now x=%d amd y=%d\n", u, v);
}

