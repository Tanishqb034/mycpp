#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {15, 42, 6, 89, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = INT_MIN, minVal = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Largest: " << maxVal << "\nSmallest: " << minVal;
    return 0;
}
