#include <iostream>
#include <vector>

// Merges two sorted subarrays into a single sorted subarray.
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary vectors to hold the data
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copy data to temporary vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary vectors back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that implements Merge Sort
// left is for left index and right is right index of the sub-array of arr to be sorted
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return; // Base case: 1 or 0 elements
    }
    
    // Same as (left+right)/2, but avoids overflow for large left and right
    int mid = left + (right - left) / 2;

    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
}

// Utility function to print an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    std::cout << "Original array: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array:   ";
    printArray(arr);
    
    return 0;
}
