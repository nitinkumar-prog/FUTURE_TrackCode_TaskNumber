/* 1. Implement a stack using an array with operations push(), pop(), peek(), and display() */
#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int x){ if(top < MAX-1) stack[++top] = x; }
int pop(){ if(top == -1) return -1; return stack[top--]; }
int peek(){ if(top == -1) return -1; return stack[top]; }
void display(){ for(int i = top; i >= 0; i--) printf("%d ", stack[i]); printf("\n"); }

int main(){
    push(10); push(20); push(30);
    display();
    pop();
    display();
    return 0;
}
