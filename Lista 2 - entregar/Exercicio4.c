/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:
        Faça um programa que receba o peso
        e a altura de uma pessoa e calcule
        o índice de massa corpórea.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float indiceDeMassaCorporea, peso, alturaEmMetros;

    printf(" Vamos calcular o IMC de uma pessoa? ");

    printf("\n\n Por favor, informe a altura em metros: ");
    scanf("%f", &alturaEmMetros);

    printf("\n Otimo, agora me diz a peso em kg: ");
    scanf("%f", &peso);


    indiceDeMassaCorporea = peso / pow(alturaEmMetros,2);

    printf(" Seu IMC eh: %.2f", indiceDeMassaCorporea);

}
