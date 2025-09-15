//Write a program to read and display elements of an array.
#include <stdio.h>

int main() {
    int arr[100];
    int n, i;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the elements
    printf("\nElements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
