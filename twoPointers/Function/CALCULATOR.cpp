#include <iostream>
using namespace std;
int calci(int a,int b,int c)
{
   switch(c)
{
    case 1:                        //CALCULATOR BY SWITCH 
        return a+b;

    case 2:
        return a-b;

    case 3:
        return a*b;

    case 4:
        if(b==0) cout<<"INFINITY DENOMINATOR IS 0 ";
            return -1;
        return a/b;

    default:  cout<<"INVALID INPUT CHOICE ";
        return 0;
}
}
int main() {
    int a,b,c;
    cout<<"ENTER THE VALUE OF A :-> ";
    cin>>a;
    cout<<"ENTER THE VALUE OF B :-> ";
    cin>>b;
    cout<<"ENTER THE CHOICE  :-> ";
    cin>>c;
    cout<<calci(a,b,c);
    return 0;
}