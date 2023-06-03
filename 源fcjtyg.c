#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define msg "I am special"
int main(void)
{
	char ar[] =msg;
	const char* pt = msg;
	printf("ar: %p\n", ar);
	printf("pt: %p\n", pt);
	printf("msg:%p\n", msg);

	return 0;
}