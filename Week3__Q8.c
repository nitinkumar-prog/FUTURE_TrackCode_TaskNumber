//Write a program to merge two arrays into a single sorted array. 
#include <stdio.h>

// Function to perform bubble sort on the merged array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Input arrays
    int arr1[] = {5, 1, 9};
    int arr2[] = {3, 7, 2, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Merged array size
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    // Copy elements from arr1
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from arr2
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Sort the merged array
    bubbleSort(mergedArray, mergedSize);

    // Output the sorted merged array
    printf("Merged and sorted array:\n");
    printArray(mergedArray, mergedSize);

    return 0;
}
