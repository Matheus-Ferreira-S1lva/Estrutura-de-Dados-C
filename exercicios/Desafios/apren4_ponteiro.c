#include <stdio.h>
#include <stdlib.h>

struct No {
    int id;
    struct No *ptr_proximo;
};

int main()
{
    struct No *ponteiro_no;

    ponteiro_no = (struct No *)malloc(sizeof(struct No));

    ponteiro_no->id = 99;

    printf("Valor id: %d\n", ponteiro_no->id);

    free(ponteiro_no);

    return 0;
}