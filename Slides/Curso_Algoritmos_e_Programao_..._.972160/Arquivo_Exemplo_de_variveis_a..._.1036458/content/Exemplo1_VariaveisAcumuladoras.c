//Soma os números pares

#include <stdio.h>

int main(void)
{
    int i, soma=0;

    for(i=0; i <= 10; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
            soma = soma + i;
        }
    }
    printf("\nA soma dos numeros pares eh: %d\n", soma);

    return 0;
}
