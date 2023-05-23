#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	double number(void);
	while(1)
	{
		double i, j;
		printf("Enter two float number\n");
		while(scanf("%lf %lf", &i, &j) == 2)
		{
			printf("%lf\n", (i - j) / (i * j));
			printf("Enter two float number\n");
		}
			printf("please enter two float\n");
			getchar();
	}
	

	return 0;
}
