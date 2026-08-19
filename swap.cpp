#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];

for(int i=0;i<n;i++)  
{
    cin>>arr[i];
}  
int l=0;
int h=n-1;
           while(l<h)

{
      swap(arr[l],arr[h]);
      l++;
      h--;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
       return 0;
}