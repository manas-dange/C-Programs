#include <iostream>
using namespace std;
class AdditionClass{
    public:
    int num1;
    int num2;
    int num3;
    void read(){
        cin>>num1;
        cin>>num2;
    }
    void sum(){
        num3 = num1 + num2;
    }
    void print(){
    cout << num3 << endl;
}
};
int main(){
    AdditionClass obj1;
    AdditionClass obj2;
    obj1.read();
    obj1.sum();
    obj1.print();
}
