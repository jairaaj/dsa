#include <iostream>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Continue searching in the right half
        } else {
            right = mid - 1; // Continue searching in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    // Example usage with an array
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]); // Calculate the size of the array
    int target = 5;

    int result = binarySearch(sortedArray, size, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
