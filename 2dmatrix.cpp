// create 2*2 matrix using two dimensional array using user input
#include <iostream>
using namespace std;
int main(){
    int i;
    int arr[2][2];
    cout<<"Enter elements for the 2d array";
    for(int i=0; i<2; i++){ 
        for (int j=0; j<2; j++){
            int a; 
            cin >> a; 
            arr [i][j] = a; 
        }
    }
    for(int k=0; k<2; k++){
        for (int l=0; l<2; l++){
            cout << arr[k][l] << " ";
    }cout << endl;
}
return 0;
}