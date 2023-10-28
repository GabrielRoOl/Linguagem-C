#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int x, y, reset1, reset2;

  while (1){
    scanf("%d %d", &x, &y);
    if(x == 0 || y == 0)
      break;
    if(x > 0 && y > 0)
      printf("primeiro\n");
    if(x < 0 && y > 0)
      printf("segundo\n");
    if(x < 0 && y < 0)
      printf("terceiro\n");
    if(x > 0 && y < 0)
      printf("quarto\n");
    reset1 = pow(x, 0);
    reset2 = pow(y, 0);
  }
  return 0;
}
