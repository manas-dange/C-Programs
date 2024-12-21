#include <iostream>
using namespace std;

int main(){
    int*pnt = new int;
    *pnt = 5;
    cout << *pnt<<endl;

    cout <<*pnt;
    return 0;
}