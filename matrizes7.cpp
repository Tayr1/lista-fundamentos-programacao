#include <iostream>

using namespace std;

const int tamanho = 10; 

int main() {
    int matriz[tamanho][tamanho];

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (i < j) {
                matriz[i][j] = 2*i + 7*j;
            } else if (i == j) {
                matriz[i][j] = 3*i*i + 1;
            } else { 
                matriz[i][j] = 4*i*i*i + 5*j*j + 1;
            }
        }
    }

    
    cout << "Matriz gerada:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
