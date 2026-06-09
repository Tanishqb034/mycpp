#include <iostream>
using namespace std;

void Palandrome(int arr[],int n)

{
  int l=0;
  int r=n-1;
  bool P;
  while(l<r)
  {   P=true;
      if(arr[l]!=arr[r])
      {   P=false;
          cout<<"THE ARRAY IS NOT PALANDROME ";
          break;
      }
      l++;
      r--;
  }
  if(P)
  {
      cout<<"THE ARRAY IS A PALANDROME ";
  }
  return;
  
}

int main() {
int n;
cout<<"ENTER THE SIZE OF ARRAY ->  ";
cin>>n;
int arr[n];
cout<<"ENTER THE VALUE IN ARRAY ->  ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
  Palandrome(arr,n);
    return 0;
}