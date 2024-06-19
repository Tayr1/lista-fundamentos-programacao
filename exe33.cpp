#include <iostream>
#include <vector>

void compactarVetor(std::vector<int>& vetor) {
    size_t j = 0;
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i]!= 0) {
            vetor[j++] = vetor[i];
        }
    }
    vetor.resize(j);
}

int main() {
    std::vector<int> vetor = {1, 0, 2, 0, 3, 0, 4, 5, 0, 6};
    compactarVetor(vetor);

    for (int num : vetor) {
        std::cout << num << " ";
    }

    return 0;
}

