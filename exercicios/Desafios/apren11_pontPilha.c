#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PILHA 20

typedef struct
{
    int vetor[TAMANHO_PILHA];
    int topo;
} Pilha;

void empilha(int valor, Pilha *pilha);
void desempilha(Pilha *pilha);
int isCheia(Pilha *pilha);
int isVazia(Pilha *pilha);

void empilha(int valor, Pilha *pilha)
{

    if (pilha->topo < TAMANHO_PILHA)
    {
        pilha->vetor[pilha->topo] = valor;
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
        printf("Elementos retirado: %d\n", pilha->vetor[pilha->topo]);
    }
    else
    {
        printf("A pilha esta vazia.\n");
    }
}

int isCheia(Pilha *pilha)
{
    if (pilha->topo >= TAMANHO_PILHA)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isVazia(Pilha *pilha)
{
    if (pilha->topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprimePilha(Pilha *pilha)
{
    int i;
    for (i = pilha->topo - 1; i >= 0; i--)
    {
        printf("%02d\n", pilha->vetor[i]);
    }
}

int main()
{
    char c = 'a';
    int valor;

    Pilha p;
    p.topo = 0;

    while (c != 'x')
    {
        printf("Digite um caractere:\n");
        scanf(" %c", &c);

        switch (c)
        {
        case 'a':
            printf("Empilhar\n");
            printf("Digita um numero: ");
            scanf("%d", &valor);
            empilha(valor, &p);

            break;

        case 'x':
            printf("Sair\n");
            break;

        case 's':
            printf("Exibir\n");
            imprimePilha(&p);
            break;

        case 't':
            printf("Exibir número de elementos %d\n", p.topo);
            break;

        case 'r':
            desempilha(&p);
            break;

        default:

            break;
        }
    }

    return 0;
}
