#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char num[256];
	int i = 0;
	printf("enter \n");
	do {
		scanf("%c", &num[i]);
	}
	while (num[i]!='\n'&&++i);
	printf("\n");
	for (i--;i >=0;i--)
		printf("%c", num[i]);
	return 0;
}