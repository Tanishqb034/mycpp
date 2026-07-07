#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], brr[n], crr[n];
    int j = 0, k = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            brr[j] = arr[i];
            j++;
        }
        else
        {
            crr[k] = arr[i];
            k++;
        }
    }

    cout << "Even elements: ";
    for(int i = 0; i < j; i++)
    {
        cout << brr[i] << " ";
    }

    cout << "\nOdd elements: ";
    for(int i = 0; i < k; i++)
    {
        cout << crr[i] << " ";
    }

    return 0;
}