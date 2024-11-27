/*5) Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data � v�lida ou n�o. */

#include <stdio.h>

int main(void)
{
    //declara��o de vari�veis
    int data, dia, mes, ano;

    //entrada de dados
    printf("Informe a data (ddmmaaaa): ");
    scanf("%d", &data);

    //processamento e sa�da de dados
    dia = data / 1000000; //extrai o dia
    printf("O dia eh: %d\n", dia);
    mes = data % 1000000 / 10000; //extrai o m�s
    printf("O mes eh: %d\n", mes);
    ano = data % 10000; //extrai o ano
    printf("O ano eh: %d\n", ano);

    if(ano < 1)//verifica se o ano � inv�lido
    {
        printf("A data eh invalida\n");
    }
    else if(mes < 1 || mes > 12 || dia < 1 || dia > 31)//verifica se o meses e os dias s�o inv�lidos
    {
        printf("\nA data eh invalida\n");
    }
    else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 30))//verifica se os meses 4,6,9 e 11 tem mais de 30 dias
    {
        printf("\nA data eh invalida\n");
    }
    else if(mes == 2)//se o m�s � 2, verifica o bisexto
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
