#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int sum = 0;
	int input;
	int i=1;
	printf("�����빤������\n");
	scanf("%d", &input);
	while (input-- > 0)
	{
		sum += i;
		i++;

	}printf("�ܽ�:%d", sum);

	return 0;
}