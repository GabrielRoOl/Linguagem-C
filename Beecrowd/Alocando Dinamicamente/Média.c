#include <stdio.h>
#include <stdlib.h>

//Criando um tipo
typedef struct
{
  double A, B, C;
}Valores;

//Função para encontrar a média
double Media(Valores valor)
{
  float M;
  M = (valor.A * 2 + valor.B * 3 + valor.C * 5) / 10;
  return M;
}

//Função principal
int main()
{
  float resultado;
  
  //Alocando espaço dinâmico.
  Valores *X = (Valores *)  malloc(sizeof(Valores));
  
  //Teste de erro de alocação.
  if(X == NULL)
  {
    printf("Erro ao alocar memória!\n");
    free(X); //Libera espaço memória.
    return 1; //Retora 1 em caso de erro.
  }
  
  //Solicitando valores
  scanf("%lf %lf %lf", &X->A, &X->B, &X->C);

  //
  resultado = Media(*X);

  //Mostra o resultado
  printf("MEDIA = %.1lf\n", resultado);

  //Libera espaço alocado
  free(X);
  
  return 0;
}
