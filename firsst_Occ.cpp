#include <iostream>
using namespace std;

int binery(int arr[], int n, int t) {
    int l = 0;
    int h = n - 1;
    int ans = -1; 

    while (l <= h) {
        int mid = l + (h - l) / 2;
        
        if (arr[mid] == t) {
            ans = mid;
            l = mid + 1; 
        }
        else if (arr[mid] > t) {
            h = mid - 1; 
        }
        else {
            l = mid + 1; 
        }
    }
    return ans;
}

int main() {
    int arr[5] = {1, 3, 3, 4, 5};
    int n = 5;
    int t = 3;
    
    int x = binery(arr, n, t);
    cout << x;
    
    return 0;
}
