#include <iostream>

using namespace std;

const int tamanho = 10;  

int main() {
    int A[tamanho];
    int B[tamanho];
    int C[tamanho];

    
    cout << "Digite os elementos do vetor A (10 numeros inteiros):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << " de A: ";
        cin >> A[i];
    }

    cout << "\nDigite os elementos do vetor B (10 numeros inteiros):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << " de B: ";
        cin >> B[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        C[i] = A[i] - B[i];
    }

    
    cout << "\nVetor C (resultado da diferenca A - B):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
