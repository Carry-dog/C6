#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int number = 22;
	int count = 1;
	while (count <= number)
	{
		printf("Be my valentine!\n");
		count++;
	}

	return 0;
}