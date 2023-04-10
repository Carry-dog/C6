#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define all 64
int main(void)
{
	int difang = 1;
	float inquire = 1;
	float sum=1;
	printf("difang     iquire     sum\n");
	printf("%d       %e      %e\n",difang,inquire,sum);
	while (difang <= all)
	{
		float current;
		++difang;
		inquire = 2 * inquire;
		sum = sum + inquire;
		printf("%d     %e     %e\n",difang,inquire,sum);
	}
	printf("That is all\n");
	return 0;
}