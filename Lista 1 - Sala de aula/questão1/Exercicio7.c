/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:
        Faça um algoritmo que receba uma
        temperatura em grau Celsius, e calcule
        e mostre essa temperatura em grau Fahrenheit.
        Sabe-se que F = (1.8 * C) + 32.


*/

#include <stdio.h>

int main(void)
{
    float Celsius, Fahrenheit;

    printf(" Vamos converter de Graus Celsius para Fahrenheit?");

    printf("\n\n Por favor me diz a temperatura em Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (1.8 * Celsius) + 32;

    printf("\n\n A temperatura em Fahrenheit: %.2f \n\n", Fahrenheit);

    return 0;
}
