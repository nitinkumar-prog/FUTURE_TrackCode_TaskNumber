/* 13. Write a program to evaluate a prefix expression using stack */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int st[100], top = -1;

void push(int x){ st[++top] = x; }
int pop(){ return st[top--]; }

int main(){
    char exp[] = "-+2*31 9";
    int n = strlen(exp);

    for(int i=n-1;i>=0;i--){
        if(isdigit(exp[i])) push(exp[i]-'0');
        else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'){
            int a = pop();
            int b = pop();
            switch(exp[i]){
                case '+': push(a+b); break;
                case '-': push(a-b); break;
                case '*': push(a*b); break;
                case '/': push(a/b); break;
            }
        }
    }

    printf("%d", pop());
    return 0;
}
