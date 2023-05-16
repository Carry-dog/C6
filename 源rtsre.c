#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char al[26];
	int i;
	char c = 'a';
	for (i = 0;i < 26;i++, c++)
		al[i] = c;
	for (i = 0;i < 26;i++)
		printf("%c\n", al[i]);
	return 0;
}