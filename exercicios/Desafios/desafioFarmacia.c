#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct farmacia
{
    char nome[50];
    int quantidade;
};
int main()
{
    struct farmacia medicamento;
    struct farmacia *ptr = &medicamento;
    strcpy(ptr->nome, "Losartana");
    ptr->quantidade = 100;
    printf("Quantidade: %d\n", ptr->quantidade);
    ptr->quantidade += 24;
    printf("Nome: %s - Quantidade atualizada: %d\n", ptr->nome, ptr->quantidade);
    return 0;
}