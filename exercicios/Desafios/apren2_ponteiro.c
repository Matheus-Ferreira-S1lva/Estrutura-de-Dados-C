#include <stdio.h>

struct No
{
    int id;
    struct No *proximo;
};

int main()
{
    struct No no1;
    struct No no2;

    no1.proximo = &no2;

    no1.proximo->id = 7;

    printf("Id do no1: %d\n", no1.id); 
    printf("Id do no2: %d\n", no2.id); 
    printf("Id pelo ponteiro: %d\n", no1.proximo->id);

    return 0;
}