#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> c;

    // Perform operation based on the operator
    if (c == '+') {
        cout << "Addition: " << (a + b) << endl;
    } else if (c == '-') {
        cout << "Subtraction: " << (a - b) << endl;
    } else if (c == '*') {
        cout << "Multiplication: " << (a * b) << endl;
    } else if (c == '/') {
        if (b != 0) {
            cout << "Division: " << (a / b) << endl;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
