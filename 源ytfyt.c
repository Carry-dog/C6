#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define rate1 0.13230
#define rate2 0.15040
#define rate3 0.30025
#define rate4 0.34025
#define break1 360.0
#define break2 468.0
#define break3 720.0
#define base1 (rate1*break1)
#define base2 (base1+(rate2*(break2-break1)))
#define base3 (base2+(rate3*(break3-break2)))
int main(void)
{
	double kwh, bill;
	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);
	if (kwh <= break1)
		bill = rate1 * kwh;
	else if (kwh <= base2)
		bill = base1 + (rate2 * (kwh - break1));
	else if (kwh <= base3)
		bill = base2 + (rate3 * (kwh - break2));
	else
		bill = base3 + (rate4 * (kwh - break3));
	printf("%1.2f\n",bill);

	return 0;
}