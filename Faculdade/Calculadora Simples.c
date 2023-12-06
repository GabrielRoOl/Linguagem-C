// Calculadora

#include <stdio.h>

int main() 
{
  int x, y, oper;
  int soma = 0, sub = 0, mult = 1;
  float div = 1.0;
  int rep;
  
  printf("Calculadora\n\n");
  while(1)
  {
    printf("Digite dois valores:\n");
    // Números desejados
    scanf("%d %d", &x, &y);
    
    printf("Escolha a operação desejada:\n1 Soma\n2 Subtração\n3 Multiplicação\n4 Divisão\n");
    // Operação que será realizada
    scanf("%d", &oper);
    switch(oper)
      {
        case 1:
          // Soma
        soma = x + y;
          printf("%d\n", soma);
        break; 
        case 2:
          // Subtração
        sub = x - y;
          printf("%d\n", sub);
        break;
        case 3:
          // Multiplicação
        mult = x * y;
          printf("%d\n", mult);
        break;
        case 4:
          // Divisão
        if(y == 0)
          printf("Não existe divisão por 0\n");
        else{
          div = (float)x / y; 
            printf("%.2f\n", div);
        }
      }
    printf("Deseja continuar fazendo calculos?\n1 Sim\n2 Finalizar\n");
    scanf("%d", &rep);
    // Condição para repetir ou não
    if(rep == 2)
      break;
    else if(rep == 1)
      continue;
    else
      printf("Digito invalido, irei reiniciar\n\n");
  }
  printf("Finalizando programa...\n");
  return 0;
}
