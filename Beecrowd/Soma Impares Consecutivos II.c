#include <stdio.h>

int main(void) {
  int teste, i, j;
  int x, y, aux;
  int soma = 0;
  scanf("%d", &teste);
  for(i = 0; i < teste; i++){
    scanf("%d %d", &x, &y);
    if(x > y){
      aux = x;
      x = y;
      y = aux;
    }
    for(j = x + 1; j < y; j++){
      if(j % 2 == 1){
        soma += j;
      }
    }
    printf("%d\n" , soma);
    soma = 0;
  }
  return 0;
}
