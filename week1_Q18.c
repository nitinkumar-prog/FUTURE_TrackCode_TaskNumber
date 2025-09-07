//Write a C program to count the number of digits in an integer using a while loop. 
#include <stdio.h>

int main() {
    int number, count = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number == 0) {
        count = 1;
    } else {
        
        if (number < 0) {
            number = -number;
        }

       
        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    
    printf("Number of digits: %d\n", count);

    return 0;
}
