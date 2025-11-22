/* 19. Write a program to design a stack using two queues */
#include <stdio.h>

int q1[100], q2[100];
int f1=0, r1=-1, f2=0, r2=-1;

void enqueue1(int x){ q1[++r1] = x; }
void enqueue2(int x){ q2[++r2] = x; }
int dequeue1(){ return q1[f1++]; }
int dequeue2(){ return q2[f2++]; }

void push(int x){
    enqueue2(x);
    while(f1 <= r1)
        enqueue2(dequeue1());
    int t;
    t=f1; f1=f2; f2=t;
    t=r1; r1=r2; r2=t;
}

int pop(){ return dequeue1(); }

int main(){
    push(10); push(20); push(30);
    printf("%d ", pop());
    printf("%d ", pop());
    return 0;
}
