/* 9. Write a program to check if a given string of parentheses is balanced */
#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c){ stack[++top] = c; }
char pop(){ return stack[top--]; }

int main(){
    char exp[] = "{[()]}";
    for(int i=0;i<strlen(exp);i++){
        char c = exp[i];
        if(c=='(' || c=='[' || c=='{') push(c);
        else{
            char t = pop();
            if((c==')' && t!='(') || (c==']' && t!='[') || (c=='}' && t!='{')){
                printf("Not Balanced");
                return 0;
            }
        }
    }
    if(top==-1) printf("Balanced");
    else printf("Not Balanced");
    return 0;
}
