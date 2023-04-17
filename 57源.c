#define _CRT_SECURE_NO_WARNINGS 1<
#pragma warning(disable:6031)
#include<stdio.h>
#define girl 520
int main(void)
{
	 char birthday[40];
	printf("请输入你的生日\n");
	scanf("%s", birthday);
	printf("Your birthday is %s.\nAnd I will remenber it forever,because I %d you.", birthday, girl);
	return 0;
}