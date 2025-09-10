#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", &str);  // Note: doesn't read spaces. Use fgets() if needed.

    len = strlen(str); // Get length of the string

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
