#include <iostream>
#include <string>

using namespace std;

int main() {
    float nota;
    cout << "Informe a nota do aluno (0 a 10): ";
    cin >> nota;

    if (nota >= 9) {
        cout << "Conceito A" << endl;
    } else if (nota >= 7) {
        cout << "Conceito B" << endl;
    } else if (nota >= 5) {
        cout << "Conceito C" << endl;
    } else {
        cout << "Conceito D" << endl;
    }

    return 0;
}
