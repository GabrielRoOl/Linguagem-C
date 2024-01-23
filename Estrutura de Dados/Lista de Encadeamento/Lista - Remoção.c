#include <stdio.h>
#include <stdlib.h>

// Criando um tipo 'ponto' com dois float
typedef struct ponto 
{
  float x;
  float y;
  struct ponto *prox; // Chama a si mesma
} ponto;

ponto *ListaPontos; // Aponta para o inicio da lista

void imprimir(ponto *p) 
{
  if (p != NULL) 
  {
    printf("X = %.1f Y = %.1f\n", p->x, p->y);
    imprimir(p->prox);
  }
}

int length = 0;

void adicionarIndex(float x, float y, int index)
{
  ponto *p = (ponto *)malloc(sizeof(ponto));
  p->x = x;
  p->y = y;

  if(index > length)
  {
    printf("Posição infalida.\n");
  }
  else
  {
    if(index == 0)
    {
      p->prox = ListaPontos;    //
      ListaPontos = p;
    }
    else
    {
      ponto *listaAux = ListaPontos;
      int i = 0;
      while(i != index - 1)
        {
          listaAux = listaAux->prox;
          i++;
        }
      p->prox = listaAux->prox;
      listaAux->prox = p;
    }
    length++;
  }
}

void RemovIndex(int index){
  if(index > length || length == 0)
  {
    printf("Posição inválida ou lista vazia\n");
  }  
  else 
  {
    if(index == 0)
    {
      ListaPontos = ListaPontos->prox;
    }  else 
    {
      ponto *listaAux = ListaPontos;
      int i = 0;
      while(i != index -1)
      {
        listaAux = listaAux->prox;
        i++;
      }
      length--;
    }
  }
}

int main() {
  
  adicionarIndex(1, 1, 0);
  adicionarIndex(2, 4, 1);
  adicionarIndex(4, 16, 2);

  adicionarIndex(3, 9, 2);
  adicionarIndex(0, 0, 0);

  RemovIndex(0);
  RemovIndex(2);

  ponto *auxLista = ListaPontos;
  imprimir(auxLista);

  return 0;
}
