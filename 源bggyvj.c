#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float i, j;
	i = j = 100;
	int year = 0;
	do {
		i = i + 100 * 0.1;
		j = j + j * 0.05;
		year++;
	} while ((j - i) < 0);
	printf("%d  %f  %f\n", year, i, j);
	printf("done!0");
	return 0;
}