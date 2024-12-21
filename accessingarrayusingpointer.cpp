#include <iostream>
using namespace std;

int main(){
    int a[3] = (10,20,30);
    int *ptr = a;
    cout << "access first element" << *ptr << endl;
    cout << "access second element" << (ptr+1) << endl;
    cout << "access third element" << *ptr << endl;
}