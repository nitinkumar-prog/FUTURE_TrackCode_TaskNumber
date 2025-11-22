/* 4. Write a program to reverse an array using a stack */
#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int x){ stack[++top] = x; }
int pop(){ return stack[top--]; }

int main(){
    int a[] = {1,2,3,4,5}, n = 5;
    for(int i=0;i<n;i++) push(a[i]);
    for(int i=0;i<n;i++) a[i] = pop();
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}
