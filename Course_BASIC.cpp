#include <iostream>
using namespace std;
int main() {
   int marks;
   char Grade,sub;
   cout<<"\n ENTER THE MARKS OF THE STUDENT ";
   cin>>marks;
   if(marks>=80)
   {
       Grade='A';
       cout<<"GRADE IS -> "<<Grade;
   }
   else if (marks>=70)
   {
       Grade='B';
        cout<<"GRADE IS -> "<<Grade;
   }
   else if(marks>=60)
   {
       Grade='C';
        cout<<"GRADE IS -> "<<Grade;
   }
   else
   {
       Grade='F';
        cout<<"GRADE IS -> "<<Grade;
       
   }
   switch(Grade)
   {
       case 'A':
       cout<<"\n YOUR STREAM IS SCIENCE ";
       cout<<"ENTER M= MATHS && B= BIOLOGY ";
       cin>>sub;
       if(sub=='M')
       {
           cout<<"ENGIENEER COURSE";
       }
       else if (sub=='B')
       {
           cout<<"DOCTOR COURSE ";
       }
       else
       {
           cout<<"INVALID SUB INPUT ";
       }
       break;
       case 'B':
       cout<<"\n YOUR STREAM IS COMMERCE ";
       cout<<"\n ENTER A = ACCOUNTS && F = FINANCE ";
       cin>>sub;
       if(sub=='A')
       {
           cout<<"C-A COURSE";
       }
       else if(sub=='F')
       {
           cout<<"BANK P-O COURSE ";
       }
       else
       {
           cout<<"INVALID INPUT";
       }
       break;
       case 'C':
       cout<<"\n ENTER G = GK && P= OTHER POLICE SERVICES";
       cin>>sub;
       if(sub=='G')
       {
           cout<<"IAS COURSE ";
       }
       else if(sub=='P')
       {
           cout<<"POLICE COURSE ";   
       }
       else
       {
           cout<<"INVALID INPUT ";
       }
       break;
       case 'F':
       cout<<"NO STUDY FUTHER  STUDY OVER ";
       break;
       default:
       cout<<"INVALID GRADE ";
   }
    return 0;
}