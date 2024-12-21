#include <iostream>
using namespace std;

void greatest(int x, int y, int z){
    int a, b, c;
    cout << "Enter first number";
    cin >> a;

    cout << "Enter second number";
    cin >> b;

    cout << "Enter third number";
    cin >> c;

    if (a > b and a >c){
        cout << a << " is the greatest";
    }
    else if (b > a and b > c){
        cout << b << " is the greatest";
    }
    else if (c > a and c>b){
        cout << c << " is the greatest";
    }
}
int main(){
    greatest(2,3,4);
    
}