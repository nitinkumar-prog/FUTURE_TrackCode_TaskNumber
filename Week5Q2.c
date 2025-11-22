/* 2. Implement a stack using linked list with all standard stack operations */
#include <stdio.h>
#include <stdlib.h>

struct Node{ int data; struct Node* next; };
struct Node* top = NULL;

void push(int x){
    struct Node* t = malloc(sizeof(struct Node));
    t->data = x;
    t->next = top;
    top = t;
}

int pop(){
    if(top == NULL) return -1;
    int x = top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);
    return x;
}

int peek(){ if(top == NULL) return -1; return top->data; }

void display(){
    struct Node* p = top;
    while(p){ printf("%d ", p->data); p = p->next; }
    printf("\n");
}

int main(){
    push(10); push(20); push(30);
    display();
    pop();
    display();
    return 0;
}
