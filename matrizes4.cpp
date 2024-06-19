#include <iostream>

using namespace std;

const int tamanho = 4; 

int main() {
    int matriz[tamanho][tamanho];
    int maior_valor = -1; 
    int linha_maior, coluna_maior;

   
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

            
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    
    cout << "\nMatriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "\nMaior valor encontrado: " << maior_valor << endl;
    cout << "Localizacao (linha, coluna): (" << linha_maior << ", " << coluna_maior << ")" << endl;

    return 0;
}
