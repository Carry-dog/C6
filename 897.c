#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float a;
	printf("«Î ‰»Î∏°µ„ ˝\n");
	scanf("%f", &a);
	printf("The input is %.1f or %.1e\n",a,a);
	printf("The input is %+.3f or %.3E", a,a);
	return 0;
}