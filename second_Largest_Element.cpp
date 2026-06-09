#include <iostream>
#include<climits>
using namespace std;
int main() {
   int n,lar=INT_MIN,secLrg=INT_MIN;
   cout<<"ENTER THE SIZE OF THE ARRAY ";
   cin>>n;
   int arr[n];
   cout<<"ENTER THE VALUE OF THE ARRAY ";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
     
     for(int i=0;i<n;i++)
     {
        if(arr[i]>lar)
        {
            secLrg=lar;
            lar=arr[i];
        }
        else if(arr[i]>secLrg && arr[i]!=lar)
        {
            secLrg=arr[i];
        }
     }
     cout<<"THE SECOND LARGEST ELEMENT IS "<<secLrg<<endl;
     cout<<"THE LARGEST ELEMENT IS "<<lar;
    return 0;
}