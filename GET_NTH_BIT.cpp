#include <iostream>
using namespace std;

int getBit(int n, int i)
{
    return (n >> i) & 1;
}

int main()
{
    cout << getBit(10, 1);
}