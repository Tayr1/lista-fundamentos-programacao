#include <iostream>
using namespace std;

int main() {
    
    int A[6] = {1, 0, 5, -2, -5, 7};

    
    int soma = A[0] + A[1] + A[5];
    cout << "Soma de A[0], A[1] e A[5]: " << soma << endl;

   
    A[4] = 100;

   
    cout << "Valores do vetor A:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    return 0;
}