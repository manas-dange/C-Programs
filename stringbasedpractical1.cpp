// 1. create string using c style string "welcome to c++ program
//      perform following operations : 
//          1. calculate total length of string
//          2. extract welcome from string
//          3. add "Btech" in existing string

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[50] = "Welcome to C++ Program";
    int c = strlen(str);
    cout << c;


}