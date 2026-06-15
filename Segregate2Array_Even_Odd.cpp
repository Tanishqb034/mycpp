#include <iostream>
using namespace std;

int main() {
    int i,j=0,k=0,n;
    cout<<"\n ENTER THE SIZE OF THE ARRAY";
    cin>>n;
    int arr[n],brr[n],crr[n];
    cout<<"ENTER THE VALUE IN ARRAY = ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            brr[j]=arr[i];
            j++;
        }
        else
        {
            crr[k]=arr[i];
            k++;
        }
    }

cout<<"THE EVEN ARRAY = ";
for(int i=0;i<j;i++)
{
    cout<<brr[i];
}
cout<<"\n THE ODD ARRAY = ";
for(int i=0;i<k;i++)
{
    cout<<crr[i];
}
    return 0;
}