#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int enter;
	printf("����������\n����0���µ����˳�\n");
	scanf("%d", &enter);
	while (enter > 0)
	{
		printf("%d��%d��\n", enter / 7, enter % 7);
		printf("����0�����˳�\n");
		scanf("%d", &enter);

	}
	printf("ллʹ��");

	return 0;
}