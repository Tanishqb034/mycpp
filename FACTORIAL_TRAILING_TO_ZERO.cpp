#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    while(n!=1)
    {
        f=f*n;
        n--;
        
    }
    return f;
}
int COUNT_TRAILINGZERO(int fact)
{ int count=0,rem;
       while(fact!=0)
       {
            rem=fact%10;
            if(rem==0)
            {
               count++; 
            }
            else
            {
                break;
            }
            fact=fact/10;
       }
       return count;
}
int main() {
   int n,input;
   cout<<"ENTER THE NUM FOR FACT ";
   cin>>input;
   n=fact(input);
   cout<<n<<endl;
   cout<<COUNT_TRAILINGZERO(n);
    return 0;
}