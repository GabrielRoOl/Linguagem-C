#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int qtd_positivos = 0;
  double media_positivos = 0;
  double soma = 0;
  double  valor;
  for(i = 0; i < 6;i++)
    {
      scanf("%lf", &valor);
      if(valor > 0)
      {
        qtd_positivos++;
        soma += valor;
      }
    }
  
  media_positivos = soma / qtd_positivos;

  printf("%d valores positivos\n", qtd_positivos);
  printf("%.1lf\n", media_positivos);
  return 0;
}

