/* 15. Write a program to reverse a string using a stack */
#include <stdio.h>
#include <string.h>

char st[100];
int top = -1;

void push(char c){ st[++top] = c; }
char pop(){ return st[top--]; }

int main(){
    char s[] = "HELLO";
    int n = strlen(s);

    for(int i=0;i<n;i++) push(s[i]);
    for(int i=0;i<n;i++) s[i] = pop();

    printf("%s", s);
    return 0;
}
