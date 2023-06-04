#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define size 14
int main(void)
{
	char words[size];
	fgets(words, size, stdin);
	puts(words);
	fputs(words, stdout);
	puts(words);
	return 0;
}