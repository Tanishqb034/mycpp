// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binery(int arr[],int n,int t)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==t)
        {
            return mid;
        }
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}
int main() {
 int i,j;
 int arr[5]={1,2,3,4,5};
 int n=5;
 int t=3;
 cout<<binery(arr,n,t);
    return 0;
}