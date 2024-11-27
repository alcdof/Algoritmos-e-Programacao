/*2) Ler uma série de números informados pelo usuário até
ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário.
 O valor zero indica o final da leitura e não deve ser
considerado.*/

#include <stdio.h>

int main(void)
{
    //Declaração de variáveis
    int num=1, maior=0, menor=0, primeiro=0;

    while(num != 0)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num != 0)
        {
            if(primeiro == 0)
            {
                maior = num;
                menor = num;
                primeiro = 1;
            }
            else
            {
                if(num > maior)
                {
                    maior = num;
                }
                else if(num < menor)
                {
                    menor = num;
                }
            }
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
