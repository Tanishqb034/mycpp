// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,temp;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  temp=arr[n-1];  //rotate element by 1
  cout<<temp<<endl;
  for(int i=n;i>0;i--)
  {
      arr[i]=arr[i-1];
  }
  arr[0]=temp;
  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }
    return 0;
}