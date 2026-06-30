#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 45, 7, 23, 89, 15, 45, 7, 56, 90};
    int n = 10;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}