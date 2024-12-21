#include <iostream>
using namespace std;
class base_2{
    public:
    base_2(){
        cout<<"base 2"<<endl;
    }
};
class base_1:public base_2{
};
class derived_class:public base_1{
};
int main(){
    derived_class obj;
    return 0;
}