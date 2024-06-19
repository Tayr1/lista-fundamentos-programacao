#include <iostream>

using namespace std;

const int tamanho = 4;

int main() {
    int matriz[tamanho][tamanho];
    int count_maiores_que_10 = 0;

    
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Digite o elemento da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

            
            if (matriz[i][j] > 10) {
                count_maiores_que_10++;
            }
        }
    }

  
    cout << "\nQuantidade de valores maiores que 10 na matriz: " << count_maiores_que_10 << endl;

    return 0;
}
