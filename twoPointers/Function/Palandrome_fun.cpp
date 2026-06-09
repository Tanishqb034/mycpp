#include <iostream>
using namespace std;
void Palandrome(int n)
{ int rev=0,rem,x;
   x=n;
    while(n!=0)
    {   rem=n%10;
        rev=(rev*10+rem);
        n=n/10;
        
    }
    if(rev==x)
    {
        cout<<"THE NUM IS PALANDROME ";
    }
    
        else
        {
             cout<<"THE NUM IS NOT A PALANDROME ";
        }
    return;
}
int main() {
   Palandrome(121);
    return 0;
}