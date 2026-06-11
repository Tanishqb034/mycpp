#include <iostream>
using namespace std;

void findTwoSum(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target) {
            cout << "Target found at indices: " << left << " and " << right << endl;
            return;
        }
        else if (currentSum < target) {
            left++; // Need a larger sum
        }
        else {
            right--; // Need a smaller sum
        }
    }
    cout << "No pair found with the given target sum." << endl;
}

int main() {
    int sortedArr[] = {1, 2, 4, 6, 8, 11, 15};
    int size = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int target = 14; // Pair is 6 (index 3) and 8 (index 4)

    findTwoSum(sortedArr, size, target);
    return 0;
}
