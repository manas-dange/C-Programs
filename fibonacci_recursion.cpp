#include <iostream>
using namespace std;
int fibonacci (int);
int main(){
    int n, result;
    cout <<" Enter a non-negative number : ";
    cin >> n;
    result = fibonacci(n);
    cout << "fibonacci of "<< n << " = " << result;
    return 0;
}
int fibonacci (int n){
    if (n>0){
        return (n);
    } else{
        fibonacci(n-1);
    }
}