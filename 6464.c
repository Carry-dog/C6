#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<float.h>
int main(void)
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("%d %d", FLT_DIG, DBL_DIG);

	return 0;
}