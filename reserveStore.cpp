#include <iostream>
#include<vector>
using namespace std;

int main() {
 vector<int>ans;
    ans.reserve(5);
   ans.push_back(10);
    ans.push_back(20);
    ans.push_back(30);
      ans.push_back(10);
    ans.push_back(20);

  
    cout<<"\n"<<ans.capacity();
    
    return 0;
}