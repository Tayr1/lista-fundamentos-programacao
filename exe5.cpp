#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int contadorPares = 0;

    
    cout << "Digite " << tamanho << " valores inteiros para preencher o vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Posicao " << i << ": ";
        cin >> vetor[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] % 2 == 0) {
            contadorPares++;
        }
    }

    
    cout << "\nO vetor possui " << contadorPares << " valor(es) par(es)." << endl;

    return 0;
}