#include <iostream>

using namespace std;

const int tamanho = 10;  

int main() {
    int vetor1[tamanho];
    int vetor2[tamanho];  
    int contadorVetor2 = 0; 

    
    cout << "Digite 10 numeros inteiros no intervalo [0, 50]:\n";
    for (int i = 0; i < tamanho; ++i) {
        do {
            cout << "Digite o numero " << i + 1 << ": ";
            cin >> vetor1[i];
        } while (vetor1[i] < 0 || vetor1[i] > 50);  

        
        if (vetor1[i] % 2 != 0) {
            vetor2[contadorVetor2] = vetor1[i];
            contadorVetor2++;
        }
    }

    
    cout << "\nElementos do vetor1 e vetor2, 2 por linha:\n";
    for (int i = 0; i < tamanho; ++i) {
        
        cout << vetor1[i] << " ";

        
        if (i < contadorVetor2) {
            cout << vetor2[i];
        }

        
        if ((i + 1) % 2 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
