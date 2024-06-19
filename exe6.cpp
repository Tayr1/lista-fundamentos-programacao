#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int maior, menor;

    
    cout << "Digite " << tamanho << " valores inteiros para preencher o vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Posicao " << i << ": ";
        cin >> vetor[i];
    }

    
    maior = vetor[0];
    menor = vetor[0];

    
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    
    cout << "\nO maior elemento do vetor eh: " << maior << endl;
    cout << "O menor elemento do vetor eh: " << menor << endl;

    return 0;
}