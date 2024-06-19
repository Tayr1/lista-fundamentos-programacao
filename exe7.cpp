#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int maior = vetor[0]; 
    int posicao_maior = 0;

    
    cout << "Digite " << tamanho << " numeros inteiros para preencher o vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Posicao " << i << ": ";
        cin >> vetor[i];

        
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i; 
        }
    }

    
    cout << "\nVetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    
    cout << "O maior elemento do vetor eh: " << maior << endl;
    cout << "Ele se encontra na posicao: " << posicao_maior << endl;

    return 0;
}
