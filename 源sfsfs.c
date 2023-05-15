#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	while ((getchar()) != '\n')
		putchar(a);
	return 0;
}