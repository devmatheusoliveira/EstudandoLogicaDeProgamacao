/*
    Aluno:
        Matheus Santos Oliveira
    Descrição:
        Tendo como entrada dois valores inteiros, elaborar um algoritmo
        para calcular e mostrar:

        a) A soma desses valores;
        b) A subtração do primeiro pelo segundo;
        c) A multiplicação entre eles;
        d) A divisão inteira do primeiro pelo segundo;
        e) A divisão float do primeiro pelo segundo;
        f) O resto da divisão do primeiro pelo segundo.

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
