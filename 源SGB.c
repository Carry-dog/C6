#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tsize 45
struct film {
	char title[tsize];
	int rating;
	struct film* next;
};
char* s_gets(char* st, int n);
int main(void)
{
	struct film* head = NULL;
	struct film* prev, * current;
	char input[tsize];
	puts("enter first moive title");
	while (s_gets(input, tsize) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));
		prev= (struct film*)malloc(sizeof(struct film));
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("enter your rating <0-10>");
		scanf("%d", &current->rating);
		while (getchar() != '\n')
			continue;
		puts("enter next moive title(empty to quit)");
		prev = current;
	}

	if (head == NULL)
		printf("no data entered.");
	else
		printf("here is the movie list:\n");
	current = head;
	while (current != NULL)
	{
		printf("moive:%s  rating:%d\n",
			current->title,current->rating);
		current=current->next;
	}
	current = head;
	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
	printf("bye\n");
	return 0;

}
char* s_gets(char* st, int n)
{
	char* re;
	char* find;
	re = fgets(st, n, stdin);
	if (re)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar()!= '\n')
			continue;
	}
	return re;
	
}