#include <iostream>
using namespace std;

int main() {
int n,i,t;
cin>>n;
int arr[n];
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
cin>>t;  //target element input
for(int i=0;i<n;i++)
{
    if(arr[i]==t)
    {
        cout<<i;
    }
    
    
}

    return 0;
}