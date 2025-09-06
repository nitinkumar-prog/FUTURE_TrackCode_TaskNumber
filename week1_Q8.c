//Write a C program to calculate factorial of a number using a while loop.
#include <stdio.h>

int main() {
    int num, i = 1;
   int factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        while (i <= num) {
            factorial = factorial * i;
            i++;
        }

        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
