#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);

    // Ordena os valores em ordem decrescente
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Verifica se forma um triângulo
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Verifica o tipo de triângulo
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
