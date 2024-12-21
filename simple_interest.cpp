#include <iostream>
using namespace std;
int main () {
    double p;
    cout << "Enter Principle: " <<endl;
    cin>> p;
    double r;
    cout <<"Enter Rate Of Interest: "<<endl;
    cin>> r;
    double t;
    cout<< "Enter Time Period: " <<endl;
    cin >>t;
    float a = (p*r*t)/100;
    cout<< "Simple Interest is: " <<a;
        
    return 0;
}