#include <stdio.h>
#include <stdlib.h>

int main()
{
  int valores[5], i, pares=0;
  for(i = 0; i < 5; i++)
    {
        scanf("%d", &valores[i]);
        if(valores[i] % 2 == 0)
        {
          pares += 1;
        }
    }
  printf("%d valores pares\n", pares);
  return 0;
}
