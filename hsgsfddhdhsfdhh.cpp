#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define words "beast"
#define size 40
int main(void)
{
	const char* orig = words;
	char copy[size] = "Be the best that you can be.";
	char* ps;
	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);

	return 0;
}