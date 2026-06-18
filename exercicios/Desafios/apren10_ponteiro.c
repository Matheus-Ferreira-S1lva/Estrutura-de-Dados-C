#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main(){
    struct Aluno nome[3];
    struct Aluno *ptr = nome;

    strcpy((ptr + 0)->nome, "ana");
    (ptr + 0)->nota = 7.50;

    strcpy((ptr + 1)->nome, "Carlos");
    (ptr + 1)->nota = 8.00;

    strcpy((ptr + 2)->nome, "Maria");
    (ptr + 2)->nota = 9.50;

    for (int i = 0; i < 3; i++) {
        printf("Nota %d: %s - Nota: %.2f\n", i+1, (ptr + i)->nome, (ptr + i)->nota);
    }

    return 0;
}