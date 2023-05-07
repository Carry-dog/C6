#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	;
	int enter, i;
	printf("ÇëÊäÈëÕûÊı\n");
	scanf("%d", &enter);
	for (i = 0;i <= 10;i++)
		printf("%d\n", enter++);
	return 0;
}