/* 18. Write a program to find next greater element for each element in an array using stack */
#include <stdio.h>

int st[100], top = -1;

void push(int x){ st[++top] = x; }
int pop(){ return st[top--]; }

int main(){
    int a[] = {4, 5, 2, 25};
    int n = 4, nge[4];

    for(int i=n-1;i>=0;i--){
        while(top!=-1 && st[top] <= a[i]) pop();
        if(top==-1) nge[i] = -1;
        else nge[i] = st[top];
        push(a[i]);
    }

    for(int i=0;i<n;i++) printf("%d -> %d\n", a[i], nge[i]);
    return 0;
}
