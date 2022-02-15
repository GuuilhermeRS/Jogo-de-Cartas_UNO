#include <stdio.h>
#include "baralho.h"

Baralho *criarBaralho() {
    Baralho *b = (Baralho *) malloc(sizeof(Baralho));
    
    b->quantidade_cartas = -1;
    
    return b;
}

void preencherBaralho(Baralho *b) {
    int i, j = 0;
    char cor;
    
    for(i = 0; i < TOTAL_CARTAS; i++) {
        j++;
        
        if(i % 10 == 0) {
            j = 0;
        }

        if (i < 20) {
          cor = 'B';
        } else if (i < 40) {
          cor = 'R';
        } else if (i < 60) {
          cor = 'Y';
        } else if (i < 80) {
          cor = 'G';
        } else {
          cor = 'E';
        }
        
        Carta *carta = criarCarta(cor, j+'0');
        b->cartas[i] = carta;
        b->quantidade_cartas++;
    }
}
