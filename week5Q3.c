/* 3. Check for stack overflow and underflow while implementing stack using array */
#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x){
    if(top == MAX-1) printf("Overflow\n");
    else stack[++top] = x;
}

int pop(){
    if(top == -1){ printf("Underflow\n"); return -1; }
    return stack[top--];
}

int main(){
    push(1); push(2); push(3); push(4); push(5); push(6);
    pop(); pop(); pop(); pop(); pop(); pop();
    return 0;
}
