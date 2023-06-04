#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define size 5
int main(void)
{
	char num[size];
	int i;
	printf("Enter the line          >>");
	while (fgets(num, size, stdin) != NULL && num[0] != '\n') {
		i = 0;
		while (num[i] != '\n' && num[i] != '\0')
			i++;
		if (num[i] == '\n')
			num[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
		puts(num);
	}
	puts("done");
	return 0;
}