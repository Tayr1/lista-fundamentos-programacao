#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

const int tamanho = 4; 

int main() {
    int matriz[tamanho][tamanho];

    
    srand(time(0));

    
    cout << "Matriz original:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = rand() % 20 + 1; 
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "\nMatriz transformada em matriz triangular inferior:\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (j > i) {
                matriz[i][j] = 0;
            }
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
