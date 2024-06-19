        #include <iostream>

        using namespace std;

        const int tamanho = 10;  
        int main() {
            int vetor[tamanho];
            int x;
            int contagem = 0;

            
            cout << "Digite 10 numeros inteiros para preencher o vetor:\n";
            for (int i = 0; i < tamanho; ++i) {
                cout << "Digite o numero " << i + 1 << ": ";
                cin >> vetor[i];
            }

            
            cout << "\nDigite um numero inteiro x para verificar os multiplos: ";
            cin >> x;

            
            cout << "\nMultiplos de " << x << " encontrados no vetor:\n";
            for (int i = 0; i < tamanho; ++i) {
                if (vetor[i] % x == 0) {
                    cout << vetor[i] << " ";
                    contagem++;
                }
            }

            
            if (contagem == 0) {
                cout << "Nao foram encontrados multiplos de " << x << " no vetor.\n";
            }

            return 0;
        }
