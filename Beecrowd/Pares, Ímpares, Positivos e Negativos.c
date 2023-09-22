#include <stdio.h>
#include <stdlib.h>

int main()
{
  int valores[5], i, par=0, impar=0, positivos=0, negativos=0;
  for(i = 0; i < 5; i++)
    {
      scanf("%d", &valores[i]);
      if(valores[i] % 2 == 0)
      {
        par += 1;
      } else {
        impar += 1;
      }
      if(valores[i] > 0)
      {
        positivos += 1;
      } else if(valores[i] < 0) {
        negativos += 1;
      }
          
    }
  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", positivos);
  printf("%d valor(es) negativo(s)\n", negativos);
    
  return 0;
}
