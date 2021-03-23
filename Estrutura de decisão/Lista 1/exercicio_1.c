/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:
        Ler um número inteiro e calcular e
        apresentar o seu módulo ou valor
        absoluto (número sem sinal), isto é,
        se o número é negativo apresentá-lo
        como positivo.

*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Vamos calcular o modulo de um numero inteiro?");

    printf("\n\n Por favor insira um numero: ");
    scanf("%d", &numero);

    if(numero < 0)
    {
        numero = -numero;
    }

    printf("%d", numero);

    return 0;
}
