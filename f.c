#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar() != EOF))
		putchar(ch);
	return 0;
}