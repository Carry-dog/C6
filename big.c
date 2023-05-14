#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long a, long b);
int main(void)
{
	const long MIN = -1000000000L;
	const long MAX = +1000000000L;
	long stop;
	long start;
	double answer;

	printf("Enter the limits :\n"
		"lower limit:");
	start = get_long();
	printf("upper limit:");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("%ld %ld %g\n", start, stop, answer);
		}

	}

	return 0;
}


















