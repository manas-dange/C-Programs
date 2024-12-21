//C++ program to implement
// swapping using call by function
#include <iostream>
using namespace std;
//swap functions to demonstrate
//call by value method
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
    cout << " After swapping in function x : " << x
    << ", y : " << y << endl;
}
//driver code
int main(){
    int x = 1, y =2;
    cout << "Before Swapping";
    cout << "x : " << x << ", y : " << y << endl;
    swap(x,y);
    cout << "After swapping : ";
    cout << "x : " << x << ", y : " << y << endl;
    return 0;
}