#include <iostream>
using namespace std;

int main()
{
    int lw, up;

    cout << "ENTER THE LOWER LIMIT: ";
    cin >> lw;

    cout << "ENTER THE UPPER LIMIT: ";
    cin >> up;

    for (int i = lw; i <= up; i++)
    {
        if (i < 2)
            continue;

        bool prime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << i << endl;
        }
    }

    return 0;
}