//Write a C program to find the sum of the series 1 + 2 + 3 + ... + n using a for loop.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the series 1 + 2 + ... + %d = %d\n", n, sum);

    return 0;
}
