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

//Função que ira imprimir
void imprimir(ponto *p) 
{
  if (p != NULL)    
  {
    printf("X = %.1f Y = %.1f\n", p->x, p->y);
    imprimir(p->prox);
  }
}

int length = 0;    //Variável de controle de tamanho  

//Função para adicionar um valor em uma posição específica
void adicionarIndex(float x, float y, int index)
{
  //Alocamento dinâmico
  ponto *p = (ponto *)malloc(sizeof(ponto));
  p->x = x;
  p->y = y;
  
  if(index > length)    //Verificando de 'index' é maior que 'length'
  {
    printf("Posição infalida.\n");
  }
  else
  {
    if(index == 0)    //Se 'index' for igual a '0'
    { 
      p->prox = ListaPontos;    //'p' que aponta para 'prox' vai receber o valor da 'ListaPontos'
      ListaPontos = p;    //E 'ListaPontos' vai receber o valor de 'p'
    }
    else    
    {
      ponto *listaAux = ListaPontos;    //Adicionando um ponteiro recebendo o valor de 'ListaPontos'
      
      int i = 0;
      while(i != index - 1)    //Condição de Parada 
        {
          listaAux = listaAux->prox;    //'listaAux' recebe o valor de 'listaAux->prox' até que 'i' seja igual a 'index'
          i++;
        }
      p->prox = listaAux->prox;    //'p->prox' recebe o valor de 'listaAux->prox'
      listaAux->prox = p;    //'listaAux->prox' recebe o valor de 'p'
    }
    length++;    //Após a adição 'length' é encrementado 
  }
}

int main() {

  adicionarIndex(1, 1, 0);
  adicionarIndex(2, 4, 1);
  adicionarIndex(4, 16, 2);
  adicionarIndex(3, 9, 2);
  adicionarIndex(0, 0, 0);

  ponto *auxLista = ListaPontos;
  imprimir(auxLista);

  return 0;
}
