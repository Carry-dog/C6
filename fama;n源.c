#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[] = "abcde\0\0";
	printf("%d %d", strlen(a),sizeof(a));

	return 0;
}