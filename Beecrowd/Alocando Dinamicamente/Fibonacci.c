#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int n;
}Termos;

int Fibonacci(int N)
{
  int i, a = 0, b = 1, c = 0;

  for(i = 0; i < N; i++)
    {
      printf("%d", a);

      if(i < N - 1)
        printf(" ");

      c = a + b;
      a = b;
      b = c;
    }
  printf("\n");
}

int main()
{
  Termos *Numero = (Termos*)malloc(sizeof(Termos));
  
  //verificação de erros na alocação
  if(Numero == NULL)
  {
    printf("Erro ao alocar memória.\n");
    free(Numero);    //Libera espaço alocado
    return 1;    //Retorna 1 em caso de erro
  }

  //Solicitação de termos
  scanf("%d", &Numero->n);

  //Chama a função solicitada 
  Fibonacci(Numero->n);
  free(Numero);
  
  return 0;
}
