#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(int argc, char* arrgv[])
{
	int counter, i = 0;
	printf("Printf countinue  10 numbers!\n");
	printf("Please input the start number:");
	scanf("%d", &counter);
	while (i++ < 11)
	{
		printf("%d\n", counter++);
	}
	printf("program exit!");

	return 0;
}
