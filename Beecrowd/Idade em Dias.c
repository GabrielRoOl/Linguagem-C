#include <stdio.h>

int main(){
    int idade_dias, dia, mes, ano;
    
    scanf("%d", &idade_dias);
    
    ano = idade_dias / 365;
    idade_dias %= 365;

    mes = idade_dias / 30;
    idade_dias %= 30;

    dia = idade_dias;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    
    return 0;
}
