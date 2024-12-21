#include <iostream>
using namespace std;

int main(){
string str1 = "apple";
string str2 = "banana";
if (str1 == str2){
    cout << "Strings are equal" << endl;
}
else {
    cout << "Strings are not equal" << endl;
}
int result = str1.compare(str2);
if (result == 0){
    cout << "Strings are equal" << endl;
}
else if (result < 0){
    cout << "str1 comes before str2" << endl;

}
else {
    cout << "str1 comes after str2" << endl;
}

//substrings
string text = "Hello World: ";
cout << text << endl;
string sub = text.substr(0,5);
cout << sub << endl;
}
