#include <iostream>
using namespace std;
int Peak_Mountain(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main() {
   int i,j;
   int arr[7]={2,4,6,8,10,8,5};
   int n=7;
   cout<<Peak_Mountain(arr,n);
    return 0;
}