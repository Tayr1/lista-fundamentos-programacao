#include <iostream>

using namespace std;

const int tamanho = 5;

int main() {
    int matriz[tamanho][tamanho];

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = 0;
        }
    }

    
    for (int i = 0; i < tamanho; ++i) {
        matriz[i][i] = 1;
    }

    
    cout << "Matriz 5x5 com 1 na diagonal principal e 0 nos demais elementos:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
