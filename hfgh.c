#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char  name[40];
	int width;
	printf("����������\n");
	scanf("%s", name);
	width = printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	width -= 3;
	printf("\"%*s\"\n", width+3, name);
	return 0;
}