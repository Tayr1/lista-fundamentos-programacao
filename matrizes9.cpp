#include <iostream>

using namespace std;

const int tamanho = 3; 

int main() {
    int matriz[tamanho][tamanho];
    int soma_abaixo_diagonal = 0;

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (j < i) {
                soma_abaixo_diagonal += matriz[i][j];
            }
        }
    }

    
    cout << "\nSoma dos elementos abaixo da diagonal principal: " << soma_abaixo_diagonal << endl;

    return 0;
}
