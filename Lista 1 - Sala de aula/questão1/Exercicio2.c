/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Calcular o valor da circunfer�ncia atrav�s da entrada de um raio
*/

#include <stdio.h>



int main(void)
{
    int raio;
    float circunferencia;

    printf("Insira o valor do raio para descobrir o tamanho da circunfer�ncia: \n");
    scanf("%d", &raio);

    circunferencia = 2 * 3.1415 * raio;

    printf("A circunfer�ncia vale: %f", circunferencia);

    return 0;
}
