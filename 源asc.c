#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define size 4
int main(void) {
	int some_data[size] = { 1492,1066 };
	int i;
	printf("%2s%14s\n", "i", "some_data[i]");
	for (i = 0;i < size;i++)
	printf("%2d%14d\n", i, some_data[i]);
	return 0;
}