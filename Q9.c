#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge until one array is fully traversed
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    // Arrays with known sizes
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    // Manually provide sizes (no sizeof used)
    int merged[8]; // 4 + 4 = 8 elements

    mergeSortedArrays(arr1, 4, arr2, 4, merged);

    // Print merged array
    printf("Merged Sorted Array: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
