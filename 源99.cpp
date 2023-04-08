#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define pingtuo 2
#define ansi 8
#define tangsao 2
#define chashao 3
int main(void)
{
	printf("«Î ‰»Î±≠ ˝£∫\n");
	float  beishu,pint,ounce,spoon,tea;
	scanf("%f",&beishu);
	pint = beishu / pingtuo;
	ounce = beishu * ansi;
	spoon = ounce * tangsao;
	tea = spoon * chashao;
	printf("%.lf\n%.lf\n%lf\n%.lf\n%.lf",beishu pint, ounce, spoon, tea);
	return 0;
}