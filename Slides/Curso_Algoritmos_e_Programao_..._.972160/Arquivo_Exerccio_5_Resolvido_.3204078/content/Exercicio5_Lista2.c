/*5) Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não. */

#include <stdio.h>

int main(void)
{
    //declaração de variáveis
    int data, dia, mes, ano;

    //entrada de dados
    printf("Informe a data (ddmmaaaa): ");
    scanf("%d", &data);

    //processamento e saída de dados
    dia = data / 1000000; //extrai o dia
    printf("O dia eh: %d\n", dia);
    mes = data % 1000000 / 10000; //extrai o mês
    printf("O mes eh: %d\n", mes);
    ano = data % 10000; //extrai o ano
    printf("O ano eh: %d\n", ano);

    if(ano < 1)//verifica se o ano é inválido
    {
        printf("A data eh invalida\n");
    }
    else if(mes < 1 || mes > 12 || dia < 1 || dia > 31)//verifica se o meses e os dias são inválidos
    {
        printf("\nA data eh invalida\n");
    }
    else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 30))//verifica se os meses 4,6,9 e 11 tem mais de 30 dias
    {
        printf("\nA data eh invalida\n");
    }
    else if(mes == 2)//se o mês é 2, verifica o bisexto
    {
        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) // se o ano for bisexto
        {
            if(dia > 29)
            {
                printf("\nA data eh invalida\n");
            }
            else
            {
                printf("\nA data eh valida\n");
            }
        }
        else
        {
            if(dia > 28)
            {
                printf("\nA data eh invalida\n");
            }
            else
            {
                printf("\nA data eh valida\n");
            }
        }
    }
    else
    {
        printf("A data eh valida\n");
    }

    return 0;
}
