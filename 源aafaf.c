#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
void up_and_down(int);
int main(void)
{
	up_and_down(1);
	return 0;
}
void up_and_down(int n)
{
	printf("level %d:n location %p\n", n, &n);//#1
	if (n < 4)
		up_and_down(n + 1);
	printf("level %d:n location %p\n", n, &n);//#2

}