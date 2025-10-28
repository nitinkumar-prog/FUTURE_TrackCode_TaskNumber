//Write a program to merge two sorted singly linked lists into one sorted list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

struct Node* merge(struct Node* list1, struct Node* list2) {
    struct Node* result = NULL;
    if (!list1) return list2;
    if (!list2) return list1;
    if (list1->data <= list2->data) {
        result = list1;
        result->next = merge(list1->next, list2);
    } else {
        result = list2;
        result->next = merge(list1->next, list2->next);
        result->next = merge(list1, list2->next);
    }
    return result;
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node *list1 = NULL, *list2 = NULL, *mergedList = NULL;
    insert(&list1, 1);
    insert(&list1, 3);
    insert(&list1, 5);
    insert(&list2, 2);
    insert(&list2, 4);
    insert(&list2, 6);
    mergedList = merge(list1, list2);
    display(mergedList);
    return 0;
}
