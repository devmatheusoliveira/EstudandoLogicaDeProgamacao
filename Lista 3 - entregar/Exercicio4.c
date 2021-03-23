/*
    Aluno:
        Matheus Santos Oliveira
    Descrição:
        Ler um número inteiro com até 5 dígitos.
        Separar os dígitos desse número e
        mostrá-los em linhas distintas.

*/

#include <stdio.h>
#include <math.h>

void main(void)
{
    int primeiro, segundo, terceiro, quarto, quinto, numero;

    printf(" Por favor, informe um numero inteiro de 5 digitos: ");
    scanf("%d",&numero);

    primeiro = numero / 10000;
    segundo = numero % 10000 / 1000;
    terceiro = numero % 1000 / 100;
    quarto = numero % 100 / 10;
    quinto = numero  % 10;

    printf(" O numero separado eh: \n");

    printf("\n Primeiro digito: %d", primeiro);
    printf("\n Segundo digito: %d", segundo);
    printf("\n Terceiro digito: %d", terceiro);
    printf("\n Quarto digito: %d", quarto);
    printf("\n Quinto digito: %d", quinto);

    return 0;
}
