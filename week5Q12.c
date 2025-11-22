/* 12. Write a program to convert infix expression to prefix using stack */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char st[MAX];
int top = -1;

void push(char c){ st[++top] = c; }
char pop(){ return st[top--]; }
char peek(){ return st[top]; }

int prec(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    return 0;
}

int main(){
    char infix[MAX] = "A+B*C-D/E";
    char rev[MAX], postfix[MAX], prefix[MAX];
    int n = strlen(infix), j = 0;

    for(int i=0;i<n;i++)
        rev[i] = infix[n-i-1];
    rev[n] = '\0';

    for(int i=0;i<n;i++){
        if(rev[i]=='(') rev[i]=')';
        else if(rev[i]==')') rev[i]='(';
    }

    for(int i=0;i<n;i++){
        char c = rev[i];
        if(isalnum(c)) postfix[j++] = c;
        else if(c=='(') push(c);
        else if(c==')'){
            while(top!=-1 && peek()!='(') postfix[j++] = pop();
            pop();
        }
        else{
            while(top!=-1 && prec(peek())>=prec(c) && peek()!='(')
                postfix[j++] = pop();
            push(c);
        }
    }

    while(top!=-1) postfix[j++] = pop();
    postfix[j]='\0';

    int m = strlen(postfix);
    for(int i=0;i<m;i++)
        prefix[i] = postfix[m-i-1];
    prefix[m]='\0';

    printf("%s", prefix);
    return 0;
}
