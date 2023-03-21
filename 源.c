#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	printf("Staring now:\n");
	one_three();
	printf("Done£¡\n");
	return 0;
}
int one_three(void)
{
	printf("One\n");
	two();
	printf("three\n");
	return 0;
}
int two(void)
{
	printf("two\n");
	return 0;
}

