#include <stdio.h>

int v[100];

int main() {

  int i, a;

  for (i = 0; i < 100; i++) {
    v[i] = i + 1;
  }

  int num = 100;
  int compar = 0;
  int continuar = 1;

  int ini = 0;
  int fim = 99;

  while (continuar == 1) {
    compar++;
    int pivo = (ini + fim) / 2;

    if (v[pivo] == num) {
      printf("\nElemento encontrado.\nPosição: %d", pivo);
      continuar = 0;
    } else {
      if (num > v[pivo]) {
        ini = pivo + 1;
      } else {
        fim = pivo - 1;
      }
    }
    if (fim < ini)
      continuar = 0;
  }
  printf("\nComparações %d.", compar);

  return 0;
}
