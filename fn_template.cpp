#include <iostream>
using namespace std;
template<class T>
void printArray(T arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = (1, 2, 3, 4);
    printArray(arr, 4);
    return 0;
}