/* Construa um programa em C ANSI onde exista uma função que receba 2 números inteiros “x” e “y” e
retorne quantos números primos existem dentro do intervalo fechado entre “x” e “y”. Na sua função
principal, solicite ao usuário os valores X e Y e diga quantos primos há entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int primo, x,y;
  int funcao(int n1,  int n2);
  printf("Digite dois valores: ");
  scanf("%d %d", &x, &y);
  primo = funcao(x, y);
  printf("\n Existem %d primos entre %d e %d", primo, x, y);

  return 0;  
}


int primo(int x)
{
  int i;
  if(x == 1)
  {
    return 0;  
  }
  if(x == 0)
  {
    return 0;
  }
  for(i = 2; i < x; i++)
    {
      if(x % i == 0)
      {
        return 0;
      }
    }
  return 1;
}

int funcao(int n1, int n2)
{
  int i, primos_funcao=0, quais_primos, aux;
  if(n1 > n2)
  {
    aux = n1;
    n1 = n2;
    n2 = aux;
  }
  for(i = n1; i <= n2; i++)
    {
      if(primo(i) == 1)
      {
        primos_funcao++;
        quais_primos = i;
        printf("\n Primo : %d", quais_primos);
      }
    }
  return(primos_funcao);
}
