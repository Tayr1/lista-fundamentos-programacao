#include <iostream>

using namespace std;

const int tamanho = 100; 

bool nao_e_multiplo_de_7(int num) {
    return num % 7 != 0;  
}

bool termina_com_7(int num) {
    return num % 10 == 7;  
}

int main() {
    int vetor[tamanho];
    int numero = 1; 

    int contador = 0;  

    while (contador < tamanho) {
        if (nao_e_multiplo_de_7(numero) || termina_com_7(numero)) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

   
    cout << "Primeiros " << tamanho << " números naturais que não são múltiplos de 7 ou terminam com 7:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i];
        if (i < tamanho - 1) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
