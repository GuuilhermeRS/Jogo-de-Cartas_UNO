#include <stdio.h>
#include <stdlib.h>

#include "carta/carta.c"

#define TOTAL_CARTAS 110

typedef struct baralho {
    Carta *cartas[TOTAL_CARTAS];
    int quantidade_cartas;
} Baralho;

Baralho *criarBaralho();
void preencherBaralho(Baralho *b);
