/*
    Aluno:
        Matheus Santos Oliveira

    Descri��o:
        Ler um valor que representa
        o pre�o de um produto e imprimir
        esse valor com reajuste de x%.
        O percentual do reajuste � informado
        pelo usu�rio.

        O valor do reajuste � de 0 a 100, dado em
        porcentagem
*/
#include <stdio.h>
int main()
{
    float valorDoProduto, valorReajustado;
    int reajuste;

    printf("Por favor informe o valor do produto: ");
    scanf("%f", &valorDoProduto);

    printf("\nOtimo, agora informe o valor do reajuste de 0 a 100, correspondente a %%: \n");
    scanf("%d", &reajuste);

    valorReajustado = (1+(float)reajuste/100)*valorDoProduto;

    printf("O valor reajustado e: %.2f", valorReajustado);

    return 0;
}
