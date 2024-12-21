#include <iostream>
using namespace std;

void even_or_odd(int x){
    int a;
    cout << "Enter a number";
    cin >>a;
    
    if(a%2 == 0){
        cout << "even";}
    else if(a%2 !=0){
        cout << "odd";
    }
}
int main(){
    even_or_odd(4);
}