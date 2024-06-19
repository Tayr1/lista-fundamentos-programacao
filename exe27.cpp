#include <iostream>
#include <vector>

using namespace std;

bool ehPrimo(int numero) {
    if (numero <= 1) return false;  

    
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;  
        }
    }
    return true;  
}

int main() {
    const int tamanho = 10;
    vector<int> numeros(tamanho);

 
    cout << "Digite " << tamanho << " numeros inteiros:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

   
    cout << "\nNumeros primos encontrados e suas posicoes:\n";
    for (int i = 0; i < tamanho; ++i) {
        if (ehPrimo(numeros[i])) {
            cout << numeros[i] << " (posicao " << i << ")" << endl;
        }
    }

    return 0;
}
