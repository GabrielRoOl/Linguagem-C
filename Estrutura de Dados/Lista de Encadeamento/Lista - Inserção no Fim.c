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

// Função para adicionar pontos
void adicionar_inicio(float x, float y) 
{
  // Aloca memória dinamicamente
  ponto *p = (ponto *)malloc(sizeof(ponto));
  // Teste de erro na alocação
  if (p == NULL) {
    printf("Erro durante a alocação de memória.\n");
    return;
  }
  p->x = x;
  p->y = y;
  p->prox = ListaPontos;
  ListaPontos = p;
}

//Função para adicionar um novo elemento ao final da lista
void adicionar_fim(float x, float y)
{
  ponto *p = (ponto *)malloc(sizeof(ponto));
  p->x = x;
  p->y = y;
  p->prox = NULL;    //Porque ele já será o ultimo elemento
  
  if(ListaPontos == NULL)
  {
    ListaPontos = p;
  }  else
  {
    ponto *listaAux = ListaPontos;
    
    while(listaAux->prox != NULL)
    {
      listaAux = listaAux->prox;
    }
    listaAux->prox = p;
  }
}

void imprimir(ponto *p) 
{
  if (p != NULL) 
  {
    printf("X = %.1f Y = %.1f\n", p->x, p->y);
    imprimir(p->prox);
  }
}

int main() {
  adicionar_inicio(1.3, 5.2);
  adicionar_inicio(2.3, 7.2);
  adicionar_inicio(5, 3);

  adicionar_fim(1, 1);
  adicionar_fim(9, 9);
  

  // Copia do primeiro item da lista
  ponto *auxLista = ListaPontos;
  imprimir(auxLista);

  return 0;
}
