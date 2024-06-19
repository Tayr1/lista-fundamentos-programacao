#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()

using namespace std;

const int NUM_LINHAS = 5;
const int NUM_COLUNAS = 5;
const int MAX_NUM = 99;

int main() {
    int cartela[NUM_LINHAS][NUM_COLUNAS];
    bool numeros_usados[MAX_NUM + 1] = {false}; 

    
    srand(time(0));

    
    for (int i = 0; i < NUM_LINHAS; ++i) {
        for (int j = 0; j < NUM_COLUNAS; ++j) {
            int num;
            do {
                num = rand() % (MAX_NUM + 1); 
            } while (numeros_usados[num]);   

            cartela[i][j] = num;
            numeros_usados[num] = true; 
        }
    }

    
    cout << "Cartela de Bingo gerada:\n";
    for (int i = 0; i < NUM_LINHAS; ++i) {
        for (int j = 0; j < NUM_COLUNAS; ++j) {
            cout << cartela[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
