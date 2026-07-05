
#include <iostream>
using namespace std;
int main() {
  int arr[5]={1,2,3,4,5};
  int n=5;
  int l=0;
  int h=n-1;
  while(l<=h)
  {
      if(arr[l]<arr[h])
      {
          swap(arr[l],arr[h]);
      }
      l++;
      h--;
  }
  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }
    return 0;
}