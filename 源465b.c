#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char ch;
	while ((ch = getchar()) != '#')
		putchar(ch);
	return 0;
}