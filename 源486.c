#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
    float a = 4;
	float sum=0;
	while (a > 0)
	{
		sum = sum + a;
		a--;
		printf("%f\n",sum);
	}
	return 0;
}