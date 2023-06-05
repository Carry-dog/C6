#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
void fail(char*a, int b) {
	for (int i = 0;i < b;i++)
	{
		a[i] = a[9 - i];
		printf("%c\n", a[i]);
	}
}
int main(void)
{
	int l;
	char num[10] = "abcdefghij";
	scanf("%d", &l);
	fail(num, l);
	return 0;
}