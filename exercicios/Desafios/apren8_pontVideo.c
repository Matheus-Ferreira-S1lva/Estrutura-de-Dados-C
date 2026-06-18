#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update(int *p);

int main() {
    int var = 15;
    int *ptr;

    ptr = &var;

    display(var,ptr);

    update(&var);

    display(var,ptr);
    
    printf("\n\nEnd.");
    while(1);
    return 0;
}

void display(int var, int *ptr) {
    printf("\n\n");
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("Endereço apontado por ptr = %p\n", ptr);
    printf("Endereço de ptr = %p\n", &ptr);
}

void update(int *p) {
    *p += 1; 
}