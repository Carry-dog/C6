#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define stlen 10
int main(void)
{
	int i;
	char words[stlen];
	puts("Enter stringd (empty line to quit):");
	while (fgets(words, stlen, stdin) != NULL && words != '\n')
		fputs(words, stdout);
	puts("done!");
	while (getchar() != '\n')
		continue;
	while (words[i] != '\n')
		i++;
	words[i] = '\0';
	return 0;
}