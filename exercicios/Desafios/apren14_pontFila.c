#include <stdio.h>
#include <stdlib.h>

#define LIMITE 20

typedef struct
{
    char nome[50];
    int senha;
} Conta;

typedef struct
{
    Conta vetor[LIMITE];
    int fim;
} Fila;

void adiciona(Conta conta, Fila *fila)
{
    if (fila->fim < LIMITE)
    {
        fila->vetor[fila->fim] = conta;
        fila->fim++;
    }
    else
    {
        printf("Não ha mais espaço na fila.\n");
    }
}

void retira(Fila *fila)
{
    if (fila->fim > 0)
    {
        printf("\n");
        printf("Cliente removido com sucesso: ");
        printf("Cliente: %s - Senha: %d\n", fila->vetor[0].nome, fila->vetor[0].senha);

        for (int i = 0; i < fila->fim - 1; i++)
        {
            fila->vetor[i] = fila->vetor[i + 1];
        }
        fila->fim--;
    }
}

void exibir(Fila *fila)
{
    int i;

    for (i = 0; i < fila->fim; i++)
    {
        printf("Cliente: %s - Senha: %d\n", fila->vetor[i].nome, fila->vetor[i].senha);
    }
}

int main()
{
    char c = 'a';

    Fila f;
    Conta dados;
    f.fim = 0;

    while (c != 'x')
    {
        printf("\n");
        printf("Escolha uma opção:\n");
        printf("a: adiciona um cliente:\n");
        printf("r: retira o próximo cliente da fila:\n");
        printf("s: exibe todos os clientes na fila:\n");
        printf("x: encerra o programa:\n");
        printf("\n");
        scanf(" %c", &c);

        switch (c)
        {
        case 'a':
            printf("\n");
            printf("Adicione um nome: ");
            scanf("%s", dados.nome);
            printf("Adicione um senha: ");
            scanf("%d", &dados.senha);
            printf("\n");
            adiciona(dados, &f);

            break;

        case 'r':
            printf("Retire um cliente\n");
            retira(&f);

            break;

        case 's':
            printf("Exibir clientes:\n");
            exibir(&f);

            break;

        case 'x':
            printf("Sair:\n");

            break;

        default:

            break;
        }
    }
}