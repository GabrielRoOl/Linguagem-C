#include <stdio.h>

int main()
{
  int valor, i, impar=0;
  scanf("%d", &valor);
  for(i = 0; i < valor; i++)
    {
      impar += 1;
      if(impar % 2 == 1)
      {
        printf("%d\n", impar);
      }
    }
  return 0;
}
