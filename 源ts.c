#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int mini(int, int);
int main(void)
{
	int evil1, evil2;
	printf("Enter a pair of integers (q to quit):\n");
	while (scanf("%d %d", &evil1, &evil2) == 2)
	{

		printf("The lesser of %d and %d is %d.\n", evil1, evil2, mini(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("bey\n");
	return 0;
}
int mini(int n, int m)
{
	int min;
	if (n < m)
		min = n;
	if (n > m)
		min= m;
	return min;

}













