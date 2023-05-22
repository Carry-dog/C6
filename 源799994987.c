#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int  i, j, n, m;
	for (i = 1;i <= 5;i++)
	{
		for (j = 0;j < i;j++)
		printf("$");
		printf("\n");

	}

	return 0;
}