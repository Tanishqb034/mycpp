// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include<vector>
using namespace std;

int main() {
 vector<int>ans;
    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(30);
    if(ans.empty()==true)
    {
        cout<<"\n VECTOR IS EMPTY";
    }
    else
    {
        cout<<"\n VECTOR IS NOT EMPTY ";
    }
    cout<<"\n Size OF THE VECTOR "<<ans.size();
    cout<<"\n THE CAPACITY OF THE VECTOR "<<ans.capacity();
    cout<<"\n FIRST ELE "<<ans.front()<<endl;
    cout<<"\n LAST ELE "<<ans.back()<<endl;
    ans.pop_back();
    cout<<"\n NEW LAST ELE "<<ans.back();
    return 0;
}