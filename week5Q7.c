/* 7. Write a program to copy one stack into another stack without changing the order of elements */
#include <stdio.h>

int main(){
    int s1[] = {1,2,3,4}, n = 4;
    int s2[10], top2 = -1;

    for(int i = 0; i < n; i++)
        s2[++top2] = s1[i];

    for(int i = 0; i <= top2; i++)
        printf("%d ", s2[i]);

    return 0;
}
