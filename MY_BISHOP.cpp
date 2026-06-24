#include <iostream>
using namespace std;
int min(int i,int j)
{ int x;
    if(i<=j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
int main() {
   int arr[8][8];
   int i,j,total=0;
   cout<<"ENTER THE POSITION OF BISHOP  ";
   cin>>i>>j;
     total+=min(8-i,8-j);
     total+=min(i-1,j-1);
     total+=min(8-i,j-1);
     total+=min(i-1,8-j);
     cout<<"\n THE TOTAL PLACE BISHOP MOVES "<<total;
                                     //*THIS IS A BISHOP*//
    return 0;
}