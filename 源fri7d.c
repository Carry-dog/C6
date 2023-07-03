#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define answer "grant"
#define size 40
char* s_gets(char* n, int m);
int main(void)
{
	char try[size];
	puts("who is buried in grannt's tomb?");
	s_gets(try, size);
	while (try != answer)
	{
		puts("no");
		s_gets(try, size);
	}
	puts("that's right");
	return 0;
}
char* s_gets(char* n,int m)
{
	char* ret;
	int i = 0;
	ret = fgets(n, m, stdin);
	if (ret)
	{
		while (n[i] != '\n' && n[i] != '\0')
			i++;
		if (n[i] == '\n')
			n[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}