#include <stdio.h>
#include <stdlib.h>

#define LIMITE 100

typedef struct
{
    double latitude;
    double longitude;
} Ponto;

typedef struct
{
    Ponto vetor[LIMITE];
    int topo;
} Pilha;

void empilha(Ponto ponto, Pilha *pilha)
{
    if (pilha->topo < LIMITE)
    {
        pilha->vetor[pilha->topo] = ponto;
        pilha->topo++;
    }
    else
    {
        printf("Não ha mais espaço na pilha.\n");
    }
}

void desempilha(Pilha *pilha)
{
    if (pilha->topo > 0)
    {
        pilha->topo--;
        printf("\n");
        printf("Próximo ponto de retorno:\n");
        printf("Lat: %.6f\n", pilha->vetor[pilha->topo].latitude);
        printf("Long: %.6f\n", pilha->vetor[pilha->topo].longitude);
        printf("\n");
    }
    else
    {
        printf("Nenhum ponto de retorno.\n");
    }
}

int main()
{
    char c = 'a';
    Ponto valor;

    Pilha p;
    p.topo = 0;

    while (c != 'x')
    {
        printf("Escolha uma opção:\n");
        printf("a: adiciona um ponto\n");
        printf("r: retornar\n");
        printf("x: para sair\n");
        scanf(" %c", &c);

        switch (c)
        {
        case 'a':
            printf("\n");
            printf("Digite a latitude:\n");
            scanf("%lf", &valor.latitude);
            printf("Digite a longitude:\n");
            scanf("%lf", &valor.longitude);
            printf("\n");

            empilha(valor, &p);

            break;

        case 'r':
            desempilha(&p);
            break;

        case 'x':
            break;
        }
    }
}
