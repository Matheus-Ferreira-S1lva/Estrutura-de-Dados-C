#include <stdio.h>

int main()
{
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;

    printf("Antes:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr++);
    }

    ptr = numeros;

    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = *(ptr + i) * 2;
    }

    printf("\nDepois:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}