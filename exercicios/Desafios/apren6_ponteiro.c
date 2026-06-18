#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("before: %d%d\n", a, b);

    swap(&b, &a);

    printf("After: %d%d\n", a, b);
}