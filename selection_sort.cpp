#include <iostream>
using namespace std;
int main() {
    int min;
 int arr[5]={9,7,6,4,3};
 int n=5;
 min=0;
 for(int i=0;i<n-1;i++)
 {   min=i;
     for(int j=i+1;j<n;j++)
     {
         if(arr[j]<arr[min])
         {
             min=j;
         }
     }
     swap(arr[i],arr[min]);
 }
 cout<<"SORTED ARRAY BY SELECTION ";
 for(int i=0;i<n;i++)
 {
     cout<<arr[i];
 }
    return 0;
}