#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define stlen 10
int main(void)
{
	char words[stlen];
	puts("Enter stringd(empty line to quit):");
	while (fgets(words, stlen,stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);
	puts("done");

	return 0;
}