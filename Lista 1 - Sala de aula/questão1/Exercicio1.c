/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Tem como objetivo calcular o volume em cm� de uma caixa a partir
        das medidas de seus lados e informar ao usu�rio.
*/

#include <stdio.h>



int main(void)
{
    int largura, comprimento, altura, volume;

    printf("Ol�, vamos calcular o volume de uma caixa retangular?\n");

    printf("Insira a largura em cm \n");
    scanf("%d", &largura);

    printf("Insira o comprimento em cm \n");
    scanf("%d", &comprimento);

    printf("Insira a altura em cm \n");
    scanf("%d", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa %dcm x %dcm x %dcm = %dcm3 " , largura, comprimento, altura, volume);

    return 0;
}
