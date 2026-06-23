#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array BEFORE swap: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Perform the swap
    int temp = arr[0];         // Step 1: Store the first element
    arr[0] = arr[size - 1];    // Step 2: Overwrite the first element with the last
    arr[size - 1] = temp;      // Step 3: Overwrite the last element with the stored first element

    std::cout << "Array AFTER swap: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}