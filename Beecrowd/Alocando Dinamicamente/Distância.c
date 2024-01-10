#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Criando uma variavel
typedef struct
{
  double X1, X2, Y1, Y2;
}Pontos;

//Criando uma função
void ponto(Pontos X)
{
  double distancia;
  
  distancia = sqrt(pow(X.X2 - X.X1, 2) + pow(X.Y2 - X.Y1, 2));

  printf("%.4lf\n", distancia);

}

//Função principal
int main()
{
  //Memoria dinâmica
  Pontos *A = (Pontos*) malloc(sizeof(Pontos));

  scanf("%lf %lf %lf %lf", &A->X1, &A->Y1, &A->X2, &A->Y2);
  
  ponto(*A);

  free(A);//Libera espaço alocado
  
  return 0;
}
