#include <stdio.h>

struct Jogador {
    int pontuacao;
};

int main() {
    struct Jogador j1;
    struct Jogador *ptr_j = &j1;

    j1.pontuacao = 500;

    ptr_j->pontuacao = 800;
    printf("Resultado final: %d\n", j1.pontuacao);
    return 0;
}