#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define listsize 6
int main(void)
{
	const char* list[listsize] = {
		"astronomy","astounding",
		"astrophysics","ostracize",
		"asterism","astrophpbia"
	};
	int count = 0;
	int i;
	for (i = 0;i < listsize;i++)
		if (strncmp(list[i], "astro", 5) == 0)
		{
			printf("Found:%s\n", list[i]);
			count++;

		}
	printf("THE list containned %d words begining"
		" with astro.\n", count);
	return 0;
}