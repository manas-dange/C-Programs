#include <iostream>
using namespace std;

//declaring a function
int add(int a, int b)
{
    return (a+b);
}
int main(){
    int sum;
    //calling the function and string
    //the returned value in sum
    sum = add(100,70);

    cout << "100 + 70 = " << sum << endl;

    return 0;
}