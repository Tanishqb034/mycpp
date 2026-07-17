#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    auto it = v.begin();

    cout << *it;

    return 0;
}