#include <iostream>
using namespace std;
class Vehicle{
    public :
        Vehicle()
        {
            cout << "This is Vehicle" << endl;
        }
        void display(){
            cout << "display";
        }
};
class Car : public Vehicle {
    //car class inherits the constructor of vehicle
};
int main(){
    Car obj;//this will call the vehicle constructor
    obj.display();
    return 0;
}