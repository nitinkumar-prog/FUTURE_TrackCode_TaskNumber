import java.util.Scanner;

public class BinarySearch {
    public static int binarySearch(int[] arr, int key) {
        int left = 0, right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == key)
                return mid; // Element found

            if (key < arr[mid])
                right = mid - 1; // Search in left half
            else
                left = mid + 1; // Search in right half
        }

        return -1; // Element not found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements in sorted (ascending) order:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the element to search: ");
        int key = sc.nextInt();

        int index = binarySearch(arr, key);

        if (index != -1)
            System.out.println("Element found at position " + (index + 1));
        else
            System.out.println("Element not found in the array.");
    }
}
