//Verifica se um n�mero � ou n�o um n�mero primo

#include <stdio.h>
int main(void)
{
    int num, cont=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
             cont++; // achou um divisor
             break; //sai do for
        }
    }

    if(cont == 0 && num > 1)
    {
        printf("Eh um numero primo\n");
    }
    else
    {
        printf("Nao eh um numero primo\n");
    }

    return 0;
 }
