#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int minute = 60;
	const int end = 0;
	int fengzhong,shi,feng;
	printf("���������\n����0���µ�ֵ�˳�\n");
	scanf("%d", &fengzhong);
	while (fengzhong >end)
	{
		shi = fengzhong /minute;
		feng = fengzhong % minute;;
		printf("%dʱ%d��\n", shi, feng);
			printf("����0���µ�ֵ�˳�\n");
			scanf("%d", &fengzhong);
	}
	printf("ллʹ��!");

	return 0;
}