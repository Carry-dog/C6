#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define end 'g'
int main(void)
{
	char n = 'a' - 1;
	while (n++ <end)
	{
		printf("%c\n", n);

	}
	return 0;
}