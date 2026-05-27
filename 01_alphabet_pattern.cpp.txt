#include <iostream>
using namespace std;
int main() {
 char name,n1;
 for(name='a';name<='e';name++)
 {                                   
     for(n1='a';n1<=name;n1++)
     {
         cout<<name;
     }
     cout<<endl;
 }
 
  for(name='a';name<='e';name++)
 {
     for(n1='a';n1<=name;n1++)
     {
         cout<<n1;
     }
     cout<<endl;
 }
 
    return 0;
}