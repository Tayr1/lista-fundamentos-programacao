#include <iostream>

using namespace std;

const int tamanho = 3; 

int main() {
    int matriz[tamanho][tamanho];
    int soma_diagonal_secundaria = 0;

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    for (int i = 0; i < tamanho; ++i) {
        soma_diagonal_secundaria += matriz[i][tamanho - 1 - i];
    }

    
    cout << "\nSoma dos elementos na diagonal secundaria: " << soma_diagonal_secundaria << endl;

    return 0;
}
