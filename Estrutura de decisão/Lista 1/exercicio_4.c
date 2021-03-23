/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Ler um n�mero double:
        a) Se o n�mero lido � menor que 100, separar a
        parte inteira e a parte decimal e mostr�-las separadamente.
        b) Se o n�mero lido � maior ou igual a 100,
        obter o resto da divis�o desse n�mero por 3 e mostrar o resto.

*/

#include <stdio.h>

int main(void)
{
    double numero;
    int parteInteira, parteDecimal, divisaoPor3;

    printf("Por favor insira um numero: ");
    scanf("%lf", &numero);

    if(numero < 100)
    {
        parteInteira = (int)numero;
        parteDecimal = (numero - parteInteira)*100;
        printf("\n A parte inteira: %d e a parte decimal: %d ",parteInteira, parteDecimal);
    }
    else
    {
        parteInteira = (int)numero;
        divisaoPor3 = parteInteira % 3;
        printf("\n Este numero dividido por 3 tem resto %d", divisaoPor3 );
    }
    return 0;
}
