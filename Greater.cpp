#include <iostream>
using namespace std;
/*tanishq, vyom, hardik */

int main() {
   int p1,m1,c1,s1,e1,sum1=0;
   int p2,m2,c2,s2,e2,sum2=0;
   int p3,m3,c3,s3,e3,sum3=0;
   float per1,per2,per3;
   cout<<"ENTER THE MARKSE OF TANISHQ IN 5 SUB ";
   cin>>p1>>m1>>c1>>s1>>e1;
   sum1=p1+c1+s1+e1+m1;
   per1=sum1/5;
   cout<<"ENTER THE MARKSE OF VYOM IN 5 SUB ";
   cin>>p2>>m2>>c2>>s2>>e2;
   sum2=p2+c2+m2+s2+e2;
   per2=sum2/5;
   cout<<"ENTER THE MARKSE OF HARDIK IN 5 SUB ";
   cin>>p3>>m3>>c3>>s3>>e3;
   sum3=p3+s3+c3+e3+m3;
   per3=sum3/5;
   if(per1>per2 && per1 >per3)
   {
       cout<<"TANISHQ PERCENTAGE IS GREATER ";
   }
   else if(per2>per1 && per2>per3)
   {
       cout<<"Vyom PERCENTAGE IS GREATER ";
   }
   else {
       cout<<"HARDIK PERCENTAGE IS GREATER ";
   }
   
    return 0;
}