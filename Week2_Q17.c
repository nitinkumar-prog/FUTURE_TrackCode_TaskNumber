//Write a program to remove duplicate characters from a string without using an extra array. 
#include <stdio.h>

void removeDuplicates(char *str) {
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; ) {
            if (str[j] == str[i]) {
                // Shift characters to the left to remove duplicate
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                // Do not increment j, as new character has shifted to j
            } else {
                j++;
            }
        }
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    // Remove duplicates
    removeDuplicates(str);

    // Output result
    printf("String after removing duplicates: %s\n", str);

    return 0;
}
