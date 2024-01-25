#include <stdio.h>
#include <stdlib.h>

// Criando uma árvore Bínaria
typedef struct nodo
{
  int valor;    // Valor do nó
  struct nodo *esq;    // Ponteiro para o nó esquerdo
  struct nodo *dir;    // Ponteiro para o nó direito
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
  imprimir(n->esq);
  printf("%d\n", n->valor);
  imprimir(n->dir);
}

void add(nodo *n, int valor)
{
  if(valor < n->valor) {    // Caso 'valor' seja menor que 'n->valor' entra
      if(n->esq == NULL) 
        n->esq = create(valor);    // Caso o valor 'n->esq' seja NULL adiciona o 'create(valor)'
      else
        add(n->esq,valor);    // Caso contrario chama a função 'add' recursivamente
  }
  else
  {
    if(n->dir == NULL)    // Caso 'n->dir' for NULL entra
      n->dir = create(valor);    // 'n->dir' recebe o valor de 'create(valor)'
    else
      add(n->dir, valor);    // Caso contrario, chama-se a função recursivamente. 
  }
}

int main()
{
  nodo *root = create(5);

  add(root, 2);
  add(root, 1);
  add(root, 8);
  add(root, 4);

  imprimir(root);

  return 0;
}
