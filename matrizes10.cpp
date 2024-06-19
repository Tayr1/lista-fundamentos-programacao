#include <iostream>

using namespace std;

const int tamanho = 3; 

int main() {
    int matriz[tamanho][tamanho];
    int soma_diagonal_principal = 0;

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

   
    for (int i = 0; i < tamanho; ++i) {
        soma_diagonal_principal += matriz[i][i];
    }

   
    cout << "\nSoma dos elementos na diagonal principal: " << soma_diagonal_principal << endl;

    return 0;
}
