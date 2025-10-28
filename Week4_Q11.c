// Write a function to find the length of a singly linked list (recursively).
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertEnd(struct Node** head, int value) {
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

int lengthRecursive(struct Node* head) {
    if (head == NULL)
        return 0;
    return 1 + lengthRecursive(head->next);
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 5);
    insertEnd(&head, 10);
    insertEnd(&head, 15);
    insertEnd(&head, 20);

    display(head);
    printf("Length of Linked List: %d\n", lengthRecursive(head));

    return 0;
}
