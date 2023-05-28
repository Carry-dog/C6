#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define months 12
int main(void)
{
	int days[months] = { 31,28,31,30,31,31,30,31,30,31,30,31 };
	int index;
	for (index = 0;index < months;index++)
		printf("months %2d has %d days.\n", index + 1, *(days + index));
	return 0;
}