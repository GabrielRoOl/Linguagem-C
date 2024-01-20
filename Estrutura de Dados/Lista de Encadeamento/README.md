# Lista
É uma coleção de elementos organizados sequencialmente ou linearmente. Cada elemento é chamado de nó, e cada nó contém um tipo de dado e uma referência ao próximo nó na sequência (um ponteiro ou o próximo nó).
## Lista Linear
A lista é organizada de maneira linear, uma após a outra. Os acessos são feitos combase em sua posição na lista.
## Lista Encadeada
Os elementos são armazenados em nós com um valor e um ponteiro/referência para o próximo nó na sequência. Os elementos não precisam estar armazenados em posições contínuas, como em arrays. Cada nó aponta para o próximo nó até que seja atingido o final da lista.

### Exemplo simples
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
