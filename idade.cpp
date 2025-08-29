#include <iostream>
#include <string>
using namespace std;

int main() {
    int idade;
    cout << "Informe sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Voce e maior de idade." << endl;
    } else {
        cout << "Voce e menor de idade." << endl;
    }

    return 0;
}
