/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:

         Faça um algoritmo que calcule
         e mostre a tabuada de 0 a 10
         de um número inteiro digitado
         pelo usuário.

*/

#include <stdio.h>

int main(void)
{
    int numero, resultado = 0;

    printf(" Vamos fazer a tabuada de um numero?");

    printf("\n\n Por favor me diz o numero que voce quer: ");
    scanf("%d", &numero);

    printf("\n %d X 0 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 1 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 2 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 3 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 4 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 5 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 6 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 7 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 8 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 9 = %d",numero, resultado);

    resultado += numero;
    printf("\n %d X 10 = %d",numero, resultado);


  return 0;
}
