#include <iostream>
using namespace std;

int main() {
    int arr[5] = {67, 12, 32, 7, 1};
    int n = 5, min;
    int i, j;

    for(i = 0; i < n - 1; i++) {
        min = i;
        // FIX: Change j = j + 1 to j = i + 1
        for(j = i + 1; j < n; j++) { 
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    // BONUS: Added spaces between outputs so the numbers don't run together
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
