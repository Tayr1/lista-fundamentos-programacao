#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    for (int i = 0; i < 10; ++i) {
        int numero;
        std::cin >> numero;
        if (std::find(numeros.begin(), numeros.end(), numero)!= numeros.end()) {
            std::cout << "Número já foi digitado. Digite outro número.\n";
            --i;
        } else {
            numeros.push_back(numero);
        }
    }

    for (int num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}