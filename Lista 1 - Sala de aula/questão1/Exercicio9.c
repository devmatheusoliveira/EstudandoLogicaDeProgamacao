/*
    Aluno:
        Matheus Santos Oliveira

    Descri��o:

          Leia dois valores A e B e efetue a
          troca do conte�do das duas vari�veis
          lidas, de forma que a vari�vel A passe
          a ter o valor de B e a vari�vel B o valor
          de A. Mostre o conte�do das vari�veis antes
          e depois da troca.

*/
#include <stdio.h>

int main(void)
{
    int a, b, pivo;

    printf(" Por favor, me diz o valor de A: ");
    scanf("%d", &a);

    printf(" Otimo, agora o de B: ");
    scanf("%d", &b);

    printf("\n Antes da troca: A = %d | B = %d",a,b);

    pivo = a;
    a = b;
    b = pivo;


    printf("\n Depois da troca: A = %d | B = %d",a,b);

    return 0;
}
