//basically putting one loop inside another loop
// inner loop will be executed one time for each iteration of the "outer loop".
// nested for loop :
#include <iostream>
using namespace std;

int main(){
    //outer loop
    for (int i = 1; i <=2; ++i) {
        cout << "Outer: " << i << "\n"; // executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; ++j) {
        cout << "Inner: " << j << "\n"; //executes 6 times(2*3)
    }
    }
}