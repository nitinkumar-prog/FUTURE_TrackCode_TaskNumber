#include <stdio.h>

int main() {
    int array[100], size, position, element, i;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Get the array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Get the element to insert and the position
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d) where you want to insert the element: ", size + 1);
    scanf("%d", &position);

    // Check for valid position
    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space
    for (i = size; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the element
    array[position - 1] = element;
    size++; // Increase the size of array

    // Display the new array
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
