#include <iostream>
using namespace std;

int reverse(int n)

{
   int rev=0,rem;
   while(n!=0)
   {
       rem=n%10;
       rev=(rev*10)+rem;
       n=n/10;
   }
   return rev;
}
int main() {
 cout<<reverse(123);
    return 0;
}