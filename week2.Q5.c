//Write a program to find the largest element in an array using pointers. 
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    int max;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer points to the first element of the array
    ptr = arr;

    // Assume first element is the largest
    max = *ptr;

    // Traverse the array using the pointer
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
