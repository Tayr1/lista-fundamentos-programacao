#include <iostream>
#include <vector>

void imprimirTrianguloPascal(int n) {
    std::vector<std::vector<int>> pascal(n, std::vector<int>(n));
    for (int linha = 0; linha < n; ++linha) {
        for (int coluna = 0; coluna <= linha; ++coluna) {
            if (coluna == 0 || coluna == linha) {
                pascal[linha][coluna] = 1;
            } else {
                pascal[linha][coluna] = pascal[linha - 1][coluna - 1] + pascal[linha - 1][coluna];
            }
            std::cout << pascal[linha][coluna] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int n;
    std::cin >> n;
    imprimirTrianguloPascal(n);
    return 0;
}