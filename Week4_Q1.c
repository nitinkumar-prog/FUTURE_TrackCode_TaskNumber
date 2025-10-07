//1. Write a program to create a singly linked list and display all its elements.
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void displayList(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("Linked List Elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    
    head->next = second;
    second->next = third;
    third->next = NULL;

    
    displayList(head);

    return 0;
}
