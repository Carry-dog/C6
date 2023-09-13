#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
void add(int n)
{
	printf("%d %p\n", n,&n);
	if (n < 4)
		add(n + 1);
		printf("%d %p      ", n, &n);
}
int main(void)
{

	add(1);
	return 0;
}