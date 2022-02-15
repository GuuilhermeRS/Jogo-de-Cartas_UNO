#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs/baralho/baralho.c"

int main() {
  int i;
  Baralho *b = criarBaralho();

  preencherBaralho(b);
    
  for(i = 0; i < TOTAL_CARTAS; i++) {
    printf("{Cor: %c, Valor: %c}\n", b->cartas[i]->cor, b->cartas[i]->valor);
  }

  return 0;
}