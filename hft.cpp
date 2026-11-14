// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int binery(int arr[],int n,int t)
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
            else if( arr[mid]>t)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        } return 0;
};
int main() {
   int arr[5]={1,2,3,4,5};
    int n=5;
    int t=3;
    int x;
    x=binery(arr,n,t);
    cout<<x;
    
    return 0;
}