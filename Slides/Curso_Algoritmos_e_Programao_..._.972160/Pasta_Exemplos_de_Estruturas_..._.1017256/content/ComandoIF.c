#include <stdio.h>

int main(void)
{
    int x;

    /*O comando if permite executar ou n�o um conjunto de
    instru��es de acordo com uma condi��o*/

    //Forma Geral
    if(condi��o)
    {
        conjunto de intru��es
    }

    //Exemplo 1
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x > 0)
    {
        printf("O valor eh positivo\n");
    }

    //Exemplo 2
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x % 2 == 0 || x < 0)
    {
        printf("O valor eh par ou negativo\n");
    }

    return 0;
}
