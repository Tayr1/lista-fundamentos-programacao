#include <iostream>

using namespace std;

const int tamanho = 4; 

int main() {
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];
    int matriz_resultante[tamanho][tamanho];

    
    cout << "Digite os elementos da primeira matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    
    cout << "\nDigite os elementos da segunda matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

   
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz_resultante[i][j] = max(matriz1[i][j], matriz2[i][j]);
        }
    }

    
    cout << "\nMatriz resultante com os maiores valores de cada posicao:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz_resultante[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
