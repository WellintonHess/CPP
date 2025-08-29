#include <iostream>
using namespace std;


int somarVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    const int TAM = 5;
    int numeros[TAM];

    
    cout << "Digite " << TAM << " numeros inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    
    int resultado = somarVetor(numeros, TAM);

    
    cout << "A soma dos elementos do vetor = " << resultado << endl;

    return 0;
}
