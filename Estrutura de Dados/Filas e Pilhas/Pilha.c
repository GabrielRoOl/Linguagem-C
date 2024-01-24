#include <stdio.h>
#include <stdlib.h>

// Criando um tipo com conceito de Pilha
typedef struct prato {
  char cor;    // Caracter
  struct prato *prox    // Apontando  para o próximo
} prato;

prato *pilha;    // Referencial

// Função que irá adicionar elementos usando conceito de Pilha
void add(char cor)
{
  // Alocando memória dinamicamente
  prato *p = (prato *)malloc(sizeof(prato));
  p->cor = cor;
  p->prox = pilha;
  pilha = p;
}

// No conceito de Pilha o elemento retirado sempre o primeiro
void rem()
{
  if(pilha == NULL)
    printf("Pilha vazia\n");
  else
  {
    pilha = pilha->prox;
  }
}

// Função impressão
void imprime(prato *p)
{
  if(p != NULL)
    {
      printf("Cor do prato: %c\n", p->cor);
      imprime(p->prox);
    }
}

int main()
{
  add('B');
  add('R');
  add('V');
  add('Y');

  rem();
  rem();
  
  prato *pilhaaux = pilha;    // Copia para impressão
  imprime(pilha);

  return 0;
}
