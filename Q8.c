#include <stdio.h>

int main() {
    int arr[100], size, index, i;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input index to delete
    printf("Enter the index to delete (0-based): ");
    scanf("%d", &index);

    // Check for valid index
    if(index < 0 || index >= size) {
        printf("Invalid index! No element deleted.\n");
    } else {
        // Shift elements to the left
        for(i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Decrease array size

        // Display the updated array
        printf("Array after deletion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
