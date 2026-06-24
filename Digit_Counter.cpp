#include <iostream>
using namespace std;
int CountDigit(int num)
{
    int c=0;
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    return c;
}
int main() {
int  num;
cin>>num;
cout<<CountDigit(num);
    return 0;
}