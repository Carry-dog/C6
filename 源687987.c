#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int num = 0;
	for (printf("Keep entering numbers!\n");num != 6;)
	{
		scanf("%d", &num);
		printf("That isn't I want!\n");
	}
	printf("That's the one I want!\n");

	return 0;
}