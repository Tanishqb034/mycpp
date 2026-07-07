// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int first(int arr[],int n,int t)
{
    int l=0,ans=-1;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        
        if(arr[mid]==t)
        {
           ans=mid;
            h=mid-1;
        }
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    } return ans;
}
int last(int arr[],int n,int t)
{
    int l=0,ans=-1;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        
        if(arr[mid]==t)
        {
           ans=mid;
           l=mid+1;
        }
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    } return ans;
}
int main() {
int arr[5]={1,2,3,3,3};
int n=5;
int t=2;
int firstt=first(arr,n,t);
int lastt=last(arr,n,t);
int count=lastt-firstt+1;
cout<<count<<endl;

return 0;
}