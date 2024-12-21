#include <iostream>
using namespace std;
int main()
{
    //declaration of variable
    int *arr, max_num, i;

    cout <<" Enter total number of elements to be entered : ";
    cin >> max_num;

    //use new operator to declare array memory at run time
    arr = new int (max_num);

    cout << "Enter the numbers : \n";
    for (i=0; i<max_num; i++) //input array from user
    {
        cout << " Number " << i+1<<" is ";
        cin >> arr[i];
    }
    cout << " Numbers are : ";
    for (i=0; i< max_num; i ++)
    {
        cout << arr[i] << "\t";
    }

    //use delete operator to deallocate dynamic memory
    delete [ ] arr;
    return 0;

}