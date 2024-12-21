#include <iostream>
using namespace std;

int main(){
string greeting = "Hello World!";
cout << greeting << endl;
string name;

cout<<"Enter your name: ";
cin >> name;
cout << name << endl;

int length = greeting.length();
cout << length << endl;

string firstName = "Hi "  + name;
string lastName = "How are you";
string fullName = firstName + " " + lastName;
cout << fullName << endl;
string base = "Hello";
cout << base << endl;
base.append("World!");
cout << base << endl;
}