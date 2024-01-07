#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Criando um Tipo
typedef struct
{
  double N, Raio, Area; 
}Circunferencia;

int main()
{  
  //Alocando memória dinamicamente
  Circunferencia *A = (Circunferencia *) malloc(sizeof(Circunferencia));

  //Verificação de erros enquanto aloca memória 
  if(A == NULL)
  {
    fprintf(stderr, "Erro ao alocar memoria.\n");
    return 1; //Saida em caso de erro
  }
  
  //Atribuindo valores
  A->N = 3.14159;
  scanf("%lf", &A->Raio);

  //Operação
  A->Area = pow(A->Raio, 2) * A->N;

  //Print do resultado
  printf("A=%.4lf\n", A->Area);
  
  free(A);
  return 0;
}
