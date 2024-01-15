#include <stdio.h>

//Função de potencia
int potencia(int base,int expoente)
{
  //Condição de parada
  if(expoente == 1)
  {
    return base;
  }
  //Return recebe ele mesmo, formando um ciclo até atingir a condição
  return base * potencia(base, expoente-1);
}

//Função principal
int main()
{
  int v = potencia(2, 4);    //16
  printf("%d\n", v);
  return 0;
}
