#include <stdio.h>
#include <stdlib.h>

// Criando um tipo
typedef struct Pessoa {
  int senha;
  struct Pessoa *prox;
} Pessoa;

Pessoa *Fila; // Armazena o primeiro da fila

// Adicionando função com o conceito de fila (FIFO First-In-First-Out)
void AddLast(int senha) {
  Pessoa *FilaAux = Fila;
  // Alocamento dinâmico
  Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
  p->senha = senha;
  p->prox = NULL;
  // Conferindo erro de alocação
  if (p == NULL) {
    printf("Erro ao alocar memória.\n");
    free(p);
  }
  if (Fila == NULL) {
    Fila = p;
  } else {
    Pessoa *FilaAux = Fila; // Copia de 'Fila'
    while (FilaAux->prox != NULL) {
      FilaAux = FilaAux->prox;
    }
    FilaAux->prox = p;
  }
}

void Remove() {
  if (Fila == NULL) {
    printf("Fila vazia.\n");
  } else {
    Fila = Fila->prox;
  }
}

// Função de impressão de senha
void imprime(Pessoa *f) {
  if (f != NULL) {
    printf("Senha da pessoa: %d\n", f->senha);
    imprime(f->prox);
  }
}

int main() {

  AddLast(5);
  AddLast(8);
  AddLast(10);

  Remove(); // Independente de onde for colocado a função, ela sempre removerá o primeiro elemento '5'

  AddLast(22);

  Pessoa *FilaAux = Fila;
  imprime(FilaAux);

  return 0;
}
