#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int* p = "Klingon";
	printf("Klingon");
	printf(":%s", "Klingon");
	return 0;
}