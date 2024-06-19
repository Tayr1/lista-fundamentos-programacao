#include <iostream>
using namespace std;

int main() {
    const int num_alunos = 15;
    double notas[num_alunos];
    double soma_notas = 0.0;
    double media_geral;

    
    cout << "Digite as notas das provas dos " << num_alunos << " alunos:" << endl;
    for (int i = 0; i < num_alunos; ++i) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma_notas += notas[i]; 
    }

    
    media_geral = soma_notas / num_alunos;

    
    cout << "\nA media geral das notas dos alunos eh: " << media_geral << endl;

    return 0;
}