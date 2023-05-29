#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int length;
	double sum = 0.0;
	printf("Enter the times,0to quit\n");
	scanf("%d", &length);
	while (length > 0) {
		for (int i = 1;i <= length;i++)
		{
			sum = sum + 1.0 / i;
		}
		printf("the sum for %lf\n", sum);
		sum = 0.0;
		for (int i = 1;i <= length;i++)
		{
			if (i % 2 == 0)
				sum = sum - 1.0 / i;
			else
				sum = sum + 1.0 / i;

		}
		printf("the number is %lf\n", sum);
		printf("Enter the number ,0 to quit\n");
		scanf("%d", &length);
	}
	return 0;
}