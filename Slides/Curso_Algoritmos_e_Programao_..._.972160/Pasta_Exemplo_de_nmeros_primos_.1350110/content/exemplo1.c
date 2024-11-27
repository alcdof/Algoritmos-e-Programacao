#include <stdio.h>

int main (void)
{
    int num, i=2, cont=0, qtde, contDiv, j;

    do
    {
        printf("Quantos numeros primos deseja imprimir: ");
        scanf("%d", &num);

        if(num <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(num <= 0);

    do
    {
        printf("Quantos numeros primos mostrar por linha: ");
        scanf("%d", &qtde);

        if(qtde <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(qtde <= 0);

    do
    {
        contDiv=0;
        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
            {
                contDiv++;
            }
        }
        if(contDiv == 2)
        {
            printf("%d\t", i);
            cont++;

            if(cont%qtde ==0)
            {
                printf("\n");
            }
        }

        i++;
    }while(cont<num);

    return 0;
}
