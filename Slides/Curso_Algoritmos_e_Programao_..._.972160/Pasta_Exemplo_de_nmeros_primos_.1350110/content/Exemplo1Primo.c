//Verifica se um número é ou não um número primo

#include <stdio.h>

int main(void)
{
    int num, cont=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
            cont++; //conta divisores
        }
    }

    if(cont == 2)
    {
        printf("Eh um numero primo\n");
    }
    else
    {
        printf("Nao eh um numero primo\n");
    }

    return 0;
}
