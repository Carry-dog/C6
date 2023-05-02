#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int secret = 13;
	int enter;
	do
	{
		printf("To enter the club\n");
		printf("Please enter the secret code number:");
		scanf("%d", &enter);
	} while (enter != secret);
	printf("Congratulations!You are cured!");
	return 0;
}