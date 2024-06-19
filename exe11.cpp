#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    double vetor[tamanho];
    int quantidade_negativos = 0;
    double soma_positivos = 0.0;

    
    cout << "Digite " << tamanho << " numeros reais para preencher o vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] < 0) {
            quantidade_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    
    cout << "\nQuantidade de numeros negativos: " << quantidade_negativos << endl;
    cout << "Soma dos numeros positivos: " << soma_positivos << endl;

    return 0;
}
