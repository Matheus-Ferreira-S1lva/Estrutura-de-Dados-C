#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ptr_a;

    ptr_a = (int *) malloc(sizeof(int));
    *ptr_a = 42;

    printf("Endereço: %p\n", ptr_a);
    printf("Valor: %d\n", *ptr_a);

    
    free(ptr_a);
}
