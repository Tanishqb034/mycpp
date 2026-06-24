#include <iostream>
using namespace std;
int Search(int arr[],int target,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main() {
   int n,x;
   cout<<"ENTER THE SIZE OF ARRAY ";
   cin>>n;
   int arr[n];
   cout<<"\n ENTER THE ARRAY ELEMENT ";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"ENTER THE TARGET ELEMENT ";
   cin>>x;
   cout<<Search(arr,x,n);
    return 0;
}