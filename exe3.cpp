#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    const int tamanho = 10;
    double vetorOriginal[tamanho];
    double vetorQuadrados[tamanho];

    
    cout << "Digite " << tamanho << " numeros reais:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Numero " << i+1 << ": ";
        cin >> vetorOriginal[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        vetorQuadrados[i] = pow(vetorOriginal[i], 2);
    }

    
    cout << "\nVetor Original:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorOriginal[i] << " ";
    }
    cout << endl;

    
    cout << "Vetor dos Quadrados:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorQuadrados[i] << " ";
    }
    cout << endl;

    return 0;
}