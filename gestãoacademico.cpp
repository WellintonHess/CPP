#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nomeAluno, nomeUC;
    float cargaHoraria, N1, N2, N3, limiteFaltas, mediaFinal;

    
    cout << "Digite o nome do aluno: ";
    getlfgine(cin, nomeAluno);
    cout << "Digite o nome da UC: ";
    getline(cin, nomeUC);
    cout << "Digite a carga horaria da UC (em horas): ";
    cin >> cargaHoraria;
    cout << "Digite a nota N1: ";
    cin >> N1;
    cout << "Digite a nota N2: ";
    cin >> N2;
    cout << "Digite a nota N3: ";
    cin >> N3;

    
    limiteFaltas = cargaHoraria * 0.25; 
    mediaFinal = (N1 + N2 + N3) / 3;

    
    cout << fixed << setprecision(2);
    cout << "\nNome do Aluno: " << nomeAluno << endl;
    cout << "Nome da UC: " << nomeUC << endl;
    cout << "Carga Horaria: " << cargaHoraria << " horas" << endl;
    cout << "Limite de Faltas: " << limiteFaltas << " horas" << endl;
    cout << "Nota N1: " << N1 << endl;
    cout << "Nota N2: " << N2 << endl;
    cout << "Nota N3: " << N3 << endl;
    cout << "Media Final: " << mediaFinal << endl;

    
    if (mediaFinal >= 7.0) {
        cout << "Resultado: APROVADO" << endl;
    } else {
        cout << "Resultado: REPROVADO" << endl;
    }

    return 0;
}
