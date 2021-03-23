/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Ler a quantidade de kilowatts de energia
        el�trica consumidos por uma resid�ncia.
        Calcular e mostrar o valor em reais de cada
        kilowatts, o valor total a ser pago e valor
        a ser pago por essa resid�ncia quando h�
        desconto de 10%.

        Considere que 100 kilowatts custam 1/7
        do sal�rio m�nimo.
        Ler o valor do sal�rio m�nimo.
        Armazene em vari�veis apenas o valor do sal�rio
        m�nimo, a quantidade de kilowatts gastos pela
        resid�ncia e o valor de um kilowatt.
*/

#include <stdio.h>

int main(void)
{
    float salarioMinimo, valorDoKilowatt,pagoPelaResidencia, valorComDesconto, kilowattsGastos;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Otimo, agora o valor dos kilowatts gastos: ");
    scanf("%f", &kilowattsGastos);

    pagoPelaResidencia = ((salarioMinimo/7)*kilowattsGastos)/100;
    valorDoKilowatt = pagoPelaResidencia / kilowattsGastos;
    valorComDesconto = pagoPelaResidencia*0.9f;


    printf("\n O valor do kilowatt eh: %.2f", valorDoKilowatt);
    printf("\n O valor a ser pago pela residencia eh: %.2f", pagoPelaResidencia);
    printf("\n O valor a ser pago com 10 %% de desconto eh: %.2f", valorComDesconto);


    return 0;
}
