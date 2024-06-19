#include <iostream>

using namespace std;

const int tamanho = 5; 

int main() {
    int matriz[tamanho][tamanho];
    int valor_procurado;
    bool encontrado = false;
    int linha_encontrado, coluna_encontrado;

  
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

   
    cout << "Digite o valor a";
        
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < tamanho; ++j) {
                if (matriz[i][j] == valor_procurado) {
                    encontrado = true;
                    linha_encontrado = i;
                    coluna_encontrado = j;
                    break;  
                }
            }
            if (encontrado) {
                break;
            }
        }

        
        if (encontrado) {
            cout << "\nValor encontrado na posicao: [" << linha_encontrado << "][" << coluna_encontrado << "]\n";
        } else {
            cout << "\nValor nao encontrado na matriz.\n";
        }

        return 0;
