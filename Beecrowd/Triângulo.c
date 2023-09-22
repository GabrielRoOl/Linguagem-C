#include <stdio.h>
#include <stdlib.h>

int main()
{
  double a, b, c, aux, area, perimetro;
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a + b > c && a + c > b && b + c > a)
  {
    perimetro = a + b + c;
    printf("Perimetro = %.1lf\n", perimetro);
  } 
  else 
  {
    area = (c/2) * (a + b);
    printf("Area = %.1lf\n", area);
  }

  return 0;
}
