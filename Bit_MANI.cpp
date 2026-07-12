#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function using bit manipulation to count trailing zeros in a product
int countTrailingZerosBitwise(const vector<int>& arr) {
    int count2 = 0;
    int count5 = 0;

    for (int num : arr) {
        if (num == 0) {
            return 1; // Direct zero handles standard edge-cases
        }

        // 1. Bit manipulation to count factors of 2 instantly
        // __builtin_ctz counts trailing binary zeros in an integer
        count2 += __builtin_ctz(num);

        // 2. Count factors of 5 (Bitwise operations cannot isolate base-5 factors)
        int temp = num;
        while (temp % 5 == 0) {
            count5++;
            temp /= 5;
        }
    }

    // The pair of (2 * 5) makes a 10. The limiting factor is the minimum.
    return min(count2, count5);
}

int main() {
    vector<int> arr = {10, 100, 20, 30, 50, 91, 12, 80};

    cout << "Trailing zeros in product: " << countTrailingZerosBitwise(arr) << endl;

    return 0;
}
