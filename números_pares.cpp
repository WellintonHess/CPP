#include <iostream>
#include <string>
using namespace std;

int main() {
    int soma = 0;

    for (int i = 2; i <= 100; i += 2) { 
        soma += i;
    }

    cout << "A soma dos numeros pares de 1 a 100 e: " << soma << endl;

    return 0;
}
