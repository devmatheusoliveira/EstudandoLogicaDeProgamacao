/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:

         Calcular o salario com reajuste,
         após aumento em X %

*/

#include <stdio.h>

int main(void)
{
    float salarioAtual, salarioReajustado, percentualReajuste;

    printf(" Vamos calcular seu salario reajustado?");

    printf("\n\n Por favor informe seu salario atual: ");
    scanf("%f", &salarioAtual);

    printf("\n\n Agora me diz seu salario atual: ");
    scanf("%f", &percentualReajuste);

    salarioReajustado = (salarioAtual * (percentualReajuste/100+1));

    printf("\n\n Seu salario reajustado eh: %.2f", salarioReajustado);
    return 0;
}
