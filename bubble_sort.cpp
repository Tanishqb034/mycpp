#include <iostream>
using namespace std;

int main() {
int i,j;
int arr[5]={8,1,9,2,6};
int n=5;
 for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-i-1;j++)
     {
         if(arr[j]>=arr[j+1])
         {
             swap(arr[j],arr[j+1]);
         }
     }
 }
 for(i=0;i<n;i++)
 {
     cout<<arr[i];
 }

    return 0;
}