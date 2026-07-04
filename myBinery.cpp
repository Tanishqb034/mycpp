#include<iostream>
using namespace std;
int Binery(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
return -1;
}
int main()
{
    
    int arr[5]={1,2,3,4,5};
    int n=5;
    int t=11;
    cout<<Binery(arr,n,t);
    
    return 0;
}