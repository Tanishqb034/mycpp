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
int x,count=0;
cout<<"-- ENTER THE NUM TO FIND THE FREQUENCY OR COUNT --";
cin>>x;
for(int i=0;i<n;i++)
{
    if(arr[i]==x)
    {
        count++;
    }
}
cout<<"--THE FREQUENCY OR THE COUNT OF THE NUMBER IS--  "<<count;
    return 0;
}