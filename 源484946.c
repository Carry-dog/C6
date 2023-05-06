#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int minute = 60;
	const int end = 0;
	int fengzhong,shi,feng;
	printf("请输入分钟\n输入0以下的值退出\n");
	scanf("%d", &fengzhong);
	while (fengzhong >end)
	{
		shi = fengzhong /minute;
		feng = fengzhong % minute;;
		printf("%d时%d分\n", shi, feng);
			printf("输入0以下的值退出\n");
			scanf("%d", &fengzhong);
	}
	printf("谢谢使用!");

	return 0;
}