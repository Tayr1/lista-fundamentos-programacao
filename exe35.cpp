#include <iostream>
#include <vector>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::vector<int> algarismosA(a), algarismosB(b);
    for (; a > 0; a /= 10) {
        algarismosA.push_back(a % 10);
    }
    for (; b > 0; b /= 10) {
        algarismosB.push_back(b % 10);
    }

    std::vector<int> soma;
    for (size_t i = 0; i < algarismosA.size(); ++i) {
        int resultado = algarismosA[i] + algarismosB[i];
        if (resultado >= 10) {
            resultado -= 10;
            ++i; 
        }
        soma.push_back(resultado);
    }

    for (int num : soma) {
        std::cout << num;
    }

    return 0;
}