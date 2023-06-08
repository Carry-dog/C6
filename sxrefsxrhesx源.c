#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i=0;
	int j=0;
	int k = 0;
	char ch;
	printf("Enter the num,if enter the # to quit\n");
	scanf("%c", &ch);
	while (ch != '#')
	{
		if (ch = ' ')
			i++;
		else if (ch = '\n')
			j++;
		else
			k++;
		scanf("%c", &ch);
	}
	printf("%d %d %d", i, j, k);
		


	return 0;
}