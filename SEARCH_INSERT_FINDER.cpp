#include <iostream>
using namespace std;
int SEARCH_INSERT(int arr[],int n,int t)
{
    int l=0;
    int h=n-1;
    while(l<=h)
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
        
    } return l;
}
int main() {
   int arr[]={1,2,4,5};
   int n=4;
   int t=3;
   cout<<SEARCH_INSERT(arr,n,t);
    return 0;
}