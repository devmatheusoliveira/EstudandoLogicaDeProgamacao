/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Fazer um programa que leia um valor
        double que representa o sal�rio de uma pessoa.
        Apresente separadamente os reais (parte inteira)
        e os centavos (parte decimal).

        Observa��o: Apresentar os centavos como inteiro
        de dois d�gitos (exemplo: 40 em vez de 0.40)

*/
#include <stdio.h>
#include <math.h>

int main()
{
    double salario;
    int parteInteira,parteDecimal;

    printf(" Vamos separar os reais dos centavos?");

    printf("\n\n Por favor insira seu salario: ");
    scanf("%lf", &salario);

    parteInteira = (int)salario;
    parteDecimal = ceil(salario - parteInteira)*100;

    printf("\n\n Salario informado: %.2lf \n Reais %d \n centavos: %d",salario, parteInteira,parteDecimal);
}
