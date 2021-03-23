/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Ler dois valores numéricos e
        apresentar a diferença entre eles.
        A diferença sempre é positiva, portanto,
        o menor é subtraído do maior não importando
        a ordem em que os números são informados.
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
