#include <iostream>
#include <string> 
using namespace std;

int main() {
    int idades[5];
    string nomes[5];

    cout << "Digite o nome e a idade de 5 pessoas:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i + 1 << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
    }

    cout << "\n=== Dados Cadastrados ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Pessoa " << i + 1 << ": " << nomes[i] 
             << " - " << idades[i] << " anos" << endl;
    }

    return 0;
}
