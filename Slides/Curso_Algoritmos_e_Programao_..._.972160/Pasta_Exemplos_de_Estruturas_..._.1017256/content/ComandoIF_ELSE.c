#include <stdio.h>

int main(void)
{
    int x;

    /*O comando if permite executar um conjunto de
    instru��es quando a condi��o for verdadeira.
    O comando else permite executar um conjunto de instru��es
    quando a condi��o for falsa. */

    //Forma Geral
    if(condi��o)
    {
        Primeiro conjunto de intru��es
    }
    else
    {
        Segundo conjunto de instru��es
    }

    //Exemplo 1
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(x < 0)
    {
        printf("O valor eh negativo\n");
    }
    else
    {
        printf("O valor eh positivo\n");
    }

    return 0;
}
