#include <iostream>
#include<cmath>
using namespace std;
int CountDigit(int num)
{
    int c=0;
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    return c;
}
bool Armstrong(int num,int digit)
{
    int n=num;
    int ans=0,rem;
    while(num!=0)
    {
        rem=num%10;
        ans=ans+pow(rem,digit);
           num=num/10;
    }
    if(ans==n)
    {
        return 1;
    }
    else
    {
    return 0; 
    }
}
int main() {
int  num;
cin>>num;
int digit=CountDigit(num);
cout<<digit<<endl;
int ans=Armstrong(num,digit);
cout<<ans;
    return 0;
}