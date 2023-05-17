#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#define name "giaathunk inc"
#define address "101 megaback"
#define place "megapolis,ca 94904"
#define width 40
#define space ' '
void show_n_char(char ch, int num);
int main(void)
{
	int spaces;
	show_n_char('*', width);
	putchar('\n');
	show_n_char(space, 12);
	printf("%s\n", address);
	show_n_char(space, (width - strlen(place)) / 2);
	printf("%s\n", place);
	show_n_char('*', width);
	putchar('\n');
	return 0;
}
void show_n_char(char ch, int num)
{
	int count;
	for (count = 1;count <= num;count++)
		putchar(ch);



}