#include <iostream>
using namespace std;
int main() {
  int m,p,h,e,s;
  int sum=0,backlog=0;
  float per;
  cin>>m;
  cin>>p;
  cin>>h;
  cin>>e;
  cin>>s;
  sum=m+p+h+e+s;
  per=sum/5;
  cout<<sum;
  cout<<per;
  if(p<50 )
  {
      backlog++;
  }
  if(m<50 )
  {
      backlog++;
  }
  if(s<50 )
  {
      backlog++;
  }
  if(h<50 )
  {
      backlog++;
  }
  if(e<50 )
  {
      backlog++;
  }
  
  cout<<backlog;
    return 0;
}