#define _CRT_SECURE_NO_WARNIN1GS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define name "gigathink,inc"
#define address "101 megabuck plaza"
#define place "megapolis,ca 94904"
#define width 40
void starbar(void);
int main(void)
{
	starbar();
	printf("%s\n", name);
	printf("%s\n", address);
	printf("%s\n", place);
	starbar();
	return  0;
}
void starbar(void)
{
	int count;
	for (count = 1;count <= width;count++)
		putchar('*');
	putchar('\n');
}

