#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define slen 40
#define lim 5
int main(void)
{
	const char *my[lim] = {
		"ni hao",
		"wo hao",                      
		"dou hao"
	};
	char you[lim][slen] = {
		"n h",
		"w h",
		"d h"
	};
	int i;
	for (i = 0;i < lim;i++)
		printf("%s   %s\n", my[i], you[i]);
	printf("%zd %zd", sizeof(my), sizeof(you));
	return 0;
}