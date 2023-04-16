#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#define y 1.609
#define j 3.785
int main(void)
{
	float jy, mile, oil;
	printf("请输入旅行里程\n");
	scanf("%f", &mile);
	printf("请输入消耗的油量\n");
	scanf("%f", &oil);
	printf("%.1f\n", mile / oil);
	jy = mile * y / oil*j;
	printf("%f", jy);

	return 0;
}