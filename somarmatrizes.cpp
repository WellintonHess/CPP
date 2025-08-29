#include <iostream>
using namespace std;


void somarMatrizes(int A[3][3], int B[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}


void imprimirMatriz(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int soma[3][3]; 

    
    somarMatrizes(matriz1, matriz2, soma);

    cout << "Matriz 1:" << endl;
    imprimirMatriz(matriz1);

    cout << "\nMatriz 2:" << endl;
    imprimirMatriz(matriz2);

    cout << "\nMatriz Soma:" << endl;
    imprimirMatriz(soma);

    return 0;
}
