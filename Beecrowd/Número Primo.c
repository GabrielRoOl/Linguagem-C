#include <stdio.h>
#include <stdlib.h>

//Função primo
int primo(int x){
  int i;
  if(x < 2){    //Números negativos e o 1 não são primos
    return 0;
  }
  for(i = 2; i < x; i++){
    if(x % i == 0){  
      return 0;    //Caso seja par, return 0
    }
  }
  return 1;
}

//Função principal
int main(){
  int N, X;
  
  scanf("%d", &N);    //Números de casos de repetição
  while(N >= 1){
    
    scanf("%d", &X);    //Números que serão testados 
    if(primo(X) == 1){    //Condição p/ ser um primo, invocando a função 'primo'
      printf("%d eh primo\n", X);
    } else{
      printf("%d nao eh primo\n", X);
    }
    
    N--;
  }
  
  return 0;
}
