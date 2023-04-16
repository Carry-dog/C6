#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	while (1) {
		unsigned width, precision;
		int number = 256;
		double weight = 242.5;
		printf("Enter a field :\n");
		scanf("%d", &width);
		printf("The number is :%*d:\n", width, number);
	}

	return 0;
}