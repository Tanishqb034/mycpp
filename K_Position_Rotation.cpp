#include <iostream>
using namespace std;

int main() {
int i,n,k,temp;
cout<<"ENTER THE SIZE OF THE ARRAY ";
cin>>n;
int arr[n];
cout<<"ENTER THE VALUE IN THE ARRAY ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"ENTER K POSITION  ";
cin>>k;
for(int i=0;i<k/2;i++)
{
    temp=arr[i];
    arr[i]=arr[k-i-1];
    arr[k-i-1]=temp;
}
for(int i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
  return 0;
}