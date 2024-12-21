
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
        //this statement is incremented by 1
    cout<< "x++ is" << x++ <<endl;

//this statement is incremented by 1
//from already incremented
//statement resulting in 
//incrementing of 2
    cout <<"++x is" << ++x << endl;

    int y = 10;

    //this statement decremented by 1
    cout << "y-- is" << y-- << endl;

    //this statement decremeneted by 1
    //from already decremented
    // statement resulting in
    //decrementing of 2
    cout <<"--y is" <<--y<<endl;

    return 0;
}
