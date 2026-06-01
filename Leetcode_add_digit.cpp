#include <iostream>
using namespace std;
int main() {
    int n,ans,rem,dsum;  //LEETCODE ADD DIGIT BASIC CODE
    cin>>n;
   while(n!=0)
   {
       rem=n%10;
       n=n/10;
       dsum+=rem;
   }
   n=dsum;
   while(n>=9)
   {
       rem=n%10;
       n=n/10;
       ans+=rem;
   }
   cout<<ans;
    return 0;
}

// atranate 
class Solution {
public:
    int addDigits(int n) {
       while(n>9)
       {
        int ans=0,rem;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            ans+=rem;
        }
        n=ans;
       }
       return n;
    }
};