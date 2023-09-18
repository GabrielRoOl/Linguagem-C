#include <stdio.h>
#include <stdlib.h> 

int main()
{
  int x, y, i, soma=0, aux;
  scanf("%d %d", &x, &y);

  //X É MENOR QUE Y
  if(x > y)
  {
    aux = x;
    x = y;
    y = aux;
  }
  

  for(i = x + 1; i < y; i++)
    {
      if(i % 2 != 0)
      {
        soma = soma + i;
      }
    }
  printf("%d\n", soma);
  return 0;
}
