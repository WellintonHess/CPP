#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    string nome;
    int idade;
    float altura, peso, imc;

    
    cout << "Digite o nome da pessoa: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    cout << "Digite o peso (em kg): ";
    cin >> peso;

    
    imc = peso / (altura * altura);

    
    cout << fixed << setprecision(2);
    cout << "\nNome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "IMC calculado: " << imc << endl;

    
    if (imc < 20) {
        cout << "Classificacao: OK" << endl;
    } else if (imc >= 20 && imc < 30) {
        cout << "Classificacao: Sobrepeso" << endl;
    } else {
        cout << "Classificacao: Obeso" << endl;
    }

    return 0;
}
