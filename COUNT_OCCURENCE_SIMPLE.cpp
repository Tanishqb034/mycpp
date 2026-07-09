// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,3,3,2};
int n=5;
int t=3;
int c=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==t)
    {
        c++;
    }
}
cout<<c;
return 0;
}