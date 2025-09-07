//Write a C program to print all even numbers between 1 and 50 using a for loop.
#include <stdio.h>

int main() {
    printf("Even numbers between 1 and 50:\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
