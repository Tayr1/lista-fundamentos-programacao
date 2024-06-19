#include <iostream>
#include <cmath> 

using namespace std;

const int n = 10;  

double calcularMedia(int vetor[]) {
    double soma = 0.0;
    for (int i = 0; i < n; ++i) {
        soma += vetor[i];
    }
    return soma / n;
}

double calcularDesvioPadrao(int vetor[], double media) {
    double soma_quadrados_diff = 0.0;
    for (int i = 0; i < n; ++i) {
        soma_quadrados_diff += pow(vetor[i] - media, 2);
    }
    return sqrt(soma_quadrados_diff / n);
}

int main() {
    int vetor[n];

    
    cout << "Digite os " << n << " numeros do vetor:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

   
    double media = calcularMedia(vetor);

    
    double desvio_padrao = calcularDesvioPadrao(vetor, media);

    
    cout << "\nMedia dos numeros: " << media << endl;
    cout << "Desvio padrao: " << desvio_padrao << endl;

    return 0;
}
