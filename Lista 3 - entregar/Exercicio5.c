/*
    Aluno:
        Matheus Santos Oliveira
    Descrição:
        Ler um número inteiro com até 3 dígitos.
        Separar os dígitos desse número e
        mostrá-los em linhas distintas. Na sequência
        calcular e mostrar o inverso do número.

*/

#include <stdio.h>

int main(void)
{
    int primeiro, segundo, terceiro, quarto, numero, pivo;

    printf(" Por favor, informe um numero inteiro de 3 digitos: ");
    scanf("%d",&numero);

    primeiro = numero % 1000 / 100;
    segundo = numero % 100 / 10;
    terceiro = numero  % 10;

    printf("\n Primeiro digito: %d", primeiro);
    printf("\n Segundo digito: %d", segundo);
    printf("\n Terceiro digito: %d", terceiro);

    pivo = primeiro;
    primeiro = terceiro;
    terceiro = pivo;

    printf("\n O numero invetido: %d%d%d \n",primeiro,segundo,terceiro);

    return 0;
}
