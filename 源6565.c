#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int t;
	double time, power;
	int limit;
	printf("Enter the number of terms you want:");
	scanf("%d", &limit);
	for (time = 0, power = 1, t = 1;t <= limit;t++, power *= 2.0)
	{
		time += 1.0 / power;
		printf("time=%f when terms=%d.\n", time,t);


	}


	return 0;
}