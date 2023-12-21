#include <stdio.h>

int main() {
    char inicio_descricao[5], fim_descricao[5];
    int inicio_dia, inicio_hora, inicio_minuto, inicio_segundo;
    int fim_dia, fim_hora, fim_minuto, fim_segundo;
    
    // Leitura da entrada
    scanf("%s %d", inicio_descricao, &inicio_dia);
    scanf("%d : %d : %d", &inicio_hora, &inicio_minuto, &inicio_segundo);
    
    scanf("%s %d", fim_descricao, &fim_dia);
    scanf("%d : %d : %d", &fim_hora, &fim_minuto, &fim_segundo);

    // Cálculo da duração em segundos
    int inicio_total_segundos = inicio_dia * 24 * 60 * 60 + inicio_hora * 60 * 60 + inicio_minuto * 60 + inicio_segundo;
    int fim_total_segundos = fim_dia * 24 * 60 * 60 + fim_hora * 60 * 60 + fim_minuto * 60 + fim_segundo;

    int duracao_segundos = fim_total_segundos - inicio_total_segundos;

    // Cálculo dos dias, horas, minutos e segundos
    int duracao_dias = duracao_segundos / (24 * 60 * 60);
    duracao_segundos %= (24 * 60 * 60);

    int duracao_horas = duracao_segundos / (60 * 60);
    duracao_segundos %= (60 * 60);

    int duracao_minutos = duracao_segundos / 60;
    duracao_segundos %= 60;

    // Saída formatada
    printf("%d dia(s)\n", duracao_dias);
    printf("%d hora(s)\n", duracao_horas);
    printf("%d minuto(s)\n", duracao_minutos);
    printf("%d segundo(s)\n", duracao_segundos);

    return 0;
}
