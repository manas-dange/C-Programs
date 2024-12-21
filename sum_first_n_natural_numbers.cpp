#include <iostream>
using namespace std;
int sum(int);
int main(){
    int n, result;
    cout << "Enter a non-negative number : ";
    cin >> n;
    result = sum(n);
    cout << "sum of " << n << " natural numbers is " << result;
    return 0;
}
int sum(int n){
    if (n>1){
        return n + sum(n-1);
    } else {
        return 1;
    }
}