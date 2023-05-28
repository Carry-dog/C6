#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
void interchange(int* u, int* v);
int main(void)
{
	int x = 5, y = 10;
	printf("x=%d  y=%d\n", x, y);
	interchange(&x, &y);
	printf("x=%d   y=%d\n", x, y);
	return 0;
}
void interchange(int* u, int* v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}