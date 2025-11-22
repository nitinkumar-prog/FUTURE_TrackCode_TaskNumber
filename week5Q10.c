/* 10. Write a program to evaluate a postfix expression using a stack */
#include <stdio.h>
#include <ctype.h>

int stack[100], top = -1;

void push(int x){ stack[++top] = x; }
int pop(){ return stack[top--]; }

int main(){
    char exp[] = "231*+9-";
    for(int i=0; exp[i] != '\0'; i++){
        if(isdigit(exp[i])) push(exp[i]-'0');
        else{
            int b = pop();
            int a = pop();
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
