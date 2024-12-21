#include <iostream>
using namespace std;

void demonstration_pointer()
{
    int var = 20;

    //declare pointer variable
    int * ptr;

    ptr = &var;

    //asign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
    
}

//driver program
int main(){
    demonstration_pointer();
    return 0; 
}