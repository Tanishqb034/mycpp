#include <iostream>
#include<vector>
using namespace std;

int main() {
 vector<int>marks;  //Integer Marks array default size
    vector<int>miles(10); //Integer array of 10 block
    vector<int>distances(15,0); //Integer array (15 block and 0 value assignment
    vector<int>sdd(5,4);
    cout<<*(sdd.begin());
     
    return 0;
}