#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char num[30];
	for (int i = 0;i < 5;i++)
	{
		num[i] = i;
		printf("%d\n", num[i]);
	}
	return 0;
}