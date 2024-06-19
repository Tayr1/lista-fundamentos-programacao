#include <iostream>

using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_QUESTOES = 10;

int main() {
    char gabarito[NUM_QUESTOES];
    char respostas_alunos[NUM_ALUNOS][NUM_QUESTOES];
    int resultado[NUM_ALUNOS] = {0};

    
    cout << "Digite o gabarito com as respostas corretas (a, b, c ou d):\n";
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        cout << "Questao " << i + 1 << ": ";
        cin >> gabarito[i];
    }

    
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Digite as respostas do aluno " << i + 1 << ":\n";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questao " << j + 1 << ": ";
            cin >> respostas_alunos[i][j];
            
            if (respostas_alunos[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

   
    cout << "\nResultado dos alunos:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ": Pontuacao = " << resultado[i] << " pontos\n";
    }

    return 0;
}
