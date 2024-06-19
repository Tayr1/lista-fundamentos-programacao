#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanho = 10;
    vector<int> v(tamanho);
    vector<int> v1;
    vector<int> v2;

   
    cout << "Digite " << tamanho << " numeros inteiros:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> v[i];
    }

    
    for (int i = 0; i < tamanho; ++i) {
        if (v[i] % 2 != 0) {
            v1.push_back(v[i]);  /
        } else {
            v2.push_back(v[i]);  
        }
    }

    /
    cout << "\nElementos UTILIZADOS de v1 (valores impares):\n";
    for (int num : v1) {
        cout << num << " ";
    }
    cout << endl;

    
    cout << "\nElementos UTILIZADOS de v2 (valores pares):\n";
    for (int num : v2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
