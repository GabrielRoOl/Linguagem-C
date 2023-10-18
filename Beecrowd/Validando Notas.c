#include <stdio.h>
#include <stdlib.h>

int main(){
  double nota, media = 0;
  int cont = 0;
  while(cont < 2){
    scanf("%lf", &nota);
    if(nota < 0){
      printf("nota invalida\n");
    } else if(nota >= 11){
      printf("nota invalida\n");
    } else {
      media = media + nota;
      cont++;
    }
  }
  printf("media = %.2lf\n", media / 2);  
  return 0;
}
