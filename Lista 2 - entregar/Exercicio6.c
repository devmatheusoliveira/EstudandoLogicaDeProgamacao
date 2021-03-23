/*
    Aluno:
        Matheus Santos Oliveira
    Descri��o:
        Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada.
        Para calcular seu rendimento, ela dever� fornecer o valor constante
        da aplica��o mensal, a taxa de juros (%) e o prazo da aplica��o (em meses).
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    float valorDaAplicacao, taxaDeJuros, valorAcumulado;
    int numeroDeMeses;

    printf(" Vamos calcular sua popan�a progamada?");

    printf("\n\n Por favor, informe valor da aplicacao: ");
    scanf("%f", &valorDaAplicacao);

    printf("\n Boa! Informe sua taxa de juros(entre 0 e 1): ");
    scanf("%f", &taxaDeJuros);

    printf("\n Otimo, para finalizar, informe o numero de meses: ");
    scanf("%d", &numeroDeMeses);

    valorAcumulado = valorDaAplicacao*((pow((1 + taxaDeJuros), numeroDeMeses)-1) / taxaDeJuros);

    printf("\n\n O valor acumulado eh: %.2f reais\n\n", valorAcumulado);

    return 0;
}
