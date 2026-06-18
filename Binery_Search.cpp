#include <iostream>
using namespace std;
int binary (int arr[],int t,int n)
{
    int l=0;
  
    int r=n-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==t)
        {
            return mid;
        }
        else if (arr[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
      
    }  return -1;
    
}
int main() {
  int arr[5]={1,2,3,4,5};
  int t=3;
   int n=sizeof(arr)/sizeof(arr[0]);
  int x;
  x=binary(arr,t,n);
  cout<<x;
    return 0;
}