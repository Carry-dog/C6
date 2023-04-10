#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int n = 0;
	size_t sad;
	sad = sizeof(int);
	printf("%d %zd %zd", n, sad, sizeof(int));
	return 0;
}