#include <iostream>
using namespace std;

int add(int a = 5, int b = 10)
{
    return a + b;
}

int main()
{
    cout << add() << endl;
    cout << add(20) << endl;
    cout << add(20,30);

    return 0;
}