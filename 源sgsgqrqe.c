#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void  fit(char* string, unsigned int size) {
	if (strlen(string) > size)
		string[size] = '\0';
}
int main(void)
{
	char num[40];

	fit(num, 8);
	pritnf("hello\n");
	return 0;
}