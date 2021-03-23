/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Ler um n�mero inteiro com at� 4 d�gitos.
        Separar os d�gitos desse n�mero e
        mostr�-los em linhas distintas.

*/

#include <stdio.h>
#include <math.h>

void main(void)
{
    int primeiro, segundo, terceiro, quarto, numero;

    printf(" Por favor, informe um numero inteiro de 4 digitos: ");
    scanf("%d",&numero);

    primeiro = numero / 1000;
    segundo = numero % 1000 / 100;
    terceiro = numero % 100 / 10;
    quarto = numero  % 10;

    printf(" O numero separado eh: \n");

    printf("\n Primeiro digito: %d", primeiro);
    printf("\n Segundo digito: %d", segundo);
    printf("\n Terceiro digito: %d", terceiro);
    printf("\n Quarto digito: %d", quarto);

    return 0;
}
