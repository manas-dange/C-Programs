#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number";
    cin>>a;

    try{
        if(a == 0)
            throw("0 is neither positive nor negative");
        else if (a>0)
            throw("number is positive");
        else if(a<0)
            throw
    }
}