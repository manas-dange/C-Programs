#include <iostream>
using namespace std;
class calculation{
    public:
    void num(int x, int y){
        cout<<x+y<<endl;
    }
    void num(int x, int y, int z){
        cout <<x+y+z<<endl;
    }
};
int main(){
    calculation obj;
    obj.num(10,20,30);
    obj.num(10,20);
    return 0;
}