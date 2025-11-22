/* 17. Write a program to implement two stacks in one array efficiently */
#include <stdio.h>

#define MAX 20
int arr[MAX], top1 = -1, top2 = MAX;

void push1(int x){ if(top1+1 < top2) arr[++top1] = x; }
void push2(int x){ if(top2-1 > top1) arr[--top2] = x; }

int pop1(){ if(top1==-1) return -1; return arr[top1--]; }
int pop2(){ if(top2==MAX) return -1; return arr[top2++]; }

int main(){
    push1(1); push1(2);
    push2(9); push2(8);

    printf("%d %d", pop1(), pop2());
    return 0;
}
