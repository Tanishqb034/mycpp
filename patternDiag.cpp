#include <iostream>
using namespace std;
int main() {
  int i,j;
  for(i=0;i<5;i++)
  {
      for(j=0;j<=i;j++)
      {
          cout<<" ";
      }
      for(int k=0;k<4;k++)
      {
          cout<<" * ";
      }
      cout<<endl;
  }
 
    return 0;
}