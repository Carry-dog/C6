#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int num[40];
	for (int i = 0;i < 40;i++)
	{
		num[i] = i;
		printf("%d ",num[i]);
	}
	return 0;
}