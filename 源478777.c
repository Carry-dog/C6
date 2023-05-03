#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;
	for (row = 0;row < ROWS;row++)
	{
		for (ch = 'A';ch < ('A' + 10);ch++)
			printf("%c", ch);
		printf("\n");
	}


	return 0;
}