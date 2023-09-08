#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
struct linknode
{
	int data;
	struct linknode* next;
};
void test()
{
	struct linknode node1 = { 10,NULL };
	struct linknode node2 = { 20,NULL };
	struct linknode node3 = { 30,NULL };
	struct linknode node4 = { 40,NULL };
	struct linknode node5 = { 50,NULL };
	struct linknode node6 = { 60,NULL };
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;
	struct linknode* pcurrent = &node1;
	while (pcurrent != NULL)
	{
		printf("%d ", pcurrent->data);
		pcurrent = pcurrent->next;

	}
}
int main(void) {
	test();
	system("pause");
	return 0;
}




