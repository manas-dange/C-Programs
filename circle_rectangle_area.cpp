#include <iostream>
using namespace std;
void area(int x){
    cout<<"area of circle is : "<< 3.14*x*x <<endl;
}
void area(int x, int y){
    cout << "area of rectangle is : "<<x*y<<endl;
}
int main(){
    area(4);
    area(2,4);
    return 0;
}