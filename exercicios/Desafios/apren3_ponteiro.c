#include <stdio.h>

void somarCinco(int *p) {
    *p += 5;
}

int main() {
    int numero = 10;

    somarCinco(&numero);
    printf("Numero vale: %i\n", numero);
    return 0;
}