#include <iostream>
using namespace std;
int main()
{
    
    int arr[5];
    int x;
    for (int i = 0; i<5; i++){
        cout << "Enter 5 numbers for array";
        cin >> x;
        arr[i] = x;
    }
    for (int j = 0 ; j < 5; j++)
    {
        cout << arr[j]<<endl;
    }
    return 0;

}