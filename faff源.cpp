#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	printf("Enter the number\n");
	char num[40];
	for (int i = 0;i < 6;i++)
	{
		printf("Enter the number\n");
		scanf("%c", &num[i]);
		printf("%c\n", num[i]);
	}

	return 0;
}