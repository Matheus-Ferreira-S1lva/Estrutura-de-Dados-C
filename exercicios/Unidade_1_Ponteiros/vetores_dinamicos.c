#include <stdio.h>
#include <stdlib.h>

struct Semaforo 
{
    char *cor;
    int id;
};

int main() 
{
    
    struct Semaforo sinais[3] = {
        {"Vermelho", 1}, 
        {"Amarelo", 2}, 
        {"Verde", 3}
    };

    struct Semaforo *ptr = sinais;

    for(int i = 0; i < 3; i++) {
        printf("Id %d, cor %s\n", ptr->id, ptr->cor);
        ptr++; // Pula exatamente o tamanho total dessa struct
    }

    return 0;
}