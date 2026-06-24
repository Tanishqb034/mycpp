#include <iostream>
using namespace std;
int main() {
    int i,n,s1,s2=0,ans;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    s1=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
{
    s2+=arr[i];
}
ans=s1-s2;
cout<<ans;
 
    return 0;
}