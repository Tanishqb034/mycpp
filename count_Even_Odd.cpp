#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 45, 7, 23, 89, 15, 45, 7, 56, 90};
    int n = 10;

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}