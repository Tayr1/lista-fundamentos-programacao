#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> numeros(10);
    for (int i = 0; i < 10; ++i) {
        std::cin >> numeros[i];
    }

    std::sort(numeros.begin(), numeros.end());

    for (double num : numeros) {
        std::cout << num << " ";
    }

    return 0;
}