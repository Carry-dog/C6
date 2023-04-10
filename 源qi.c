#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, per_b;
	a_post = a++;
	per_b = ++b;
	printf("a a_post b per_b\n");
	printf("%ld %5d %5d %5d\n", a, a_post, b, per_b);
	b = ++a;
	++a;
	b = a;
	return 0;
}