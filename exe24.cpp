#include <iostream>
#include <limits>  

using namespace std;

const int quantidade_alunos = 10;

int main() {
    int numero_aluno;
    double altura;
    int aluno_mais_baixo, aluno_mais_alto;
    double altura_mais_baixa = numeric_limits<double>::max();  
    double altura_mais_alta = numeric_limits<double>::lowest(); 

    
    for (int i = 0; i < quantidade_alunos; ++i) {
        cout << "Digite o numero do aluno " << i + 1 << ": ";
        cin >> numero_aluno;
        cout << "Digite a altura do aluno " << i + 1 << " (em metros): ";
        cin >> altura;

        
        if (altura < altura_mais_baixa) {
            altura_mais_baixa = altura;
            aluno_mais_baixo = numero_aluno;
        }

        
        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            aluno_mais_alto = numero_aluno;
        }
    }

    
    cout << "\nAluno mais baixo:\n";
    cout << "Numero do aluno: " << aluno_mais_baixo << endl;
    cout << "Altura: " << altura_mais_baixa << " metros\n\n";

    cout << "Aluno mais alto:\n";
    cout << "Numero do aluno: " << aluno_mais_alto << endl;
    cout << "Altura: " << altura_mais_alta << " metros\n";

    return 0;
}
