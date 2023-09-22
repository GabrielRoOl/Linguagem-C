/* Construa um programa em C ANSI onde exista uma função que recebe por parâmetro um número e
retorne 1 caso ele seja perfeito ou zero caso ele não seja perfeito. Um número perfeito é um número que a
soma de seus divisores com exceção do próprio número é igual a ele mesmo. Ex: 6 ( 1 + 2 + 3 ), 28 (
1+2+4+7+14). Na sua função principal, solicite ao usuário 10 números e mostre na tela:
a) Quais números são perfeitos;
b) Quantos são perfeitos;
c) O maior número perfeito;
d) O menor número perfeito;
e) Somatório dos números perfeitos. */

#include <stdio.h>
#include <stdlib.h>

int perfeito(int numero);
int main()
{
    int numero;
    int i;
    int qtd_perfeitos = 0;
    int maior_perfeito = 0;
    int menor_perfeito = 0;
    int som =0;

    for (i = 0; i < 10; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &numero);

        if (perfeito(numero) == 1)
        {
            printf("\n Numero %d e perfeito", numero);
            qtd_perfeitos++;
            som = som + numero;

            if (qtd_perfeitos == 1)
            {
                maior_perfeito = numero;
                menor_perfeito = numero;
            }
            else
            {
                if (numero > maior_perfeito)
                {
                    maior_perfeito = numero;
                }

                if (numero < menor_perfeito)
                {
                    menor_perfeito = numero;
                }
            }
        }
    }

    printf("\n Quantidade de perfeitos = %d", qtd_perfeitos);
    printf("\n Maior perfeito : %d", maior_perfeito);
    printf("\n Menor perfeito : %d", menor_perfeito);
    printf("\n Somatorio de perfeitos = %d",som);

    printf("\n");
    return 0;
}

int perfeito(int numero)
{
    int i;
    int som = 0;

    for (i = 1; i < numero; i++)
    {

        if (numero % i == 0)
        {
            som = som + i;
        }
    }
    if (som == numero)
        return 1;
    else
        return 0;
}
