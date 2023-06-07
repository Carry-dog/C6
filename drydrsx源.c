#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int years=0;
	float money = 100;
	while (money > 9)
	{
		money *= 1.08;
		money -= 10;
		years++;

	}
	printf("%d   %f\n", years++, money);
	printf("%d", years);
	return 0;
}