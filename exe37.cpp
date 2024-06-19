#include <iostream>
#include <vector>
#include <algorithm>

void ordenarCrescente(std::vector<int>& vetor) {
    std::sort(vetor.begin(), vetor.end());
}

int main() {
    std::vector<int> numeros(10);
    for (int i = 0; i < 10; ++i) {
        std::cin >> numeros[i];
    }

    ordenarCrescente(numeros);

    for (int num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}