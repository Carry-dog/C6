#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define water_weight 3.0e-32
#define kuatuo 950
int main(void)
{
	printf("请输入水的夸脱数\n");
	float x,c;
	scanf("%f", &x);
	c = kuatuo * x/ water_weight;
	printf("%f", c);
	return 0;
}