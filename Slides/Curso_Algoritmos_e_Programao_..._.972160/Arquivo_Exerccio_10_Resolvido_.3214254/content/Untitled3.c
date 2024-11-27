#include <stdio.h>

int main(void)
{
    int num, i, j;
    char repetir;

    do//Repetição de programa
    {
        do//validação da entrada
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido\n");
            }

        }while(num<=0);

        for(i=1; i<=num; i++)
        {
            for(j=1; j<=num; j++)
            {
                printf("%2d  ", i);
            }
            printf("\n");
        }

        printf("\nDeseja digitar outro numero (S/s)? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');

    return 0;
}
