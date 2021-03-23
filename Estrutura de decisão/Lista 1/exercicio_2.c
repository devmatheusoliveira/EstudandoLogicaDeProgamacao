/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Ler dois valores num�ricos e
        apresentar a diferen�a entre eles.
        A diferen�a sempre � positiva, portanto,
        o menor � subtra�do do maior n�o importando
        a ordem em que os n�meros s�o informados.
*/

#include <stdio.h>

int main(void)
{
    int diferenca, primeiroNumero, segundoNumero;


    printf("Vamos calcular o modulo de um numero inteiro?");

    printf("\n\n Por favor insira dois numeros, de um numero para o outro aperte 'enter': \n");
    scanf("%d %d", &primeiroNumero, &segundoNumero);

    diferenca = primeiroNumero - segundoNumero;

    if(diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("A diferenca entre os numeros: %d", diferenca);

    return 0;
}
