#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12];

    // Leitura do número da linha
    scanf("%d", &L);

    // Leitura da operação (Soma ou Média)
    scanf(" %c", &T);

    // Leitura dos elementos da matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Variável para armazenar o resultado da operação
    double resultado = 0.0;

    // Realiza a operação de Soma ou Média conforme especificado
    for (int j = 0; j < 12; j++) {
        resultado += M[L][j];
    }

    if (T == 'M') {
        resultado /= 12.0;  // Calcula a média
    }

    // Exibe o resultado
    printf("%.1lf\n", resultado);

    return 0;
}
