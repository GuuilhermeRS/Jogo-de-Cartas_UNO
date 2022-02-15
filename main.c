#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs/baralho.h"

int main() {
  int i;
  Baralho *b = criarBaralho();
    
  preencherBaralho(b);
    
  for(i = 0; i < TOTAL; i++) {
    printf("{Cor: %c, Vaor: %c}\n", b->cartas[i]->cor, b->cartas[i]->valor);
  }

  return 0;
}