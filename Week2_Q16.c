//Write a program to print a pyramid pattern of stars using nested loops.
#include <stdio.h>

int main() {
    int i, j, space, rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
