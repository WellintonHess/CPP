#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> num;

    if (num <= 1) {
        primo = false; 
    } else {
        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                primo = false;
                break; 
            }
        }
    }

    if (primo) {
        cout << num << " e primo." << endl;
    } else {
        cout << num << " nao e primo." << endl;
    }

    return 0;
}
