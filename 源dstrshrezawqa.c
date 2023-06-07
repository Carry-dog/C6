#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int week = 0;
	int num = 5;
	while (num < 150)
	{
		week++;
		num = (num - week)*2;
		printf("week:%d    num:%d\n",week,num);
	}
	printf("done!");
	return 0;
}