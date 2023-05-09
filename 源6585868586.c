#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i = 0;
	int money=1;
	int zong,day;
	printf("enter the days\n");
	scanf("%d", &day);
	while (i++ < day)
	{
		zong = money * money;
		printf("%d\n", zong);
		money++;
	}


	return 0;
}