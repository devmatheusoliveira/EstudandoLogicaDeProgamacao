/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        A  figura  a  seguir  representa  uma  árvore  de 
        decisão  para  identificar  se  um  paciente  está  
        saudável  ou doente. Elabore um programa que implementa
        essa árvore de decisão.
*/

#include <stdio.h>

int main(void)
{
    float temperatura;
    char isBem, hasDor;

    printf("\n O paciente se sente bem?");
    printf("\n Caso sim, coloque 's' ou 'S', caso nao, digite 'n' ou 'N'");
    scanf("%c", &isBem);


    switch(isBem)
    {
        case 's':
        case 'S':

            printf("\n O paciente esta saudavel!");

        break;

        case 'n':
        case 'N':
            printf("\n O paciente tem dor?");

            fflush(stdin);
            scanf("%c", &hasDor);
            switch(hasDor)
            {
                case 's':
                case 'S':
                    printf("\n O paciente esta doente!");

                break;

                case 'n':
                case 'N':

                    fflush(stdin);
                    printf("\n Qual a temperatura dele(dela)?");
                    scanf("%f", &temperatura);

                    if(temperatura <= 37)
                    {
                        printf("\n O paciente esta saudavel");
                    }
                    else
                    {
                        printf("\nO paciente esta doente");
                    }

                break;

                default:

                    printf("\n Ops! voce digitou a letra errada :( \n So reconhecemos s, S, n ou N!");

                break;
            }

        break;

        default:

            printf("Ops! voce digitou a letra errada :( \n So reconhecemos s, S, n ou N!");

        break;
    }

    return 0;
}
