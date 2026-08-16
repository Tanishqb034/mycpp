#include <iostream>
#include <algorithm> // Required for std::reverse

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Pass the beginning pointer and the pointer just past the last element
    std::reverse(arr, arr + n);

    // Print elements: 5 4 3 2 1
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
