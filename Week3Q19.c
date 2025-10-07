//Write a program to print Pascal's Triangle. 
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print values
        for (int k = 0; k <= i; k++) {
            printf("%d ", nCr(i, k));
        }
        printf("\n");
    }

    return 0;
}
