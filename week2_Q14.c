//Write a program to sort an array of strings in alphabetical order. 
#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
    char str[MAX_STRINGS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int n, i, j;

    // Get number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline left by scanf

    // Read strings
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        fgets(str[i], MAX_LENGTH, stdin);
        // Remove newline character if present
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    // Sort strings using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                // Swap strings
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Print sorted strings
    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
