
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetorA(10), vetorB(10);


    std::vector<int> uniao;

    for (int i = 0; i < 10; ++i) {
        if (std::find(vetorA.begin(), vetorA.end(), vetorB[i]) == vetorA.end()) {
            uniao.push_back(vetorB[i]);
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (std::find(uniao.begin(), uniao.end(), vetorA[i]) == uniao.end()) {
            uniao.push_back(vetorA[i]);
        }
    }

    // Imprimir o vetor de união
    for (const auto& num : uniao) {
        std::cout << num << " ";
    }

    return 0;
}