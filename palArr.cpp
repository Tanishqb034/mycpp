#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    bool vyom=true;
    while (l<h)
    {
         if(arr[l]==arr[h])
         {
            vyom=true;
            l++;
            h--;
         }
         else
         {
            cout<<"IT IS NOT PALAMDROME";
            vyom=false;
            break;
         }
    }

    if(vyom==true)
    {
        cout<<"IT IS A PALANDROME ";
    }
    
}