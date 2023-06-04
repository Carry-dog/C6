#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void fit(char*, unsigned int);
int main(void)
{
	char mesg[] = "things should be as simple as possible,""but not simple.";
	puts(mesg);
	fit(mesg, 38);
	puts(mesg);
	puts("Let't look at some more of the string.");
	puts(mesg + 39);
	return 0;
}
void fit(char* string, unsigned int size)
{
	if (strlen(string) > size)
		string[size] = '\0';
}