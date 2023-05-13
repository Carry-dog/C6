#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int ch;
	int count = 0;
	while (count < 10)
	{
		ch = getchar();
		while (ch == 1)
			continue;
		putchar(ch);
		count++;
	}


	return 0;
}