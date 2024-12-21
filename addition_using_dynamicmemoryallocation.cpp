// create a c++ program to add two numbers using dynamic memory allocation
#include <iostream>
using namespace std;
int main(){
    int * ptr1;
    int * ptr2;
    int addition;

    ptr1 = new int;
    ptr2 = new int;

    cout << "Enter first number";
    cin >> *ptr1;

    cout << "Enter second number";
    cin >> *ptr2;

    addition = *ptr1 + *ptr2;

    cout << "Sum of pointer variables : " << addition << endl;

    delete ptr1;
    delete ptr2;

    addition = *ptr1 + *ptr2;
    cout << "sum of pointer variables : " <<addition;
    
}