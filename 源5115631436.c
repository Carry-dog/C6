#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i, j, m, n;
	printf("Enter the  two limits\n");
	scanf("%d %d", &m, &n);
	printf("Ori:    square:    cubic:\n");
	for (;m <= n;m++) {
		printf("%d%12d%12d\n", m, m * m, m * m * m);
	}
	return 0;
}