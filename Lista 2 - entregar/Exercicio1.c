/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Fa�a um programa que receba o custo
        de um espet�culo teatral e o pre�o
        do convite desse espet�culo.

        > Esse programa deve calcular e mostrar:
            a) A quantidade de convites que devem
        ser vendidos para cobrir o custo do espet�culo.

            b) A quantidade de convites que devem ser
        vendidos para cobrir o custo do espet�culo e ainda
        obter um lucro de 25%.


*/
#include <stdio.h>
#include <math.h>

int main()
{
    int ingressosVendidos;
    float custoDoEspetaculo, valorDoConvite;

    printf(" Vamos calcular o quantos ingressos precisam ser vendidos?");

    printf("\n\n Por favor, informe o valor de custo do espetaculo: ");
    scanf("%f", &custoDoEspetaculo);

    printf(" Otimo! agora me diz o valor do convite: ");
    scanf("%f", &valorDoConvite);


    ingressosVendidos = ceil(custoDoEspetaculo/valorDoConvite);
    printf("\n\n\ Devem ser vendidos %d ingressos para cobrir o custo do espetaculo!", ingressosVendidos);

    ingressosVendidos = ceil((custoDoEspetaculo*1.25f)/valorDoConvite);
    printf("\n Porem, para ter lucro eh nescessario %d ingressos vendidos! :)", ingressosVendidos);

}
