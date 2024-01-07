#include <stdio.h>
#include <stdlib.h>


//Criando um tipo
typedef struct
{
  int A, B, C, D, Subtraindo;
}Subtrair;

//Função principal
int main()
{
  //Alocando memória dinamicamente
  Subtrair *numero = (Subtrair*) malloc(sizeof(Subtrair));

  //teste de alocação
  if(numero == NULL)
  {
    fprintf(stderr, "Erro ao alocar memória!");
    return 1; //Retorno em caso de erro;
  }

  //Iserindo valores
  scanf("%d %d %d %d", &numero->A, &numero->B, &numero->C, &numero->D);

  //Operação
  numero->Subtraindo = numero->A * numero->B - numero->C * numero->D;

  //Imprime o resultado
  printf("DIFERENCA = %d\n", numero->Subtraindo);

  //Liberação de memória alocada
  free(numero);

  return 0;
}
