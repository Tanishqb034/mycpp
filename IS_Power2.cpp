#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<1)
    return 0;

    while(n!=1)
    {                      //basic approch by binary
        if(n%2==1)
        return 0;

        n=n/2;
    }
    return 1;
}

/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)                   //LEETCODE SOLUTION
        return 0;
        while(n!=1)
        {
           if(n%2==1)
           {
            return 0;
           }
            n=n/2;
           
        }
        return 1;
    }
*/