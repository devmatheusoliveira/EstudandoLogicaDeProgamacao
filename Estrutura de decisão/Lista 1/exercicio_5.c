/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Elaborar um programa que, dada a idade de um nadador, 
        classifique-o em uma das seguintes categorias: 
        Menor de 5 anos= “Não categorizado como atleta”
        5 a 7 anos= “Infantil A”
        8 a 10 anos= “Infantil B”
        11 a 13 anos= “Juvenil A”
        14 a 17 anos= “Juvenil B”
        Maior de 17 anos= “Sênior”
        Se o valor informado é negativo, informar ao usuário que o valor é 
        inválido para o escopo da solução.

*/
#include <stdio.h>

int main (void)
{
    int idade;

    printf("\n Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 0 && idade < 5)
    {
        printf("Este nadador nao categorizado como atleta \n");
    }
    else if(idade >= 5 && idade <= 7)
    {
        printf("Este nadador esta categorizado como Infatil A \n");
    }
    else if(idade >= 8 && idade <= 10)
    {
        printf("Este nadador esta categorizado como Infatil B \n");
    }
    else if(idade >= 11 && idade <= 13)
    {
        printf("Este nadador esta categorizado como Juvenil A \n");
    }
    else if(idade >= 14 && idade <= 17)
    {
        printf("Este nadador esta categorizado como Juvenil B \n");
    }
    else if(idade > 17)
    {
        printf("Este nadador esta categorizado como Senior \n");
    }
    else
    {
        printf("\n Idade invalida!");
    }
        
    return 0;
}
