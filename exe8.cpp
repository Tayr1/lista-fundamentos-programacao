#include <iostream>
using namespace std;

int main() {
    const int tamanho = 6;
    int vetor[tamanho];

    
    cout << "Digite " << tamanho << " valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i+1 << ": ";
        cin >> vetor[i];
    }

    
    cout << "\nValores lidos na ordem inversa:" << endl;
    for (int i = tamanho - 1; i >= 0; --i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
