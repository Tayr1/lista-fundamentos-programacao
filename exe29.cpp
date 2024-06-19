#include <iostream>

using namespace std;

int main() {
    const int quantidade_numeros = 6;
    int numero;
    int numeros_pares[quantidade_numeros];
    int numeros_impares[quantidade_numeros];
    int soma_pares = 0;
    int quantidade_impares = 0;

    
    cout << "Digite " << quantidade_numeros << " numeros inteiros:\n";
    for (int i = 0; i < quantidade_numeros; ++i) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            numeros_pares[i] = numero;
            soma_pares += numero;
        } else {
            numeros_impares[quantidade_impares] = numero;
            quantidade_impares++;
        }
    }

   
    cout << "\nNumeros pares digitados:\n";
    for (int i = 0; i < quantidade_numeros; ++i) {
        if (numeros_pares[i] % 2 == 0) {
            cout << numeros_pares[i] << " ";
        }
    }
    cout << endl;

    
    cout << "\nSoma dos numeros pares digitados: " << soma_pares << endl;

    
    cout << "\nNumeros impares digitados:\n";
    for (int i = 0; i < quantidade_impares; ++i) {
        cout << numeros_impares[i] << " ";
    }
    cout << endl;

    
    cout << "\nQuantidade de numeros impares digitados: " << quantidade_impares << endl;

    return 0;
}
