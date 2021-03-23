/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Fa�a um programa que leia o g�nero,
        e caso o mesmo seja 'f', 'F', 'm' ou 'M'
        leia tamb�m a idade e o tempo de trabalho
        de uma pessoa e determine se ela pode ou
        n�o se aposentar. Assuma que homens se
        aposentam com 45 anos de trabalho ou idade
        superior a 70 anos e mulheres se aposentam
        com 40 anos de trabalho ou idade superior
        a 65 anos
*/

#include <stdio.h>

int main(void)
{
    int idade, tempoDeServico;
    char genero;
    
    printf("\nDigite o genero da pessoa: ");
    scanf(" %c",&genero);

    printf("\n Otimo! Agora digite a idade e o tempo de trabalho( de um para o outro aperte 'Enter'): ");
    scanf("%d %d", &idade, &tempoDeServico);

    switch(genero)
    {
        case 'M':
        case 'm':

            if((idade > 70) || (tempoDeServico > 45))
            {
                printf("\nEsta pessoa do genero masculino pode se aposentar");
            }
            else
            {
                printf("\nEsta pessoa do genero masculino nao pode se aposentar");
            }

        break;

        case 'F':
        case 'f':

            if((idade > 65) || (tempoDeServico > 40))
            {
                printf("\nEsta pessoa do genero feminino pode se aposentar");
            }
            else
            {
                printf("\nEsta pessoa do genero feminino nao pode se aposentar");
            }

        break;

        default:

            printf("\n Ops! voce digitou a letra errada :( \n So reconhecemos m, M, f ou F!");

            break;
    }

    return 0;
}
