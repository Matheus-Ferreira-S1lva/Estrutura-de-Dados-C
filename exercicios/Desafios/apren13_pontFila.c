#include <stdio.h>
#include <stdlib.h>

#define ELEMENTOS_FILA 20

typedef struct
{
    int vetor[ELEMENTOS_FILA];
    int fim;
} Fila;

void adiciona(int valor, Fila *fila)
{
    if (fila->fim < ELEMENTOS_FILA)
    {
        fila->vetor[fila->fim] = valor;
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
        printf("Elementos que sairam po. 0° %d\n", fila->vetor[0]);
        for (int i = 0; i < fila->fim - 1; i++)
        {
            fila->vetor[i] = fila->vetor[i + 1];
        }
        fila->fim--;
    }
    else
    {
        printf("A fila esta vazia.\n");
    }
}

int isCheia(Fila *fila)
{
    if (fila->fim >= ELEMENTOS_FILA)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isVazia(Fila *fila)
{
    if (fila->fim == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    Fila f;
    f.fim = 0;

    adiciona(15, &f);
    adiciona(25, &f);
    adiciona(35, &f);

    retira(&f);

    printf("Elementos restantes:\n");
    for (int i=0; i < f.fim; i++) {
        printf("%d\n", f.vetor[i]);
    }

    return 0;
}