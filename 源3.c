#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float x;
	printf("Enter a floating-point value:");
	scanf("%f", &x);
	printf("fixed-point notation:%f \n", x);
	printf("exponentital notation:%e\n", x);
	printf("p notation:%a\n",x);

	return 0;
}