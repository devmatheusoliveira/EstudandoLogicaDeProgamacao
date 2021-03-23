/*
    Aluno:
        Matheus Santos Oliveira
    Descricao:
        Elabore um programa que leia via
        teclado uma quantidade de segundos (tipo int)
        e transforme este tempo em dias, horas e
        minutos (as três últimas em tipo float).
*/
#include <stdio.h>
int main()
{

    int segundos = 86400;
    float minutos, horas, dias;

    printf(" Vamos converter segundos em minutos, horas e segundos?");

    printf("\n\n Primeiro, me diz o tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;
    dias = horas / 24;

    printf("\n\n Pronto!\n %d segundos equivale a %.1f minutos ou %.1f horas ou %.1f dias\n\n",segundos, minutos, horas, dias);

}
