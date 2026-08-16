#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 4, 3, 2, 6, 5};

    std::reverse(vec.begin(), vec.end());

    // Print elements: 5 6 2 3 4 1
    for (int val : vec) {
        std::cout << val << " ";
    }
    return 0;
}
