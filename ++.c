#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int a,d,c;
	int b = 3;
	float n = 2.33;
	scanf("%d", &a);
	printf("%*d", a, b);
	scanf("%d %d", &d, &c);
	printf("%*.*f", d, c, n);
	return 0;
}