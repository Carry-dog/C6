#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	double num[8],add[8];
	int i;
	printf("Enter the number for first\n");
	for (i = 0;i < 8;i++)
	{
		scanf("%lf", &num[i]);
		printf("Enter the number\n");
	}
	add[0] = num[0];
	for (i = 1;i < 8;i++)
		add[i] = add[i - 1] + num[i]; 
	for (i = 0;i < 8;i++)
	{
		printf("%5lf  ",num[i]);
		
	}
	printf("\n");
	for (i = 0;i < 8;i++)
	{
		printf("%5lf ", add[i]);
	}

	return 0;
}