//Write a program to check if two matrices are equal. 
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &rows1, &cols1);

    // Input dimensions for second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &rows2, &cols2);

    // If dimensions are not same, matrices can't be equal
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices are not equal (different dimensions).\n");
        return 0;
    }

    int matrix1[100][100], matrix2[100][100];

    // Input elements for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check element-wise equality
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                printf("Matrices are not equal.\n");
                return 0;
            }
        }
    }

    printf("Matrices are equal.\n");
    return 0;
}
