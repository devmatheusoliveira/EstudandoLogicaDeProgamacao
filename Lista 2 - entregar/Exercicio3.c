/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Cada degrau de uma escada tem uma altura X.
        Fa�a um programa para ler essa altura e a altura
        que o usu�rio deseja alcan�ar subindo a escada.
        Calcule e mostre quantos degraus o usu�rio dever�
        subir para atingir o seu objetivo.
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
    int numeroDeDegraus;
    float alturaDoDegrau, alturaDoObjetivo;

    printf(" Vamos calcular o numero de degraus para alcancar uma altura?");

    printf("\n Digite a altura do degrau em cm: ");
    scanf("%f", &alturaDoDegrau);

    printf(" Otimoo, digite a altura que voce quer alcancar em m: ");
    scanf("%f", &alturaDoObjetivo);

    numeroDeDegraus = ceil(alturaDoObjetivo / (alturaDoDegrau/100));

    printf("\n\n Voce vai precisar de %d degraus para alcancar %.2f metros \n\n", numeroDeDegraus, alturaDoObjetivo);
    return 0;
}
