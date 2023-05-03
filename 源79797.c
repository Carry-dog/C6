#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf("Enter a number and the positive integer power");
	printf("\nEnter q to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2){
		xpow = power(x, exp);
	printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
}

	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1;i <= p;i++)
		pow *= n;
	return pow;
}