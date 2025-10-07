//Write a program to print a diamond pattern of stars.
#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows (half diamond height): ");
    scanf("%d", &rows);

    // Upper half
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2*i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            printf(" ");4
        }
        for (int k = 1; k <= (2*i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
