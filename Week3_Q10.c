//Write a program to find duplicate elements in an array. 
#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 4, 5, 2, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate elements in the array:\n");

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            // Check for duplicate
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;  // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
