// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int m,t,x=0;
   cin>>m;
   int arr[m];
   for(int i=0;i<m;i++)
   {
       cin>>arr[i];
   }
   cout<<"ENTER THE NUM TO SEARCH";
   cin>>t;
   for(int i=0;i<m;i++)
   {
       if(arr[i]==t)
       {
           x=1;
           
       }
       else
       {
           x=0;
       }
   }
   if(x==1)
   {
       cout<<"found";
   }
   else
   {
       cout<<"NOT FOUND";
   }
    return 0;
}