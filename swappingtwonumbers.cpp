//c++ code to swap two numbers with using third variable
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Swap using arithmetic operations
    a = a + b; // Step 1: a becomes sum of a and b
    b = a - b; // Step 2: b becomes original a (a + b - b = a)
    a = a - b; // Step 3: a becomes original b (a + b - a = b)

    // Output the swapped values20

    cout << "After swapping: \n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
} 
