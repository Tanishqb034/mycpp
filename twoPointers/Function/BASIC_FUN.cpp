#include <iostream>
using namespace std;
int sum(int a,int b)    //this is sum code
{
    int x=a+b;
    return x;
}
int Fact (int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {                        //Factoril code
        ans*=i;
    } return ans;
}

bool Prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }                    //primefunction
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    } return 1;
}
int main() {
   cout<<sum(5,5)<<endl;
   cout<<Prime(4)<<endl; 
   cout<<Fact(6)<<endl;//there are fun call
    return 0;
}