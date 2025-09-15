#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call recursive GCD function
    int result = gcd(num1, num2);

    // Display result
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
