#include <stdio.h>
#include <stdlib.h>

//Cria um tipo ponto
typedef struct ponto
{
  float x, y;
  struct ponto *prox;    //Ponteiro apontando para a própria extrutura
}ponto;

ponto *lista_pontos;    //Vai apontar para o primeiro item da lista, os seguintes virão em seguida;

//Função para adicionar pontos
void adicionar(float x, float y)
{
  //Cria uma memória dinânima
  ponto *p = (ponto *) malloc(sizeof(ponto));
  p->x = x;
  p->y = y;
  p->prox = lista_pontos;    //Aponta para 'lista_pontos' que em seguida
  lista_pontos = p;    //Aponta p/ 'p' para fazer um encadeamento
 }

//Função que irá imprimir os valores atribuidos a 'adicionar'
void imprimir()
{
  //Cria uma copia de 'lista_pontos' p/ não perder a referencia
  ponto *auxLista = lista_pontos; 
  //Condição para fim
  while(auxLista != NULL)
    {
      printf("\nX = %.1f Y = %.1f", auxLista->x, auxLista->y);
      //auxLista recebe '->prox' p/ que o while exista condição de fim
      auxLista = auxLista->prox;
    }
}

int main()
{
  adicionar(1.3, 5.2);
  adicionar(2.3, 7.2);
  adicionar(5, 3);

  imprimir();    //Apenas chama a função

  return 0;
}
