/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Um hotel deseja fazer uma promo��o
        especial de final de semana, concedendo
        um desconto de 25% na di�ria. Sendo informados
        o n�mero de apartamentos do hotel e o valor da
        di�ria por apartamento para o final de semana
        completo. Elaborar um programa para calcular:
            a) Valor promocional da di�ria;
            b) Valor total caso a ocupa��o no final de
                semana atinja 100%;
            c) Valor total a ser arrecadado caso a ocupa��o
                no final de semana atinja 70%;
            d) Valor que o hotel deixar� de arrecadar em
            virtude da promo��o, caso a ocupa��o atinja 100%.

            Armazene em vari�veis apenas o valor da di�ria,
            o valor da di�ria com desconto e a quantidade de quartos

*/


#include <stdio.h>
#define numeroDeDias 2

int main(void)
{
    float diariaPromocional, valorDaDiaria, quatidadeDeApartamento;

    printf(" Vamos fazer calculos de diarias?");

    printf("\n\n Por favor, infome o valor da diaria: ");
    scanf("%f", &valorDaDiaria);

    printf("\n\n Agora, infome o quatidade de apartamento: ");
    scanf("%f", &quatidadeDeApartamento);

    diariaPromocional = valorDaDiaria*(1-0.25f);

    printf("\n O valor da diaria promocional: %.2f", diariaPromocional);
    printf("\n O total arrecadado com 100%% de ocupa��o: ");

    printf("%.2f", (quatidadeDeApartamento * diariaPromocional * numeroDeDias));

    printf("\n O total arrecadado com 70%% de ocupa��o: ");
    printf("%.2f", (quatidadeDeApartamento * diariaPromocional * numeroDeDias) * 0.7);

    printf("\n O valor que deixara de arrecadar ao aplicar o desconto: ");
    printf("%.2f",(valorDaDiaria - diariaPromocional) * numeroDeDias *quatidadeDeApartamento);

    return 0;
}
