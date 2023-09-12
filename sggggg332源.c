#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
void fun(int* x, int* y)
{
	*x = *y;
}
int main(void)
{
	int* a;
	int* b;
	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));
	if (a != NULL && b != NULL)
	{
		*a = 1;*b = 2;
	}
	fun(a, b);
	printf("%d %d", *a, *b);
	free(a);
	free(b);
	return 0;
}