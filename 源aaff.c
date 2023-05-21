#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define months 12
#define years 5
int main(void)
{
	const float rain[years][months] =
	{
		{4.3,4.3,4.3,3.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,2.3,2.4,8.2,1.2,1.6,2.4,0.0,5.2,5.2,3.3},
		{5.3,1.3,5.3,3.3,2.3,3.3,3.3,3.3,3.3,3.3,3.3},
		{3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3},
		{3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3,3.3},
	};
	int year, month;
	float subtot, total;
	printf("years rainfall (inches)\n");
	for (year = 0, total = 0;year < years;year++) {
		for (month = 0, subtot = 0;month < months;month++)
		{
			subtot += rain[year][month];
		}
			printf("%f", subtot);
			total += subtot;
	}
	printf("%f \n", total / years);
	for (month = 0;month < months;month++) {
		for (year = 0;year <years;year++) {
			subtot += rain[year][month];

		}
		printf("%f   ", subtot / years);
	}
	return 0;
}




