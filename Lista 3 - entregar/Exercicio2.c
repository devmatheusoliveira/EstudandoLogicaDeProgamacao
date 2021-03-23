/*
    Aluno:
        Matheus Santos Oliveira
    Descricao:
        Fazer um programa para ler o salário de uma pessoa,
        o percentual de aumento e o percentual de descontos.
        Os descontos incidem sobre o salário com aumento.
        Calcular o novo salário e mostrá-lo como no exemplo a seguir.

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int percentualDeAumento, percentualDeDesconto, parteInteira,parteDecimal;
    float salarioAtual, salarioLiquido, salarioAumentado;

    printf(" Vamos calcular o novo salário?");

    printf("\n\n Por favor, informe o valor do seu salario autal: ");
    scanf("%f", &salarioAtual);

    printf("\n Agora, informe o percentual de aumento: ");
    scanf("%d", &percentualDeAumento);

    printf("\n Otimo, informe o percentual de desconto: ");
    scanf("%d", &percentualDeDesconto);

    salarioAumentado = salarioAtual * (1 + ((float)percentualDeAumento / 100));
    salarioLiquido = salarioAumentado * (1 - ((float)percentualDeDesconto / 100));

    printf("\n\n O salario aumentado: %.2f", salarioAumentado);
    printf("\n O salario liquido: %.2f", salarioLiquido);

    parteInteira = (int)salarioLiquido;
    parteDecimal = ceil((salarioLiquido - parteInteira)*100);

    printf("\n\n O salario liquido: %d reais e %d centavos", parteInteira,parteDecimal);

}
