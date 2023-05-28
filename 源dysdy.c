#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define size 5
void show(const double ar[], int n);
void mult(double ar[], int n, double mult);
int main(void)
{
	double dip[size] = { 20.0,17.66,8.2,15.3,22.22 };
	printf("the original dip arry:\n");
	show(dip, size);
	mult(dip, size, 2.5);
	printf("the dip array after calling mult_array():\n");
	show(dip, size);
	return 0;
}
void show(const double ar[], int n)
{
	int i;
	for (i = 0;i < n;i++)
		printf("%8.3f", ar[i]);
	putchar('\n');
}
void mult(double ar[], int n, double mult)
{
	int i;
	for (i = 0;i < n;i++)
		ar[i] *= mult;

}










