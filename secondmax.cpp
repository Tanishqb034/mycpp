#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 40, 25, 30};
    int n = 4;

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }

        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second Greatest = " << second;

    return 0;
}