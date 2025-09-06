//Write a C program to check w   hether a number is prime using a for loop. 
#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count how many numbers divide num
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }

    // A prime number has exactly 2 divisors: 1 and itself
    if(count == 2) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }

    return 0;
}
