#include <iostream>
using namespace std;
int main() {
   int n;
   int t=5;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int l=0;
   int h=n-1;
   while(l<h)
   {
      int mid=l+(h-l)/2;

      if(a[mid]==t)
      {
        cout<<mid;
        break;
      }
      else if(a[mid]<t)
      {
        l=mid+1;
      }
      else
      {
        h=mid-1;
      }
   }
    return 0;
}