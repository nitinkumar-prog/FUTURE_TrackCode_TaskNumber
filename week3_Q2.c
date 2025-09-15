//
#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int sum = 0;
    float average;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add element to sum
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}
