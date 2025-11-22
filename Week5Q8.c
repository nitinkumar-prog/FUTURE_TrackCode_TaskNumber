/* 8. Write a program to sort a stack in ascending order using only stack operations */
#include <stdio.h>

int main(){
    int s[5] = {3,1,4,2,5}, n = 5;
    int aux[10], t = -1, ta = -1;

    for(int i=0;i<n;i++){
        int x = s[i];
        while(ta!=-1 && aux[ta] > x)
            s[++t] = aux[ta--];
        aux[++ta] = x;
    }

    while(ta!=-1) s[++t] = aux[ta--];

    while(t!=-1) printf("%d ", s[t--]);
    return 0;
}
