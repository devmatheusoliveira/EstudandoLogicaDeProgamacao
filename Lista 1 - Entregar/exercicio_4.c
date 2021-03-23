/*
    Aluno:
        Matheus Santos Oliveira
    Descricao:
        Escreva um programa que leia dois valores que
        são o raio e a altura de um cilindro e calcule
        o seu volume

*/

#include <stdio.h>
#define Pi 3.1415f

int main(void)
{
    int raio, altura;
    float volume;

    printf(" Vamos descobrir o volume de um cilindro?");

    printf("\n\n Qual eh o raio em cm: ");
    scanf("%d", &raio);

    printf("\n Qual eh a altura cm: ");
    scanf("%d", &altura);

    volume = Pi * (raio * raio) * altura;

    printf("\n O volume do cilindro eh: %.2f", volume);

    return 0;
}
