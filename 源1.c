#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int x;
	printf("请输入一个ASCII码值");
	scanf("%d", &x);
	printf("%c", x);
	return 0;
}