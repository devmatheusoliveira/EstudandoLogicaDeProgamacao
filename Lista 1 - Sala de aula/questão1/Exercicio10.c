/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:

        Resolva as seguintes expressões matemáticas.
        X e Y são valores fornecidos pelo usuário.
        Calcule e mostre o resultado de cada expressão.

*/

#include <stdio.h>

int main(void)
{
    float x, y, resultadoFloat;
    int resultadoInt;

    printf(" Vamos fazer alguns calculos?");

    printf("\n\n Me diz o valor de X: ");
    scanf("%f", &x);

    printf("\n Otimo, agora me diz o valor de Y: ");
    scanf("%f", &y);

    resultadoFloat = ((x + y) / y) * (x * x);
    printf("\n a) %f", resultadoFloat);

    resultadoFloat = (x + y) / (x - y);
    printf("\n b) %f", resultadoFloat);

    resultadoFloat = ((x * x) + (y * y * y)) / 2;
    printf("\n c) %f", resultadoFloat);

    resultadoFloat = (x * x * x) / (x * x);
    printf("\n d) %f", resultadoFloat);


    resultadoInt = (int)x % (int)y;
    printf("\n e) Resto da divisão de x por y = %d", resultadoInt);

    resultadoInt = (int)x % 3;
    printf("\n f) Resto da divisão de x por 3 = %d", resultadoInt);

    resultadoInt = (int)y % 5;
    printf("\n g) Resto da divisão de y por 5 = %d", resultadoInt);

    return 0;
}
