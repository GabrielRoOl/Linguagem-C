#include <stdio.h>
#include <stdlib.h>

// Criando uma árvore Bínaria
typedef struct nodo
{
  int valor;
  struct nodo *esq;
  struct nodo *dir;
}nodo;

// Criando uma função para criar um novo 'nodo'
nodo* create(int valor)
{
  nodo *n = (nodo *)malloc(sizeof(nodo));
  n->valor = valor;
  n->esq = NULL;
  n->dir = NULL;
  return n;
}

// Função para imprimir o 'nodo'
void imprimir(nodo *n)
{
  if(n == NULL)
    return;
  printf("%d\n", n->valor);
  imprimir(n->esq);
  imprimir(n->dir);
}


int main()
{
  nodo *nodo5 = create(5);
  nodo *nodo2 = create(2);
  nodo *nodo1 = create(1);
  nodo *nodo8 = create(8);
  nodo *nodo4 = create(4); 

  nodo5->dir = nodo8;
  nodo5->esq = nodo2;
  nodo2->dir = nodo4;
  nodo2->esq = nodo1; 

  imprimir(nodo5);

  return 0;
}
