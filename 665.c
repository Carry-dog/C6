#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	float speed, space;
	printf("�����������ٶ�\n");
	scanf("%f", &speed);
	printf("�������ļ���С\n");
	scanf("%f", &space);
	printf("At %.2f megatbits per second,a file of %.2f megabytes download in %.2f seconds. \n",speed,space,space*8/speed);
	return 0;
}