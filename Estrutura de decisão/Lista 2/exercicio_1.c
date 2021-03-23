/*
    1) A contribuição para o INSS é calculada da seguinte forma:
        a) Salário bruto até três salários mínimos = INSS 8%.
        b) Salário bruto acima de três salários mínimos = INSS 10%.
        c) Para as contribuições maiores que o salário mínimo, 
        considerar a importância de um salário mínimo.

    Elaborar um programa que receba como entrada o valor 
    do salário mínimo e o valor do salário bruto, 
    calcule o INSS e o salário líquido restante e informe-os.

*/

#include <stdio.h>

int main()
{
    int quantidadeDeSalarios, INSS;
    float salarioLiquido, salarioBruto, salarioMinimo;

    printf("Vamos calcular o modulo de um numero inteiro?");

    printf("\n Por favor insira o Salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("\n\n Agora insira o Salario bruto: ");
    scanf("%f", &salarioBruto);
    
    quantidadeDeSalarios = (int)salarioBruto / salarioMinimo;

    if(quantidadeDeSalarios <= 3)
    {
        INSS = 8;
    }
    else
    {
        INSS = 10;
    }

    salarioLiquido = salarioBruto * (1 - ((float)INSS / 100));

    printf("\n O salario liquido eh de: %.2f", salarioLiquido);
    return 0;
}
