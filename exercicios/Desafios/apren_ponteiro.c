#include <stdio.h>

struct No {
    int valor;
};

int main() {
    struct No elemento;
    struct No *ptr = &elemento;

    elemento.valor = 2;

    ptr->valor = 20;

    printf("Valor final: %d\n", elemento.valor);
    return 0;
}