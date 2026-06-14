#include <iostream>
#include <iomanip>

// Imports the entire standard namespace globally
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Streamlined syntax without std:: prefixes
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Format output stream to 2 decimal places
    cout << fixed << setprecision(2);

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cerr << "Error: Division by zero is undefined." << endl;
            }
            break;

        default:
            cerr << "Error: '" << op << "' is an invalid operator." << endl;
            break;
    }

    return 0;
}
