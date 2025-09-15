//Write a program to search an element in an array using linear search. 
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, searchElement, found = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d (index %d)\n", searchElement, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
