#include <iostream>

using namespace std;

const int tamanho = 10;  

int main() {
    int A[tamanho];
    int B[tamanho];
    int C[tamanho * 2];  

   
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
        C[2 * i] = A[i];      
        C[2 * i + 1] = B[i];  
    }

    
    cout << "\nVetor C:\n";
    for (int i = 0; i < tamanho * 2; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
