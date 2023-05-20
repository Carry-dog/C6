#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i, j;char n = 'A';;
	for (i = 1;i <= 6;i++)
	{
		for (j = 0;j < i;j++, n++)
			printf("%c", n);
		printf("\n");

	}


	return 0;
}