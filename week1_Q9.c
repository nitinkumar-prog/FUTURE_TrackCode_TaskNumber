//Write a C program to reverse a number using a while loop. 
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);  //462

    
    while (num != 0) {
        remainder = num % 10;               // Get last digit  //2,6,4
        reversed = reversed * 10 + remainder; // Append to reversed number //2,26,264
        num = num / 10;                      // Remove last digit //46,4
    }

    
    printf("Reversed number: %d\n", reversed);

    return 0;
}
