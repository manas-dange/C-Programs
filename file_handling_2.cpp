#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream my_file("abc.txt");
    if (!my_file){
        cout<<"Error : Unable to open the file."<<endl;
        return 1;
    }
    my_file<<"Hi Btech Students"<<endl;
    my_file<<"This is C++ session"<<endl;
    my_file<<"ALL THE BEST"<<endl;
    my_file.close();
    return 0;
}