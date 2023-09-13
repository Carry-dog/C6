#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char n[30];
	int i;
	for (i = 0;i < 5;i++)
	{
		scanf("%c", &n[i]);

	}
	int m = strlen(n);
	printf("%d", m);
	return 0;
}