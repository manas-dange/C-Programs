#include <iostream>
using namespace std;
int main() {
    int matrix1[2][2], matrix2[2][2], matrix3[2][2];
    cout << "Enter elements of matrix1:" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix1[i][j];
    cout << "Enter elements of matrix2:" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix2[i][j];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << matrix3[i][j] << " ";
        cout << endl;
    }
    return 0;
}
