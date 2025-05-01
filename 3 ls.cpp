#include <iostream>
using namespace std;
int linearSearch( int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found in the array
}

int main() {
    int arr[] = {2, 5, 7, 10, 15, 20, 25};
    int target = 15;

    int result = linearSearch(arr, sizeof(arr) / sizeof(arr[0]), target);

    if (result != -1) {
        cout << "Element found at index " << result << std::endl;
    } else {
        cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
