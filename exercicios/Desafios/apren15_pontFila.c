#include <stdio.h>
#include <stdlib.h>

#define LIMITE 10
#define LIMITE_NOME 50


typedef struct
{
    char nome[LIMITE_NOME];
    int pag;
} Document;

typedef struct
{
    Document vetor[LIMITE];
    int fim;
} Fila;

void adiciona(Document doc, Fila *fila)
{
    if (fila->fim < LIMITE)
    {
        fila->vetor[fila->fim] = doc;
        fila->fim++;
    }
    else
    {
        printf("Não ha mais espaço na fila.\n");
    }
}

void proximo(Fila *fila)
{
    if (fila->fim > 0)
    {
        printf("\n");
        printf("Imprimindo: %s - Páginas: %d\n", fila->vetor[0].nome, fila->vetor[0].pag);
        for (int i = 0; i < fila->fim - 1; i++)
        {
            fila->vetor[i] = fila->vetor[i + 1];
        }
        fila->fim--;
    }
}

void imprimir(Fila *fila)
{
    int i;

    for (i = 0; i < fila->fim; i++)
    {
        printf("Imprimindo: %s - Páginas: %d\n", fila->vetor[i].nome, fila->vetor[i].pag);
    }
}

int main()
{

    char c = 'a';

    Fila f;
    Document doc;
    f.fim = 0;

    while (c != 'x')
    {
        printf("\n");
        printf("Escolha uma opção:\n");
        printf("a: adiciona um documento:\n");
        printf("r: imprime o próximo documento da fila:\n");
        printf("s: exibe todos os documentos aguardando impressão:\n");
        printf("t: exibe o total de documentos na fila:\n");
        printf("x: encerra o programa:\n");
        scanf(" %c", &c);
        printf("\n");

        switch (c)
        {
        case 'a':
            printf("Adicione um nome\n");
            scanf("%s", doc.nome);
            printf("Numero de Páginas\n");
            scanf("%d", &doc.pag);
            adiciona(doc, &f);

            break;

        case 'r':
            printf("Proximo elemento: ");
            proximo(&f);
            break;

        case 's':
            printf("Todos os documentos: ");
            imprimir(&f);
            break;

        case 't':
            printf("Total de documentos na fila: %d\n", f.fim);
            break;

        case 'x':
            printf("encerrado!\n");

            break;

        default:

            break;
        }
    }
}