#include <iostream>

using namespace std;

const int tamanho = 10;  

int main() {
    int vetor[tamanho];

    
    cout << "Digite 10 numeros inteiros para preencher o vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    
    cout << "\nVetor com valores nao negativos:\n";
    for (int i = 0; i < tamanho; 
