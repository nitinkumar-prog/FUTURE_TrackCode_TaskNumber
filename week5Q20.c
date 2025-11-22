/* 20. Write a program to implement a browser’s forward and backward navigation system using two stacks */
#include <stdio.h>

int back[100], forward[100];
int tb=-1, tf=-1;
int current = 0;

void visit(int page){
    back[++tb] = current;
    current = page;
    tf = -1;
}

void goBack(){
    if(tb!=-1){
        forward[++tf] = current;
        current = back[tb--];
    }
}

void goForward(){
    if(tf!=-1){
        back[++tb] = current;
        current = forward[tf--];
    }
}

int main(){
    visit(1);
    visit(2);
    visit(3);
    goBack();
    goBack();
    goForward();

    printf("Current Page: %d", current);
    return 0;
}
