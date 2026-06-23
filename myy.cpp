#include <iostream>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    // Declare the destination array with the same size
    int arr2[5]; 

    // Loop to copy elements from arr1 to arr2
    for (int i = 0; i < size; ++i) {
        arr2[i] = arr1[i]; // The actual copy operation
    }

    // Print arr2 to verify the copy
    std::cout << "Elements of the copied array (arr2): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}