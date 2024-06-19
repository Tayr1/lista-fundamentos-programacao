#include <iostream>
#include <iomanip>  

using namespace std;

const int tamanho = 5;  

int main() {
    double A[tamanho];
    double B[tamanho];
    double produtoEscalar = 0.0;

    
    cout << "Digite os elementos do vetor A (5 numeros reais):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << " de A: ";
        cin >> A[i];
    }

    cout << "\nDigite os elementos do vetor B (5 numeros reais):\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << " de B: ";
        cin >> B[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        produtoEscalar += A[i] * B[i];
    }

    
    cout << "\nVetor A:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << fixed << setprecision(2) << A[i] << " ";
    }
    cout << "\nVetor B:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << fixed << setprecision(2) << B[i] << " ";
    }

    
    cout << "\n\nProduto Escalar (A . B): " << fixed << setprecision(2) << produtoEscalar << endl;

    return 0;
}
