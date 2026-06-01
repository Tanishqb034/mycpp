#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem,x;
    cin>>n;
    x=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10+rem);
        n=n/10;

    }
    if(rev==x)
    {
        cout<<"THE NUMBER IS PALANDROME ";
    }
    else{
        cout<<"THIS IS NOT A PALANDROME ";
    }
    return 0;
}