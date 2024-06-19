#include <iostream>

using namespace std;

const int NUM_ALUNOS = 3;
const int NUM_QUESTOES = 10;

int main() {
    char gabarito[NUM_QUESTOES];
    int matricula[NUM_ALUNOS];
    char respostas_alunos[NUM_ALUNOS][NUM_QUESTOES];
    float nota[NUM_ALUNOS] = {0};
    float media = 7.0;
    int aprovados = 0;

   
    cout << "Digite o gabarito com as respostas corretas (a, b, c, d ou e):\n";
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        cout << "Questao " << i + 1 << ": ";
        cin >> gabarito[i];
    }

    
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "\nDigite a matricula do aluno " << i + 1 << ": ";
        cin >> matricula[i];

        cout << "Digite as respostas do aluno " << i + 1 << ":\n";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questao " << j + 1 << ": ";
            cin >> respostas_alunos[i][j];
            
            if (respostas_alunos[i][j] == gabarito[j]) {
                nota[i]++;
            }
        }
       
        nota[i] = (nota[i] / NUM_QUESTOES) * 10;

       
        if (nota[i] >= media) {
            aprovados++;
        }
    }

  
    cout << "\nResultados dos alunos:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << matricula[i] << ": ";
        cout << "Respostas = ";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << respostas_alunos[i][j] << " ";
        }
        cout << ", Nota = " << nota[i] << endl;
    }

    
    float percentual_aprovacao = (float(aprovados) / NUM_ALUNOS) * 100;
    cout << "\nPercentual de aprovacao: " << percentual_aprovacao << "%" << endl;

    return 0;
}
