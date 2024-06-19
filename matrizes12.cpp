#include <iostream>

using namespace std;

const int tamanho = 3; 

int main() {
    int matriz[tamanho][tamanho];
    int transposta[tamanho][tamanho];

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

  
    cout << "\nMatriz transposta:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << transposta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
