#include <iostream>
using namespace std;

void isPrime(int x)
{
    int a;
    cout << "Enter a number";
    cin >> a;

    if (a%2 != 0){
        cout << "PRIME NUMBER";}
    else{
        cout<<"NOT PRIME";
    }
}
