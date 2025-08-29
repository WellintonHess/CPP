#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int LIN = 3, COL = 3;
    int matriz[LIN][COL];
    int soma = 0;

    // Entrada de dados
    cout << "Digite os valores da matriz 3x3:" << endl;
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            soma += matriz[i][j]; // já acumula a soma
        }
    }

    // Impressão formatada da matriz
    cout << "\nMatriz 3x3:\n";
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }

    // Soma dos elementos
    cout << "\nSoma de todos os elementos da matriz = " << soma << endl;

    // Diagonal principal
    cout << "Diagonal principal: ";
    for (int i = 0; i < LIN; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}