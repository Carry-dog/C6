#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{

	int num[8];
	int i;
	int j=0;
	for (i = 0;i < 8;i++)
	{
		printf("Enter the number\n");
		scanf("%d", &num[i]);
	}
	for(i=7;i>=0;)
	printf("%d\n", num[i--]);
	return 0;
}