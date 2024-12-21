#include <iostream>
using namespace std;
int main(){
    cout<< "enter total percentage"<<endl;
    int a;
    cin>>a;
    if (a>=90 or a<100){
        cout<<"A+";
    }
    else if(a>=80 or a<70){
        cout<<"A";
    }
    else if (a>=70 or a<60){
        cout<<"B+";
    }
    else if (a>=60 or a<50){
        cout<<"B";
    }
    else if(a>=50 or a<40){
        cout<<"C";
    }
    else if(a>=40 or a<30){
        cout<<"D";
    }
    else if (a>=30 or a<20){
        cout<<"E";
    }
    else{
        cout<<"FAIL";
    }
}