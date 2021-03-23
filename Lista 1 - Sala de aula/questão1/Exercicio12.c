/*
    Aluno:
        Matheus Santos Oliveira

    Descrição:

         Calcular a media da idade de 3 pessoas.

*/
#include <stdio.h>

int main(void)
{
    int idade1, idade2, idade3, media;

    printf("Vamos calcular a media de idade de 3 pessoas?");
    printf("\nPor favor, insira a idade de 3 pessoas.\nAo inserir a idade de uma pessoa aperte 'Enter': \n");
    scanf("%d", &idade1);
    scanf("%d", &idade2);
    scanf("%d", &idade3);


    media = (int)((idade1 + idade2 + idade3)/3);

    printf("\n\nA media das idades corresponde a %d anos", media);
}
