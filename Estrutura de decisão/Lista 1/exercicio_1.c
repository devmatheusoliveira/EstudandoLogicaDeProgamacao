/*
    Aluno:
        Matheus Santos Oliveira

    Descri��o:
        Ler um n�mero inteiro e calcular e
        apresentar o seu m�dulo ou valor
        absoluto (n�mero sem sinal), isto �,
        se o n�mero � negativo apresent�-lo
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
