#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(int argc, char const *argv[]) {
    struct Node *head =(struct Node *) malloc(sizeof(struct Node));
    head->next=NULL;//시작 노드를 가리키는 노드로, 데이터가 들어있지 않습니다.

	InsertEnd(head, 4);
	printf("Insert 4 done\n");
    Print(head);
	InsertEnd(head, 1);
	printf("Insert 1 done\n");
    Print(head);
	InsertEnd(head, 2);
	printf("Insert 2 done\n");
    Print(head);
	InsertEnd(head, 8);
	printf("Insert 8 done\n");
	Print(head);
	Insert(head, 7, 2);
	printf("Insert 7 done at index 2\n");
	Print(head);
	Remove(head, 1);
	printf("Remove done at index 1\n");
	Print(head);
    printf("Data list size is : %d\n", Size(head));
	printf("Data at index 2: %d\n", IndexAt(head, 2)->data);
	printf("Data at last node: %d\n", Last(head)->data);	
	return 0;
}