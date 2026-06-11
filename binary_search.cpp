#include <iostream>
using namespace std;

// Function to perform iterative Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        // Prevents potential integer overflow compared to (left + right) / 2
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; 
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        } 
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // The array MUST be sorted for binary search to work
    int sortedArray[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    int result = binarySearch(sortedArray, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
