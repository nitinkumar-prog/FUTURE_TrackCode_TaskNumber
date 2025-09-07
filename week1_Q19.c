//Write a C program to print the sum of all even and odd numbers from 1 to n separately using a for loop. 
#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    
    printf("Sum of even numbers from 1 to %d: %d\n", n, evenSum);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, oddSum);

    return 0;
}
