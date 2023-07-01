#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define size 10
#define bugsize 13
char* s_gets(char* st, int n);
int main(void)
{
	char flower[size];
	char addon[] = "s smell like old shoes.";
	char bug[bugsize];
	int available;
	puts("what is your favorite flower?");
	s_gets(flower, size);
	if ((strlen(addon) + strlen(addon) + 1) <= size)
		strcat(flower, addon);
	puts(flower);
	puts("what is your favorite bug?");
	s_gets(bug, bugsize);
	available = bugsize - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);
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
