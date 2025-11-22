/* 16. Write a program to check whether a given number is palindrome using stack */
#include <stdio.h>

int st[20], top = -1;

void push(int x){ st[++top] = x; }
int pop(){ return st[top--]; }

int main(){
    int num = 12321, temp = num;

    while(temp > 0){
        push(temp % 10);
        temp /= 10;
    }

    temp = num;
    while(temp > 0){
        if(temp % 10 != pop()){
            printf("Not Palindrome");
            return 0;
        }
        temp /= 10;
    }

    printf("Palindrome");
    return 0;
}
