//Write a program to multiply two matrices.
#include <stdio.h>

int main() {
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result[2][2];  // Result matrix will be 2x2

    // Initialize result matrix to 0
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices A and B
    for (int i = 0; i < 2; i++) {         // rows of A
        for (int j = 0; j < 2; j++) {     // columns of B
            for (int k = 0; k < 3; k++) { // columns of A / rows of B
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
