#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string to be reversed -> ";
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}