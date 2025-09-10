//Write a program to concatenate two strings without using library functions. 
#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    // Input first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copy str1 to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append str2 to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result string
    result[i] = '\0';

    // Output the concatenated string
    printf("Concatenated string: %s\n", result);

    return 0;
}
