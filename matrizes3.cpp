#include <iostream>

using namespace std;

const int tamanho = 5; 

int main() {
    int matriz[tamanho][tamanho];

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = (i + 1) * (j + 1); 
        }
    }

    
    cout << "Matriz " << tamanho << "x" << tamanho << " com o produto da linha e coluna de cada elemento:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl;
    }

    return 0;
}
