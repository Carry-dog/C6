#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int enter,turn;
	printf("ÇëÊäÈëÕûÊı\n");
	scanf("%d", &enter);
	for (turn = enter + 10;enter <= turn;enter++) {
		printf("%d\n", enter);
	}
	return 0;
}