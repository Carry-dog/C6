#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char ch;
	while (1) {
		scanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}