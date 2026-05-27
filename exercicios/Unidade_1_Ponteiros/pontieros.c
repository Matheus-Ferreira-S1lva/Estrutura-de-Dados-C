#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;
void imprimir()
{
    printf("Valor de xi = %d \n", xi);
    printf("Valor de &xi = %p \n", &xi);
    printf("Valor de ptr_xi = %p \n", ptr_xi);
    printf("Valor de *ptr_xi = %d \n\n", *ptr_xi);
}
int main()
{
    xi = 10;
    ptr_xi = &xi;
    imprimir();
    xi = 20;
    imprimir();
    *ptr_xi = 30;
    imprimir();

system("Pause");
return (0);
}

/* Exemplo de ponteiros o * aponta para o endereço da memoria onde a variavel se encontra.
(EX: "A variável xi é do tipo inteiro e ptr_xi é um ponteiro que aponta para uma variá-
vel do tipo inteiro."). O *ptr_xi tem a capacidade de apontar para o endereço dessa variavel e modifica-la*/