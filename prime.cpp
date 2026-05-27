#include <iostream>
using namespace std;
int main() {
   bool Prime=true;
   int n,i,j;
   cin>>n;
   if(n<=1)
   {
       cout<<"THE NUMBER IS NOT PRIME ";
   }
   else
   {
       for(int i=2;i<n;i++)
       {
           if(n%i==0)
           {
               Prime=false;
               cout<<"THE NUMBER IS NOT PRIME ";
               break;
               
           }
       }
       if(Prime==true)
       {
           cout<<"NUMBER IS PRIME ";
       }
   }
    return 0;
}