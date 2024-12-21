#include <iostream>
using namespace std;
class Outside_Class{
    public:
        string g;
        int id;

        void printname();
        void printid(){ cout << " id is : " << id;}
};
void Outside_Class::printname()
{
    cout << "Name is : " << g;
}
int main()
{
    Outside_Class obj1;
    obj1.g = "xyz";
    obj1.id = 15;

    obj1.printname();
    cout << endl;

    obj1.printid();
    return 0;
}