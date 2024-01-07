#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int A, B, Resultado;
}Soma;

int main()
{
  //Alocando memoria dinamicamente
  Soma *X = (Soma *) malloc(sizeof(Soma));

  //Solicitando números para a operação
  scanf("%d %d", &X->A, &X->B);

  //Operação
  X->Resultado = X->A + X->B;

  //Imprime o valor 
  printf("X = %d\n", X->Resultado);

  free(X);
  return 0;
}
