#include <iostream>
#include <vector>

void imprimirVetor(const std::vector<int>& vetor) {
    for (int num : vetor) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> x = {1, 2, 3, 4, 5};
    std::vector<int> y = {6, 7, 8, 9, 10};

    std::vector<int> soma(x.size());
    for (size_t i = 0; i < x.size(); ++i) {
        soma[i] = x[i] + y[i];
    }
    imprimirVetor(soma);

    std::vector<int> produto(x.size());
    for (size_t i = 0; i < x.size(); ++i) {
        produto[i] = x[i] * y[i];
    }
    imprimirVetor(produto);

    std::vector<int> diferenca(x.size());
    for (size_t i = 0; i < x.size(); ++i) {
        diferenca[i] = x[i] - y[i];
    }
    imprimirVetor(diferenca);

    std::vector<int> intersecao;
    for (int num : x) {
        if (std::find(y.begin(), y.end(), num)!= y.end()) {
            intersecao.push_back(num);
        }
    }
    imprimirVetor(intersecao);

    std::vector<int> uniao;
    for (int num : x) {
        uniao.push_back(num);
    }
    for (int num : y) {
        if (std::find(uniao.begin(), uniao.end(), num) == uniao.end()) {
            uniao.push_back(num);
        }
    }
    imprimirVetor(uniao);

    return 0;
}