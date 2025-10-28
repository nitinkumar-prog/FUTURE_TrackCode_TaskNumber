#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    return newNode;
}

struct Node* reverseRec(struct Node* head) {
    if (!head || !head->next) return head;
    struct Node* rest = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

void display(struct Node* head) {
    while(head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head=NULL;
    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    display(head);
    head = reverseRec(head);
    display(head);
    return 0;
}
