#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;

    
    cout << "Digite um numero inteiro positivo: ";
    cin >> N;
    while (N <= 0) {
        cout << "Numero invalido! Digite novamente: ";
        cin >> N;
    }

    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) continue; 
        if (i > 50) break;        

        
        cout << i << " - " << ((i % 2 == 0) ? "Par" : "Impar") << endl;
    }

    return 0;
}
