#include <stdio.h>
#include <stdlib.h>

struct No
{
    int id;
    struct No *ptr_proximo;
};

void inserirProximo(struct No *atual, int novo_id)
{
    struct No *novo;
    novo = (struct No *)malloc(sizeof(struct No));

    novo->id = novo_id;

    novo->ptr_proximo = NULL;

    atual->ptr_proximo = novo;
}

int main()
{
    struct No noInicial;
    noInicial.id = 1;

    noInicial.ptr_proximo = NULL;

    inserirProximo(&noInicial, 2);

    printf("Id do proximo nó: %d\n", noInicial.ptr_proximo->id);

    free(noInicial.ptr_proximo);

    return 0;
}
