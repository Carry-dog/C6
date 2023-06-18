#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int first, i, j, k;
	first = 1;
	printf("Enter the number\n");
	scanf("%d", &j);
	for (i = 1;i<= j;i++)
	{
		scanf("%d", &k);
		if (k % 2 == 0) {
			if (first == 1)
			{
				printf("%d", k);
				first = 0;
			}
			else
				printf(" %d", k);

		}
	}
	return 0;
}