#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define period '.'
int main(void)
{
	char ch;
	int charcount = 0;
	while ((ch = getchar()) != period)
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}
	printf("There are %d non-quote characters.\n", charcount);


	return 0;
}