#include <iostream>
using namespace std;

int main() {
    const int quantidade = 5;
    int valores[quantidade];
    int maior, menor;
    double media = 0.0;

    
    cout << "Digite " << quantidade << " valores inteiros:" << endl;
    for (int i = 0; i < quantidade; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];

        
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }

        
        media += valores[i];
    }

    
    media /= quantidade;

    
    cout << "\nValores lidos:" << endl;
    for (int i = 0; i < quantidade; ++i) {
        cout << valores[i] << " ";
    }
    cout << "\nMaior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}