#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0;index < SIZE;index++)
		scanf("%d", &score[index]);
	printf("The scores read in are as follows:\n");
	for (index = 0;index < SIZE;index++)
		printf("%5d", score[index]);
	printf("\n");
	for (index = 0;index < SIZE;index++)
		sum += score[index];
	average = (float)sum / 10;
	printf("Sum of score=%d,average=%.2f\n", sum, average);
	printf("That is handicap of %.0f.\n", average - PAR);

	return 0;
}