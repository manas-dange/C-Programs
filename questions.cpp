// WAP to calculate factorial of given number
// WAP to display reverse number of given number
// WAP to calculate sum of given numbers


// 3. wap to calculate sum of given numbers
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number, we'll print its factorial";
    cin >>n;
    int factorial = 1;
    for (int i = 1; i<=n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;
    return 0;
}




