#include <stdio.h>

int main() {
  int i, x, j, repet;
  int som = 0;
  // Repetidor
  scanf("%d", &repet);
  for (i = 0; i < repet; i++) {
    // Número desejado
    scanf("%d", &x);
    // Repetidor para restos sucessivos
    for (j = 1; j < x; j++) {
      // condição de soma dos restos
      if (x % j == 0)
        som += j;
    }
    // Condição de impressão
    if (x == 1 || som != x)
      printf("%d nao  perfeito\n", x);
    else
      printf("%d é perfeito\n", x);
    som = 0;
  }
  return 0;
}
