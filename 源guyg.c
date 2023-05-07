#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int enter;
	printf("请输入天数\n输入0以下的数退出\n");
	scanf("%d", &enter);
	while (enter > 0)
	{
		printf("%d周%d天\n", enter / 7, enter % 7);
		printf("输入0以下退出\n");
		scanf("%d", &enter);

	}
	printf("谢谢使用");

	return 0;
}