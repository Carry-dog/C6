#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i, j;
	int num = 5;
	char n = 'A';
	for (i = 1;i <= 5;i++)
	{
		for (j = 0;j < num - i;j++)
		{
			printf(" ");}
		for (j = 0,n='A';j < i;j++)
			printf("%c", n++);
		n = n - 2;
		for (j = 1;j < i;j++) {
			printf("%c", n--);
		}

		printf("\n");
	}
	return 0;
}