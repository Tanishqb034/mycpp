#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

void rotateRight(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;
    
    k = k % n; // Handle k greater than array length
    if (k == 0) return;

    // Step 1: Reverse last k elements
    std::reverse(nums.end() - k, nums.end());
    
    // Step 2: Reverse first n-k elements
    std::reverse(nums.begin(), nums.end() - k);
    
    // Step 3: Reverse the whole array
    std::reverse(nums.begin(), nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateRight(nums, k);

    // Output: 5 6 7 1 2 3 4
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

void rotateRight(std::vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;
    
    k = k % n; // Handle k greater than array length
    if (k == 0) return;

    // Step 1: Reverse last k elements
    std::reverse(nums.end() - k, nums.end());
    
    // Step 2: Reverse first n-k elements
    std::reverse(nums.begin(), nums.end() - k);
    
    // Step 3: Reverse the whole array
    std::reverse(nums.begin(), nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateRight(nums, k);

    // Output: 5 6 7 1 2 3 4
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
