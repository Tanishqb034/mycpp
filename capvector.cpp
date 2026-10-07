// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include<vector>
using namespace std;

int main() {
 vector<int>marks(5);  //Integer Marks array default size
  marks.push_back(10);
   
     cout<<"THE SIZE OF THE VECTOR IS "<<marks.size();
    marks.push_back(50);

    cout<<"\n THE SIZE OF THE VECTOR IS "<<marks.size();
    marks.push_back(60);
      cout<<"\n THE SIZE OF THE VECTOR IS "<<marks.size();
    cout<<"\n"<<marks.capacity();
    
    return 0;
}