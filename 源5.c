#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define SEC_PER_YEAR 3.156e7
int main(void)
{
	float second, year;
	printf("Enter how many years old you are:");
	scanf("%f", &year);
	second = year * SEC_PER_YEAR;
	printf("You are:%.lf years old.\n",year);
	printf("And you are %e seconds old,too.\n", second);
	return 0;
}