#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tamanho;
    int *vetor1, *vetor2;

    printf("Qual o tamanho desse vetor: ");
    scanf("%d", &tamanho);

    vetor1 = (int *)malloc(sizeof(int) * tamanho);          
    vetor2 = (int *)malloc(sizeof(int) * (tamanho * 2));

    printf("\nVetor pow2:\n");
    for (int i = 0; i < tamanho; i++) {
        vetor1[i] = (int)(pow(2, i) + 0.5);
        printf("Posicao %d: %d\n", i, vetor1[i]);
    }

    printf("\nVetor pow3:\n");
    for (int i = 0; i < (tamanho * 2); i++) {
        vetor2[i] = (int)(pow(3, i) + 0.5);
        printf("Posicao %d: %d\n", i, vetor2[i]);
    }

    free(vetor1);
    free(vetor2);

    return 0;
}