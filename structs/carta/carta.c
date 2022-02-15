#include <stdio.h>

#include "carta.h"

Carta *criarCarta(char cor, char valor) {
  Carta *c = (Carta *) malloc(sizeof(Carta));
  
  c->cor = cor;
  c->valor = valor;
  
  return c;
}
