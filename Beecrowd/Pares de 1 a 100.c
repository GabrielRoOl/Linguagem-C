#include <stdio.h>

int main()
{
  int pares, i;
  for(i = 1; i <= 100; i++)
  {
    if(i % 2 == 0){
      printf("%d\n", i);
    }
  }
  
  return 0;
}
