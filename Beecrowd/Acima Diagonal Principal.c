#include <stdio.h>

int main() {
  double M[12][12];
  int i, j, elementos = 0;
  double Resultado = 0.0;
  char O;

  scanf("%c", &O);

  for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
      scanf("%lf", &M[i][j]);
    }
  }

  for (i = 0; i < 12; i++) {
    for (j = i + 1; j < 12; j++) {
      Resultado += M[i][j];
      elementos++;
    }
  }

  if (O == 'S') {
    printf("%.1f\n", Resultado);
  } else if (O == 'M') {
    printf("%.1lf\n", Resultado / elementos);
  }
  return 0;
}
