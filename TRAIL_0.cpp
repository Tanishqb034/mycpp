#include <iostream>
#include <vector>
#include <algorithm>

// This lets us skip typing "std::" everywhere below
using namespace std;

int countTrailingZerosInProduct(const vector<int>& arr) {
    int count2 = 0, count5 = 0;

    for (int num : arr) {
        if (num == 0) return 1; 

        int temp = num;
        while (temp % 2 == 0) {
            count2++;
            temp /= 2;
        }

        temp = num;
        while (temp % 5 == 0) {
            count5++;
            temp /= 5;
        }
    }

    // Notice we can just use min() instead of std::min()
    return min(count2, count5);
}

int main() {
    vector<int> arr = {10, 100, 20, 30, 50, 91, 12, 80};

    // Notice we can just use cout and endl directly
    cout << "Number of trailing zeros: " << countTrailingZerosInProduct(arr) << endl;

    return 0;
}
