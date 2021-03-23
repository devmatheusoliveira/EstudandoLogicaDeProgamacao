/*
    Aluno:
        Matheus Santos Oliveira

    Descricao:
        Faça um programa que apresente o menu a seguir e 
        permita ao usuário escolher a opção desejada, 
        receba os dados necessários para executar 
        a operação e mostre o resultado.

        Menu de opções:
            1 – Mostra os números em ordem crescente
            2 – Mostra os números em ordem decrescente
            3 - Mostra os números que são múltiplos de 2
        Digite a opção desejada:


*/
#include <stdio.h>

int main (void)
{
    int opcao, primeiroNumero, segundoNumero, terceiroNumero;
    
    printf ("Digite o primeiro numero inteiro: ");
    scanf ("%d", &primeiroNumero);

    printf ("Digite o segundo numero inteiro: ");
    scanf ("%d", &segundoNumero);

    printf ("Digite o terceiro numero inteiro: ");
    scanf ("%d", &terceiroNumero);

    printf ("Menu de opcoes: \n");
    printf("\n1 - mostra os numeros em ordem crescente");
    printf ("\n2 - mostra os numeros em ordem decrescente");
    printf ("\n3 - mostra os numeros que sao multiplos de 2\n");

    printf ("\nDigite a opcao desejada: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("\n Colocando em ordem crescente os numeros %d, %d, %d, ficam: ",primeiroNumero,segundoNumero,terceiroNumero);
            if(primeiroNumero < segundoNumero)
            {
                if(segundoNumero < terceiroNumero)
                {
                    printf("%d, %d, %d", primeiroNumero, segundoNumero, terceiroNumero);
                }
                else
                {
                    if(primeiroNumero < terceiroNumero)
                    {
                        printf("%d, %d, %d", primeiroNumero, terceiroNumero, segundoNumero);
                    }
                    else
                    {
                        printf("%d, %d, %d", terceiroNumero, primeiroNumero, segundoNumero);
                    }
                }
            }
            else
            {
                if(segundoNumero < terceiroNumero)
                {
                    if(primeiroNumero < terceiroNumero)
                    {
                        printf("%d, %d, %d", segundoNumero, primeiroNumero, terceiroNumero);
                    }
                    else
                    {
                        printf("%d, %d, %d", segundoNumero, terceiroNumero, primeiroNumero);
                    }
                }
                else
                {
                    printf("%d, %d, %d", terceiroNumero, segundoNumero, primeiroNumero);
                }
            }
        break;


        case 2:
            printf("\n Colocando em ordem decrescente os numeros %d, %d, %d, ficam: ",primeiroNumero,segundoNumero,terceiroNumero);
            if(primeiroNumero > segundoNumero)
            {
                if(segundoNumero > terceiroNumero)
                {
                    printf("%d, %d, %d", primeiroNumero, segundoNumero, terceiroNumero);
                }
                else
                {
                    if(primeiroNumero > terceiroNumero)
                    {
                        printf("%d, %d, %d", primeiroNumero, terceiroNumero, segundoNumero);
                    }
                    else
                    {
                        printf("%d, %d, %d", terceiroNumero, primeiroNumero, segundoNumero);
                    }
                }
            }
            else
            {
                if(segundoNumero > terceiroNumero)
                {
                    if(primeiroNumero > terceiroNumero)
                    {
                        printf("%d, %d, %d", segundoNumero, primeiroNumero, terceiroNumero);
                    }
                    else
                    {
                        printf("%d, %d, %d", segundoNumero, terceiroNumero, primeiroNumero);
                    }
                }
                else
                {
                    printf("%d, %d, %d", terceiroNumero, segundoNumero, primeiroNumero);
                }
            }
        break;

        case 3:
        
            switch (3 - ((primeiroNumero % 2) + (segundoNumero % 2) + (terceiroNumero % 2)))
            {
                case 0:
                    printf(" Nenhum desses numeros sao multiplos de 2");
                    break;

                case 1:
                    if(primeiroNumero % 2 == 0)
                    {
                        printf(" Apenas o %d eh multiplo de 2", primeiroNumero);
                    }
                    else if(segundoNumero % 2 == 0)
                    {
                        printf(" Apenas o %d eh multiplo de 2", segundoNumero);
                    }
                    else
                    {
                        printf(" Apenas o %d eh multiplo de 2", terceiroNumero);
                    }
                    break;

                case 2:
                    if(primeiroNumero % 2 != 0)
                    {
                        printf(" Apenas o %d e %d eh multiplo de 2", segundoNumero,terceiroNumero);
                    }
                    else if(segundoNumero % 2 != 0)
                    {
                        printf(" Apenas o %d e %d eh multiplo de 2", primeiroNumero,terceiroNumero);
                    }
                    else
                    {
                        printf(" Apenas o %d e %d eh multiplo de 2", primeiroNumero,segundoNumero);
                    }
                    break;

                default:
                    printf(" Os numeros %d, %d e %d sao multiplos de 2", primeiroNumero, segundoNumero ,terceiroNumero);
                    break;
            }

        break;

        default:
            printf ("Opcao invalida, tente novamente!");
            break;
    }
    return 0;
}
