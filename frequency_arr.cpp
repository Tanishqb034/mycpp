// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int arr[5],target,count=0;
  cout<<"ENTER ELEMENT OF ARRAY";
  for(int i=0;i<5;i++)
  {
      cin>>arr[i];
  }
  cout<<"ENTER THE TARGET ";
  cin>>target;
  for(int i=0;i<5;i++)
  {
      if(arr[i]==target)
      {
          count++;
      }
     
  }
  cout<<count;
  if(count==0)
  {
      cout<<" ELEMENT NOT FOUND";
  }
  
    return 0;
}