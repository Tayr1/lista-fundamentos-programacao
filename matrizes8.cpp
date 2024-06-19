#include <iostream>

using namespace std;

const int tamanho = 3; 

int main() {
    int matriz[tamanho][tamanho];
    int soma_acima_diagonal = 0;

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            soma_acima_diagonal += matriz[i][j];
        }
    }

    
    cout << "\nSoma dos elementos acima da diagonal principal: " << soma_acima_diagonal << endl;

    return 0;
}
