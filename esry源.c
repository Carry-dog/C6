#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
double number(void);
int main(void)
{
	while (1)
	{
		printf("%lf\n", number());
		getchar();
	}
	return 0;
}
double number(void)
{
	printf("Enter two float\n");
	double i, j,a;
	scanf("%lf %lf", &i, &j);
	a = (i - j) / (i * j);
	return a;
}