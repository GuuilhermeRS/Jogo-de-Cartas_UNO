#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct carta {
    char cor;
    char valor;
} Carta;

Carta *criarCarta(char cor, char valor);

Carta *criarCarta(char cor, char valor) {
    Carta *c = (Carta *) malloc(sizeof(Carta));
    
    c->cor = cor;
    c->valor = valor;
    
    return c;
}
