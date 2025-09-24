//Write a program to calculate row-wise and column-wise sum of a 2D array. 
#include <stdio.h>

int main() {
    int rows, cols;

    // Input size of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];  // Assuming max size 100x100

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print row-wise sum
    printf("\nRow-wise sum:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i, rowSum);
    }

    // Calculate and print column-wise sum
    printf("\nColumn-wise sum:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j, colSum);
    }

    return 0;
}
