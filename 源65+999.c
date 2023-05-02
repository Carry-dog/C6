#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int first = 46;
	const int next = 20;
	int ounces,cost;
	printf("ounces  cost\n");
	for (ounces = 1, cost = first;ounces <= 16;ounces++, cost += next)
		printf("%5d    $%4.2f\n", ounces, cost / 100.0);
	return 0;
}