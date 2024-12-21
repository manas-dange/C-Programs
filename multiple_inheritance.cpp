#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"the vehicle"<<endl;
    }
    void display(){
        cout<<"display"<<endl;
    }
};
class company{
    public:
    company(){
        cout<<"its bmw"<<endl;
    }
};
class car:public vehicle,public company{
    
};
int main(){
    car obj;
    obj.display();
    return 0;