/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Uma revendedora de carros usados paga aos seus
        funcionários vendedores um salário fixo por mês,
        mais uma comissão também fixa para cada carro
        vendido e mais 5% do valor das vendas por eles efetuadas.
        Escrever um programa que receba os seguintes dados de um vendedor:
*/

#include <stdio.h>

int main(void)
{
    float salarioFixo, comissaoPorCarro, totalDeVendas, salarioLiquido;
    int numerosDeCarrosVendidos;

    printf("Os valores abaixo sao apenas numeros, colocar ponto antes de casas decimais: \n\n");

    printf("Informe o valor do salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("\n Informe o valor de comissao por carro vendido: ");
    scanf("%f", &comissaoPorCarro);

    printf("\n Informe o numero de carros vendidos: ");
    scanf("%d", &numerosDeCarrosVendidos);

    printf("\n Informe o total de vendas: ");
    scanf("%f", &totalDeVendas);

    salarioLiquido = salarioFixo + (comissaoPorCarro * numerosDeCarrosVendidos) + 0.05f * totalDeVendas;

    printf("\n\n O salario liquido eh: %.2f reais", salarioLiquido);

    return 0;
}
