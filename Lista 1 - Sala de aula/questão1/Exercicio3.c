/*
    Aluno:
        Matheus Santos Oliveira
    Descrição:
        Calcula o valor a ser pago numa prestação em atraso.
*/

#include <stdio.h>



void main(void)
{
    float valorComJuros, prestacao, taxa;

    printf("Ola, vou lhe ajudar a calcular o valor com juros de uma prestacao \n");
    printf("Insira o valor da prestacao: ");
    scanf("%f", &prestacao);
    printf("Otimo! \nAgora insira o valor da taxa em porcentagem: ");
    scanf("%f", &taxa);

    valorComJuros = prestacao + (prestacao*taxa/100);

    printf("O valor com o juros: %f", valorComJuros);

}
