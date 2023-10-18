#include <stdio.h>

int par_impar(int x){
  int i;
  if(x < 0)
    x = x * -1;
  for(i = 0; i < x; i++){
    if(x % 2 == 0)
      return 0;
    else
      return 1;
  }
}

int main(){
  int i, valor, qtd, k;
  scanf("%d", &qtd);
  for(i = 0; i < qtd; i++){
    scanf("%d", &valor);
    if(valor == 0)
      printf("NULL\n");
    if(par_impar(valor) == 0){
      if(valor < 0)
        printf("EVEN NEGATIVE\n");
      else if(valor > 0)
        printf("EVEN POSITIVE\n");
    } else if(par_impar(valor) == 1){
      if(valor < 0)
        printf("ODD NEGATIVE\n");
      else if(valor > 0)
        printf("ODD POSITIVE\n");
    } 
  }
  return 0;
}


