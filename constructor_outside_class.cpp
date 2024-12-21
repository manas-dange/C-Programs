//defining the constructor outside the class
#include <iostream>
using namespace std;
class student{
    public :
        int rno;
        char name[50];
        double fee;
        student();
        void display();
};
student::student()
{
    cout << "Enter the Roll No : ";
    cin >> rno;
    cout << "Enter the Name : ";
    cin >> fee;
}
void student :: display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}
int main()
{
    student s;
    s.display();
    return 0;
}