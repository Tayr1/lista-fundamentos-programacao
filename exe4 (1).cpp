  #include <iostream>
  using namespace std;

  int main() {
      const int tamanho = 8;
      int vetor[tamanho];

      
      cout << "Digite " << tamanho << " valores inteiros para preencher o vetor:" << endl;
      for (int i = 0; i < tamanho; ++i) {
          cout << "Posicao " << i << ": ";
          cin >> vetor[i];
      }

      
      int X, Y;
      cout << "\nDigite dois valores X e Y para somar as posicoes correspondentes no vetor:" << endl;
      cout << "X: ";
      cin >> X;
      cout << "Y: ";
      cin >> Y;

      
      if (X >= 0 && X < tamanho && Y >= 0 && Y < tamanho) {
          
          int soma = vetor[X] + vetor[Y];
          cout << "\nA soma dos valores nas posicoes " << X << " e " << Y << " eh: " << soma << endl;
      } else {
          cout << "\nValores de X ou Y fora do intervalo valido." << endl;
      }

      return 0;
  }