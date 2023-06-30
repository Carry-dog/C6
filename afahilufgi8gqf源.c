#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define size 80
char* s_gets(char* st, int n);
int main(void)
{
	char flower[size];
	char addon[] = "s smell like  old shoes.";
	puts("What is your favorite flower?");
	if (s_gets(flower, size))
	{
		strcat(flower, addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("bye");

	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret;
	int i = 0;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}