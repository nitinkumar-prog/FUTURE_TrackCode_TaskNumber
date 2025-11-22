/* 14. Write a program to remove adjacent duplicate characters in a string using stack */
#include <stdio.h>
#include <string.h>

char st[100];
int top = -1;

void push(char c){
    if(top!=-1 && st[top]==c) top--;
    else st[++top] = c;
}

int main(){
    char s[] = "abbaca";
    for(int i=0;s[i]!='\0';i++)
        push(s[i]);

    for(int i=0;i<=top;i++)
        printf("%c", st[i]);

    return 0;
}
