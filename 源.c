#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<float.h>
#include<limits.h>
#include<stdio.h>
int main(void)
{
	int big_int = 2147483647;
	float big_float = 3.4e38;
	float small_float = 10.0/3;
	printf("%d\n", big_int + 1);
	printf("%f\n", big_float * 10);
	printf("%f\n", small_float);
	printf("%f\n", FLT_MAX);
	printf("%ld", INT_MAX);
	return 0;
}