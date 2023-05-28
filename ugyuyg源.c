#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int number(const double* a, int i);
int main(void)
{
	double ap[3]={ 2.5,3.3,53.6 };
	int num[5] = { 1,2,3,4,5 };
	const int* pc = num;
	printf("%f", *pc);
	return 0;
}