#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
double Temperatures();
int main() {
	Temperatures();
	return 0;
}
double Temperatures() {
	double hua, shi, kai;
	const double k = 273.16, s = 5.0 / 9.0;
	const int ss = 32;
	printf("Enter the hua\nEnter q to quit\n");
	while (scanf("%lf", &hua) == 1)
	{
		shi = s * (hua - ss);
		kai = shi + k;
		printf("hua:%.2lf\nshi:%.2lf\nkai:%.2f\n", hua, shi, kai);
		printf("Enter the hua \nEnter the q to quit\n");
	}
	printf("done\n");
	return 0;
}