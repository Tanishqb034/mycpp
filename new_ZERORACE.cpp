// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int binerySearch(int arr[],int n,int t)
{
    int l=0; int r=n-1;
    while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==t)
            {
                return mid;
            }
            else if(arr[mid]<t)
            {
                l=mid+1;
                
            }
            else if(arr[mid]>t)
            {
                r=mid-1;
            }
        }
    return -1;
}
int main() {

    int arr[6]={7,8,9,10,11,22};
    int n=6;
    int t=10;
  int v=binerySearch(arr,n,t);
    cout<<v;
    return 0;
}