#include <stdio.h>

struct Carro {
    int ano;
    float preco;
};

int main() {
    struct Carro carro1;
    struct Carro *ptr = &carro1;

    carro1.ano = 2020;
    carro1.preco = 35000.0;

    printf("Ano: %d\n", carro1.ano);
    printf("Preco: %.2f\n", ptr->preco);
}