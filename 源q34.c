#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
double calculate(void);
double main(void)
{
	while(calculate()!='q')
	continue;
	return 0;
}
double calculate(void)
{
	double a;
	printf("enter a double number\n");
	scanf("%lf",& a);
	double add = a * a;
	while ((getchar()) != '\n');
	printf("%lf\nenter q to quit", add);
	return add;
 }