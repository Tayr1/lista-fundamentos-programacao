#include <iostream>
#include <vector>
#include <algorithm>

void ordenarEspecifica(std::vector<int>& vetor) {
    std::vector<int> crescente(vetor.begin(), vetor.begin() + 6);
    std::vector<int> decrescente(vetor.begin() + 6, vetor.end());

    std::sort(crescente.begin(), crescente.end());
    std::sort(decrescente.rbegin(), decrescente.rend()); // Ordenar em ordem decrescente

    vetor.erase(vetor.begin() + 6, vetor.end());
    vetor.insert(vetor.end(), decrescente.begin(), decrescente.end());
}

int main() {
    std::vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    ordenarEspecifica(A);

    for (int num : A) {
        std::cout << num << " ";
    }

    return 0;
}
