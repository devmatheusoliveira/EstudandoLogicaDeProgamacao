/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Tendo como entrada dois valores inteiros, elaborar um algoritmo
        para calcular e mostrar:

        a) A soma desses valores;
        b) A subtra��o do primeiro pelo segundo;
        c) A multiplica��o entre eles;
        d) A divis�o inteira do primeiro pelo segundo;
        e) A divis�o float do primeiro pelo segundo;
        f) O resto da divis�o do primeiro pelo segundo.

*/


#include <stdio.h>

int main(void)
{
    int primeiroNumero, segundoNumero, resultado;
    float resutadoDecimal;

    printf(" Vamos ver algumas operacoes?");

    printf("\n\n Por favor informe dois numeros, aperte 'Enter' de um numero para o outro: ");
    scanf("%d %d", &primeiroNumero, &segundoNumero);


    resultado = primeiroNumero + segundoNumero;
    printf(" %d + %d = %d \n", primeiroNumero, segundoNumero, resultado);

    resultado = primeiroNumero - segundoNumero;
    printf(" %d - %d = %d \n", primeiroNumero, segundoNumero, resultado);

    resultado = primeiroNumero * segundoNumero;
    printf(" %d * %d = %d \n", primeiroNumero, segundoNumero, resultado);

    resultado = primeiroNumero / segundoNumero;
    printf(" %d / %d = %d \n", primeiroNumero, segundoNumero, resultado);


    resutadoDecimal = (float) primeiroNumero / segundoNumero;
    printf(" %d / %d = %.2f \n", primeiroNumero, segundoNumero, resutadoDecimal);


    resultado = primeiroNumero % segundoNumero;
    printf(" %d %% %d = %d", primeiroNumero, segundoNumero, resultado);


    return 0;
}
