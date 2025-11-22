/* 6. Implement a stack that returns minimum element in O(1) time */
#include <stdio.h>

int stack[100], minStack[100], top = -1, minTop = -1;

void push(int x){
    stack[++top] = x;
    if(minTop == -1 || x <= minStack[minTop]) minStack[++minTop] = x;
}

int pop(){
    if(top == -1) return -1;
    int x = stack[top--];
    if(x == minStack[minTop]) minTop--;
    return x;
}

int getMin(){ return minStack[minTop]; }

int main(){
    push(5); push(3); push(2); push(4);
    pop();
    printf("%d", getMin());
    return 0;
}
