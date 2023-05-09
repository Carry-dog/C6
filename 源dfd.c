#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	const int freezing=0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("Enter the list of daily low temperature.\n");
	printf("Use celsius,and enter q to quit.\n");
	while(scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < freezing)
			cold_days++;
	}
	if (all_days != 0)
		printf("%d days total:%.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)
		printf("No data entered!\n");

	return 0;
}