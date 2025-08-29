#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    string nomeAluno, nomeUC;
    float cargaHoraria, n1, n2, n3, mediaFinal, limiteFaltas;

    
    cout << "Digite o nome do aluno: ";
    getline(cin, nomeAluno);

    cout << "Digite o nome da Unidade Curricular (UC): ";
    getline(cin, nomeUC);

    cout << "Digite a carga horaria total da UC (em horas): ";
    cin >> cargaHoraria;

    cout << "Digite a nota da 1a avaliacao (N1): ";
    cin >> n1;

    cout << "Digite a nota da 2a avaliacao (N2): ";
    cin >> n2;

    cout << "Digite a nota da 3a avaliacao (N3): ";
    cin >> n3;

    
    limiteFaltas = cargaHoraria * 0.25;
    mediaFinal = (n1 + n2 + n3) / 3;

    
    cout << fixed << setprecision(2);
    cout << "\nNome do Aluno: " << nomeAluno << endl;
    cout << "Nome da UC: " << nomeUC << endl;
    cout << "Carga Horaria: " << cargaHoraria << " horas" << endl;
    cout << "Limite de Faltas: " << limiteFaltas << " horas" << endl;
    cout << "Nota N1: " << n1 << endl;
    cout << "Nota N2: " << n2 << endl;
    cout << "Nota N3: " << n3 << endl;
    cout << "Media Final: " << mediaFinal << endl;

    if (mediaFinal >= 7.0)
        cout << "Resultado: APROVADO" << endl;
    else
        cout << "Resultado: REPROVADO" << endl;

    return 0;
}
