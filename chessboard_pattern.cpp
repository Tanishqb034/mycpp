#include <iostream>
using namespace std;
int main() {
int i=1,j=1;
while(i<=5)
{   
    j=1;
    while(j<=5)
    {
         if((i+j)%2==0)
    {
        cout<<"X ";
    }
    else
    {
        cout<<"O ";
    }
    j++;
    }
    cout<<"\n";
    i++;
}
    return 0;
}