/* Construa um programa em C ANSI onde exista uma função que receba 2 números inteiros “x” e “y” e
retorne quantos números primos existem dentro do intervalo fechado entre “x” e “y”. Na sua função
principal, solicite ao usuário os valores X e Y e diga quantos primos há entre eles. */

#include <stdio.h>

int funcao(int x, int y);
int primo(int x);

// FUNÇÃO PRINCIPAL //
int main()
{
  int funcao();    // Para chamar uma função você deve incluir o tipo dela quando a declarar e atribuir o valor dela à uma variavel //
  int x, y, primos;
  printf("Digite um inteiro: \n");
  scanf("%d", &x);
  printf("Digite outro inteiro: \n");
  scanf("%d", &y);
  primos = funcao(x,y);     // Atribuindo uma variavel a função //
  printf("Existem %d primos entre %d e %d\n", primos, x, y);
  
  return 0;
}


// FUNÇÃO DE INTEIROS QUE RETORNARA O NÚMERO DE PRIMOS //
int funcao(int x, int y)
{
  int i, qtd_primos=0, aux;
  
  if(x > y)     //Considerando o 'x' sempre menor que 'y', caso contrario entrara no 'if' abaixo //
  {
    aux = x;    // 'aux' ira receber o valor de x //
    x = y;      // Em seguida 'x' recebera o valor de 'y' //
    y = aux;    // E por fim o valor de 'y' recebera 'aux' //
  }
  
  for(i = x; i <= y; i++)    // Esse 'for' ira contar de 'x' até 'y' //
    {
      if(primo(i) == 1)    // Neste 'if' sempre que a função primo(i'contando de 'x' à 'y') for igual a '1' a variavel qtd_primos recebera 1 //
      {
        qtd_primos++;
      }
    }
  return(qtd_primos);   // Retorna o valor que eu colocar entre os parenteces // 
}



// FUNÇÃO PRIMO //
int primo(int x)
{
  int i;
  if(x < 2)
  {
    return 0;
  }
  for(i = 2; i < x; i++)    /* Começa com '2' para não ter conflito com o if abaixo e ter mais de 1 divisor*/ 
    {
      if(x % i == 0)    // Retira todos os números que possuem mais de 1 divisor//
      {
        return 0;    // Caso 'x' tenha mais de um divisor retornara 0//
      }
    }
  return 1;    // 'x' tendo apenas um divisor retornara 1//
}
