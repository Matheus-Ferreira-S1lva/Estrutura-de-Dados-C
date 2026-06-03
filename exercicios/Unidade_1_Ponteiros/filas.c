#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Constantes
#define tamanho 5

// Estrutura da fila
struct tfila
{
    int dados[tamanho];
    int ini;
    int fim;
};

// Variáveis golbais
struct tfila fila;
int op;

// Protipação
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();
  

int main()
{
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    fila.ini = 0;
    fila.fim = 0;
    while (op != 0)
    {
        getchar();
        fila_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            fila_entrar();
            break;
        case 2:
            fila_sair();
            break;
        }
    }
    return (0);
}

// Adicionar um elemento no final da fila
void fila_entrar()
{
    if (fila.fim == tamanho)
    {
        printf("\nA fila está cheia, impossível adicionar um novo valor!\n\n");
        getchar();
    }
    else
    {
        printf("\n Digite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
}

// Retirar o primeiro elemento da fila
void fila_sair()
{
    if (fila.ini == fila.fim)
    {
        printf("\nA fila está vazia, não há nada para remover!\n\n");
        getchar();
    }
    else
    {
        int i;
        for (i = 0; i < tamanho - 1; i++)
        {
            fila.dados[i] = fila.dados[i + 1];
        }
        fila.dados[fila.fim] = 0;
        fila.fim--;
    }
}

// mostrar o conteúdo da fila
void fila_mostrar()
{
    int i;
    printf("[ ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", fila.dados[i]);
    }
    printf("]\n\n");
}

// mostrar o menu de opções
void menu_mostrar()
{
    printf("\nEscolha uma opção:\n");
    printf("1 - Incluir na Fila\n");
    printf("2 - Excluir da Fila\n");
    printf("0 - Sair\n\n");
}