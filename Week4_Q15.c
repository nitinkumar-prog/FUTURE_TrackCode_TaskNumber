//Write a program to remove duplicates from a sorted linked list.
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

void removeDuplicates(struct Node* head) {
    struct Node* current = head;
    struct Node* temp;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            temp = current->next;
            current->next = current->next->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 3);
    insert(&head, 4);
    removeDuplicates(head);
    display(head);
    return 0;
}
