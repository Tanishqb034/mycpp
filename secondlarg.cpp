#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 40, c = 25, d = 30;
    int second;

    if ((a >= b && a >= c && a >= d)) {
        // a is largest
        if (b >= c && b >= d)
            second = b;
        else if (c >= b && c >= d)
            second = c;
        else
            second = d;
    }

    else if ((b >= a && b >= c && b >= d)) {
        // b is largest
        if (a >= c && a >= d)
            second = a;
        else if (c >= a && c >= d)
            second = c;
        else
            second = d;
    }

    else if ((c >= a && c >= b && c >= d)) {
        // c is largest
        if (a >= b && a >= d)
            second = a;
        else if (b >= a && b >= d)
            second = b;
        else
            second = d;
    }

    else {
        // d is largest
        if (a >= b && a >= c)
            second = a;
        else if (b >= a && b >= c)
            second = b;
        else
            second = c;
    }

    cout << "Second Greatest = " << second;

    return 0;
}