/*8) Fazer um programa para mostrar os divisores,
calcular a quantidade deles e mostrar essa quantidade
para os n�meros compreendidos entre o valor �x�
(informado pelo usu�rio) e �x+10�, inclusive. Validar
a entrada, o usu�rio dever� fornecer um n�mero positivo
entre 2 e 100. Ao final, mostrar a maior quantidade de
divisores. A seguir um exemplo da execu��o, utiliz�-lo
como modelo para o programa implementado:*/

#include <stdio.h>

int main(void)
{
    int num, i, j, contDiv, maiorQtde;
    char repetir;

    do //Repeti��o de programa
    {
        maiorQtde=0;

        do //Valida��o da entrada
        {
            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);

            if(num<2 || num>100)
            {
                printf("Valor invalido\n");
            }
        }while(num<2 || num>100);

        for(i=1; i<=11; i++)
        {
            printf("%d ==> ", num);

            contDiv=0;

            for(j=1; j<=num; j++)
            {
                if(num%j==0)
                {
                    if(j!=num)
                    {
                        printf("%d, ", j);
                    }
                    else
                    {
                        printf("%d ", j);
                    }
                    contDiv++;
                }
            }

            printf("- %d divisores\n", contDiv);

            if(contDiv > maiorQtde)
            {
                maiorQtde = contDiv;
            }
            num++;
        }

        printf("\nA maior quantidade de divisores eh: %d\n", maiorQtde);

        printf("\nDeseja repetir o programa (S/s): ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');

    return 0;
}
