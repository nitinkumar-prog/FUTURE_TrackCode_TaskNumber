//Write a program to find the second largest element in an array. 
#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    int first, second;

    // Initialize first and second
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else if (arr[0] < arr[1]) {
        first = arr[1];
        second = arr[0];
    } else {
        first = second = arr[0];
    }

    // Traverse the rest of the array
    for (int i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Check if a valid second largest was found
    if (first == second) {
        printf("No distinct second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
