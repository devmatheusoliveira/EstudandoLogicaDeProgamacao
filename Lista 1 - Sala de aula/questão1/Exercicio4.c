/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Calcular a media ponderada considerando que um professor atribui pesos de 1 a 3 para as notas de tr�s avalia��es, respectivamente.
*/

 #include <stdio.h>



int main(void)
{
    float primeiraNota, segundaNota, terceiraNota, mediaPonderada;

    printf("Escreva a primeira nota:");
    scanf("%f", &primeiraNota);

    printf("Escreva a segunda nota:");
    scanf("%f", &segundaNota);

    printf("Escreva a terceira nota:");
    scanf("%f", &terceiraNota);

    mediaPonderada = (primeiraNota * 1 + segundaNota * 2 + terceiraNota *3)/6;

    printf("A media desse aluno �: %f", mediaPonderada);

    return 0;
}
