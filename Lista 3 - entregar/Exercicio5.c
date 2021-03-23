/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Ler um n�mero inteiro com at� 3 d�gitos.
        Separar os d�gitos desse n�mero e
        mostr�-los em linhas distintas. Na sequ�ncia
        calcular e mostrar o inverso do n�mero.

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
