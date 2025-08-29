#include <iostream>
using namespace std;

int main() {
    
    int matriz[3][4];

    
    cout << "Digite os valores da matriz 3x4:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    cout << "\nMatriz informada:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
