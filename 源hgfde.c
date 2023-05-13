#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		if (islower(ch))
			switch (ch)
			{
			case 'a':
				printf("argali\n");
				break;
			case 'b':
				printf("bird\n");
				break;
			case 'c':
				printf("cat\n");
				break;
			case 'd':
				printf("dog\n");
			default:
				printf("that is all\n");

			}
		else
			printf("i don't know\n");
	//while (getchar() != '\n')
		//	continue;
		printf("#");

	}
	printf("bey\n");

	return 0;
}