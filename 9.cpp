// write the program to inout 8 numbers into an array and count how many of them are even and how many are not 
#include <iostream>
using namespace std;

int main() {
    int arr[8];  
    int evenCount = 0, oddCount = 0;  

 
    cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
 
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;  
        }
    }
 
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}