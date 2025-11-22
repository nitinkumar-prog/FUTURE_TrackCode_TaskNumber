/* 11. Write a program to convert infix expression to postfix using stack */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char st[MAX];
int top = -1;

void push(char c){ if(top < MAX-1) st[++top] = c; }
char pop(){ if(top == -1) return '\0'; return st[top--]; }
char peek(){ if(top == -1) return '\0'; return st[top]; }

int prec(char c){
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

int main(){
    char infix[MAX];
    char postfix[MAX];
    int j = 0;

    /* Example input; replace with fgets/inp as needed */
    strcpy(infix, "A+B*C-(D/E+F)*G");

    for(int i = 0; infix[i] != '\0'; i++){
        char c = infix[i];
        if(isalnum(c)) postfix[j++] = c;
        else if(c == '(') push(c);
        else if(c == ')'){
            while(top != -1 && peek() != '(') postfix[j++] = pop();
            if(peek() == '(') pop();
        } else { /* operator */
            while(top != -1 && ((prec(peek()) > prec(c)) || (prec(peek()) == prec(c) && c != '^')) && peek() != '(')
                postfix[j++] = pop();
            push(c);
        }
    }

    while(top != -1){
        char t = pop();
        if(t != '(' && t != ')') postfix[j++] = t;
    }

    postfix[j] = '\0';
    printf("%s\n", postfix);
    return 0;
}
