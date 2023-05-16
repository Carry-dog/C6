#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{

	int a, b;
	for (a = 0;a<4;a++) {
		for (b = 0;b < 8;b++)
			printf("$");
		printf("\n");
	}

	return 0;


}