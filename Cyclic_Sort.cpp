#include <iostream>
#include <vector>

// Functions to implement Cyclic Sort
void cyclicSort(std::vector<int>& arr) {
    int i = 0;
    int n = arr.size();

    while (i < n) {
        // Since values are 1 to n, the correct index for value 'x' is 'x - 1'
        int correctIndex = arr[i] - 1;

        // Swap if the current element is not at its correct index
        if (arr[i] != arr[correctIndex]) {
            std::swap(arr[i], arr[correctIndex]);
        } else {
            // Move to the next element only when the current position holds the correct item
            i++;
        }
    }
}

// Utility function to print the vector
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {5, 4, 3, 2, 1};

    std::cout << "Original array: ";
    printArray(arr);

    cyclicSort(arr);

    std::cout << "Sorted array:   ";
    printArray(arr);

    return 0;
}
