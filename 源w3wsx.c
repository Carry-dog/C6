#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	printf("Enter a danci\n");
	char n[40];
	scanf("%s", n);
	for (i=strlen(n) - 1;i >= 0;i--)
	{
		printf("%c", n[i]);
	}

	return 0;
}
