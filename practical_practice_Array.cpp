#include <iostream>
using namespace std;

int main(){
    int x[10];
    cout << "enter elements for array : ";
    for (int i=0;i<10;i++){
        int b;
        cin>>b;
        x[i]=b;
    }
    for (int j=0; j<10; j++){
        cout << x[j]<< " ";
    }
}