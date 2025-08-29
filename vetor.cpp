#include <iostream>
using namespace std;

int main() {
    int numeros[8]; // declara vetor de 8 posições

    // Entrada dos valores
    cout << "Digite 8 numeros inteiros:\n";
    for (int i = 0; i < 8; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Saída dos valores
    cout << "\nValores armazenados no vetor:\n";
    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
