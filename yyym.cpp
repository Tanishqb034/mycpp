#include <iostream>
using namespace std;

// Corrected function name and removed extra semicolon
int binarySearch(int arr[], int t, int n)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == t)
        {
            return mid; // Element found, return its index
        }
        else if (arr[mid] < t)
        {
            l = mid + 1; // Search in the right half
        }
        else 
        {
            h = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 3;
    int r = binarySearch(arr, x, n);
    cout << r; // Output: 2
    return 0;
}
