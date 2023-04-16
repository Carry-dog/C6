#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float tall;
	char name[40];
	printf("请输入身高\n");
	scanf("%f", &tall);
	printf("请输入名字\n");
	scanf("%s", name);
	printf("%s,you are %.3f feet tall.", name, tall);
	return 0;
}