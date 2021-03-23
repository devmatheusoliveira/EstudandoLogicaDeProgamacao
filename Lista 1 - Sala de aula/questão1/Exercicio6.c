/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:

        Calcular o valor do sal�rio l�quido de uma pessoa.
        Sobre o sal�rio bruto incidem descontos de imposto de
        renda e de INSS
*/

#include <stdio.h>


int main(void)
{
    float salarioBruto, percentualINSS, percentualIR, salarioLiquido;

    printf(" Vamos calcular seu salario liquido?");

    printf("\n Por favor informe seu salario bruto: ");
    scanf("%f", &salarioBruto);

    printf(" Agora, informe seu percentual do INSS: ");
    scanf("%f", &percentualINSS);

    printf(" Otimo, informe seu percentual do IR: ");
    scanf("%f", &percentualIR);

    salarioLiquido = (salarioBruto * (percentualINSS/100) * (percentualIR/100));

    printf("\n\n Seu salario liquido eh: %.2f\n\n", salarioLiquido);

    return 0;
}
