//Write a C program to print Fibonacci series up to n terms using a for loop. 
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
