#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define ying_chun 2.54
int main(void)
{
	printf("������������ߣ�\n");
	float x, y;
	scanf("%f", &x);
	y = ying_chun * x;
	printf("���������%f", y);
	return 0;
}