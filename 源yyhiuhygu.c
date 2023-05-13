#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float length, width;
	printf("Enter the length of the ractangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("length=%0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("width=%0.2f:\n", width);
		printf("area=%0.2f:\n", length*width);
		printf("enter the length\n");
	}
	printf("done");
	return 0;
}