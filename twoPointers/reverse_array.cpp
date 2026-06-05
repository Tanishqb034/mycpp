#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int i,j,n=5; //here n is input size of the array
   for(int i=0;i<5;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<5;i++)
   {
       cout<<arr[i];
   }
   cout<<"\n THIS IS REVERSE ARRAY : -> ";
   for(int i=0;i<n/2;i++)
   {
       int temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
   }
 for(int i=0;i<5;i++)
   {
       cout<<arr[i];
   }
    return 0;
}