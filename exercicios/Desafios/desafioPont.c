#include <stdio.h>

struct No {
    int a;
    int b;
};

int main() {
    struct No p1;
    struct No *p = &p1;

    p1.a = 10;
    p1.b = 20;

    p->a = 99;
    p->b = 100;

    printf("Valor final: \n%d\n%d\n", p1.a, p1.b);
    return 0;

}