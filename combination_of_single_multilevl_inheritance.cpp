#include <iostream>
using namespace std;
class Vehicle{
    public :
        Vehicle(){
    cout << "This is Vehicle"<<endl;
        }
};
class FourWheeler{
    public:
FourWheeler(){
    cout << "This is Four Wheeler class"<<endl;
    }
};
class Car : public Vehicle{
    public:
Car(){
    cout << "This is Car class"<<endl;
    }
};
class Bus : public Vehicle, public FourWheeler{
    public:
Bus(){
    cout<<"This is Bus class"<<endl;
    }
};
int main(){
    Car obj1;
    Bus obj2;
    return 0;
}
