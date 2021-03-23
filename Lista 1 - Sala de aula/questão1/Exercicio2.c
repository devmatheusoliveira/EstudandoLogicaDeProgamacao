/*
    Aluno:
        Matheus Santos Oliveira
    Descrição:
        Calcular o valor da circunferência através da entrada de um raio
*/

#include <stdio.h>



int main(void)
{
    int raio;
    float circunferencia;

    printf("Insira o valor do raio para descobrir o tamanho da circunferência: \n");
    scanf("%d", &raio);

    circunferencia = 2 * 3.1415 * raio;

    printf("A circunferência vale: %f", circunferencia);

    return 0;
}
