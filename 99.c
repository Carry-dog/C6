#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	while (1)
	{
		int a;
		float b = 3.366;
		scanf("%d", &a);
		printf("hello,happy dog,you are a %8.3f\n", a - b);
	}
	printf("That is all!");
	return 0;
}