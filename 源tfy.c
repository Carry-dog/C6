#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num,div;
	bool isprime;
	printf("Please enter an integer for analysis;");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isprime = true;(div * div) <= num;div++) {
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n", num, div);
				isprime = false;
			}
		}
		if (isprime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis;");
		printf("Enter q to quit.\n");

	}
	printf("Bey.\n");

	return 0;
}