#include <iostream>
using namespace std;
class ABC{
    private:
        string g;
    public :
        void setName(string name) {g = name; }

        void printname(){ cout << "My name is : " << g;}
};
int main(){
    ABC obj1;
    obj1.setName("Manas");

    obj1.printname();
    return 0;
}