//Write a C program to find the sum of digits of a number using a while loop. 
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

   
    printf("Enter a number: ");
    scanf("%d", &num);  //123

    // Handle negative numbers
    if (num < 0) {
        num = -num; // Make it positive
    }

    
    while (num > 0) {
        remainder = num % 10;  // Get last digit // 3,2
        sum += remainder;      // Add to sum // 3,3+2,3+2+1
        num = num / 10;        // Remove last digit // 12,1
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
