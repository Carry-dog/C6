#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char xing[20];
	char name[20];
	printf("«Î ‰»Î√˚◊÷\n");
	scanf("%s", name);
	printf("«Î ‰»Î–’\n");
	scanf("%s", xing);
	printf("%s %s\n", xing, name);
	printf("%*d %*d", strlen(xing),strlen(xing), strlen(name), strlen(name));

	return 0;
}
