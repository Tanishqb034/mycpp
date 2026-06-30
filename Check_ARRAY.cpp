#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 45, 7, 23, 89, 15, 45, 7, 56, 90};
    int n = 10;

    bool sorted = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}