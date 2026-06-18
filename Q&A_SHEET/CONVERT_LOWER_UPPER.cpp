#include <iostream>
using namespace std;
char Convert(char name)
{
    char ans=name-'a'+'A';
    return ans;
}
int main() {
char name;
cin>>name;
cout<<Convert(name);
    return 0;
}