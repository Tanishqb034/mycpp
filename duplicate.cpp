#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 45, 7, 23, 89, 15, 45, 7, 56, 90};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        bool printed = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}