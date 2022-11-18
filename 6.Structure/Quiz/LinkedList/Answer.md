# 문제 해설

linkedlist를 다음과 같이 작성합니다.

```C
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

struct Node *IndexAt(struct Node *head, int index) {
    if (head == NULL || index < 0)
        return NULL;
    else {
        struct Node* current_node = head->next;
        for (int i = 0; i < index; i++) {
            if (current_node == NULL)
                return NULL;
            current_node = current_node->next;
        }
        return current_node;
    }
}

struct Node *Last(struct Node *head) {
    if (head == NULL)
        return NULL;
    else {
        struct Node* last_node = head;
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            last_node = current_node;
            current_node = current_node->next;
        }
        return last_node;
    }
}

int Size(struct Node *head) {
    if (head == NULL)
        return -1;
    else {
        int size = 0;
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            current_node = current_node->next;
            size++;
        }
        return size;
    }
}

int Insert(struct Node *head, int data, int index) {
    if (head == NULL || index < 0 || index > Size(head))
        return -1;
    else {
        struct Node* next_node = IndexAt(head, index);
        if (next_node == NULL)
            return InsertEnd(head, data);
        else {
            struct Node* prev_node = next_node->prev;
            struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
            if (new_node == NULL)
                return -1;
            new_node->data = data;
            new_node->prev = prev_node;
            new_node->next = next_node;

            prev_node->next = new_node;
            next_node->prev = new_node;
            return data;
        }
    }
}

int InsertEnd(struct Node *head, int data) {
    if (head == NULL)
        return -1;
    else {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        if (new_node == NULL)
            return -1;
        new_node->data = data;
        new_node->next = NULL;

        struct Node* last_node = Last(head);
        last_node->next = new_node;
        new_node->prev = last_node;
        return data;
    }
}

int Remove(struct Node *head, int index) {
    if (head == NULL)
        return -1;
    else {
        struct Node* delete_node = IndexAt(head, index);
        if (delete_node == NULL)
            return -1;
        else {
            int data = delete_node->data;
            delete_node->prev->next = delete_node->next;
            if (delete_node->next != NULL)
                delete_node->next->prev = delete_node->prev;

            delete_node->prev = NULL;
            delete_node->next = NULL;
            free(delete_node);
            delete_node = NULL;
            return data;
        }
    }
}

int Print(struct Node *head) {
	if (head == NULL)
        return -1;
    else {
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            printf("%d -> ", current_node->data);
            current_node = current_node->next;
        }
        printf("END\n");
        return 0;
    }
}
```