// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i,j;
    int arr[5]={54,1,33,23,9};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}