#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int num[8];
	int i, j;
	num[0] = 2;
	for (i = 1;i<=7;i++)
	{
		num[i] = num[i - 1] * 2;

	}
	i = 0;
	do
		printf("%d\n", num[i++]);
	while (i < 8);
	
	return 0;
}