#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define stop '|'
int main(void)
{
	char c;
	char prev;
	long n_chars = 0L;
	char n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;
	printf("Enter text to be analyzed (| to terminate):\n");
	prev = 'n';
	while ((c = getchar()) != stop)
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) && inword)
			inword = false;
		prev = c;
	}
	if (prev != '\n')
		p_lines = 1;
	printf("character=%ld,words=%d,line=%d£¬",
		n_chars, n_words, n_lines);
	printf("partial lines=%d\n", p_lines);

	return 0;
}