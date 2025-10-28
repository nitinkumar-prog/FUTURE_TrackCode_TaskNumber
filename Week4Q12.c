//Write a function to search for a given element in a singly linked list. 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertEnd(struct Node** head, int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
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

int search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return 1;
        head = head->next;
    }
    return 0;
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

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    display(head);

    int key = 20;
    if (search(head, key))
        printf("Element %d found\n", key);
    else
        printf("Element %d not found\n", key);

    return 0;
}
