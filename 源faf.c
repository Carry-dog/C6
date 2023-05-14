#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char response;
	int guess = 1;
	printf("pick an integer from 1 to 100.i will try to guess");
	printf("%d\n", guess);
	while ((response=getchar()) != 'y') {
	//	if (response == 'n')
			printf("%d?\n", guess++);
	//	else
		//	printf("i don't know\n");
	//	while (getchar() != '\n')
		//	continue;
	}

		printf("i could\n");
	return 0;
}