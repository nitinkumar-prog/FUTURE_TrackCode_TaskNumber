//Write a program to find the middle node of a linked list without using its length. 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to find the middle node
void findMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle element is: %d\n", slow->data);
}

int main() {
    struct Node* head = NULL;

    // Creating a sample linked list
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);

    findMiddle(head);

    return 0;
}
