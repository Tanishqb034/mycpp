#include<iostream>
using namespace std;
int main()
{
    int ans=0,rem,n;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;
        
    }
    cout<<ans;
  
    return 0;
}
/*
class Solution {
public:
    int reverse(int n) {
        int d=0,rem;
        while (n!=0)
        {
            rem=n%10;
            n/=10;
            if(d>INT_MAX/10 || d<INT_MIN/10) yeh sirf range k liye h limits k liye 
           { return 0;
           }
            d=d*10+rem;
        }
        return d;
    }
};*/