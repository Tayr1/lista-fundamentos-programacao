#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

const int tamanho = 10;


vector<int> encontrarIntersecao(const vector<int>& vetor1, const vector<int>& vetor2) {
    vector<int> intersecao;

   
    vector<int> v1 = vetor1;
    vector<int> v2 = vetor2;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(intersecao));

    
    intersecao.erase(unique(intersecao.begin(), intersecao.end()), intersecao.end());

    return intersecao;
}

int main() {
    vector<int> vetor1(tamanho);
    vector<int> vetor2(tamanho);

   
    cout << "Digite os " << tamanho << " numeros do primeiro vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    
    cout << "\nDigite os " << tamanho << " numeros do segundo vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    
    vector<int> intersecao = encontrarIntersecao(vetor1, vetor2);

    
    cout << "\nElementos na intersecao dos dois vetores:\n";
    for (int num : intersecao) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
