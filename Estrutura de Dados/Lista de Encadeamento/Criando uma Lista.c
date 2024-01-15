#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
  float x, y;
  struct ponto *prox; // Ponteiro apontando para a própria extrutura
}ponto;

ponto *lista_pontos; //Vai apontar para o primeiro item da lista, os seguintes virão em seguida;

void adicionar(float x, float y)
{
  ponto *p = (ponto *) malloc(sizeof(ponto));
  p->x = x;
  p->y = y;
  p->prox = lista_pontos;
  lista_pontos = p;
 }

int main()
{
  adicionar(1.3, 5.2);
  adicionar(2.3, 7.2);
  adicionar(5, 3);
  
  printf("%.1f", lista_pontos->prox->prox->prox->x);

  return 0;
}
