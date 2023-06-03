#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define size 81
int main(void)
{
	char words[size];
	puts("Enter a string,please.");
	gets(words);
	printf("%s\n", words);
	puts(words);
	puts("done!");
	putchar('a');
	return 0;
}