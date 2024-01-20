#include <stdio.h>
#include <stdlib.h>

//Criando um tipo 'ponto' com dois float
typedef struct ponto{
  float x;
  float y;
  struct ponto *prox;    //Chama a si mesma
} ponto;

ponto *ListaPontos;    //Primeiro elemento da lista


//Função para adicionar pontos
void adicionar(float x, float y){
  //Aloca memória dinamicamente
  ponto *p = (ponto *) malloc(sizeof(ponto));
  //Teste de erro na alocação
  if(p == NULL){
    printf("Erro durante a alocação de memória.\n");
    return;
  }
  p->x = x;
  p->y = y;
  p->prox = ListaPontos;
  ListaPontos = p;
}

void imprimir(ponto *p){
  if(p != NULL){
    printf("X = %.1f Y = %.1f\n", p->x, p->y);
    imprimir(p->prox);
  }
}

int main()
{
  adicionar(1.3, 5.2);
  adicionar(2.3, 7.2);
  adicionar(5, 3);


  //Copia do primeiro item da lista
  ponto *auxLista = ListaPontos;
  imprimir(auxLista);    

  return 0;
}
