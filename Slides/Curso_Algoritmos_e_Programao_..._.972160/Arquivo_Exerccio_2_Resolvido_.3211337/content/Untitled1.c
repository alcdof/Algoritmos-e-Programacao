/*2) Ler uma s�rie de n�meros informados pelo usu�rio at�
ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usu�rio.
 O valor zero indica o final da leitura e n�o deve ser
considerado.*/

#include <stdio.h>

int main(void)
{
    //Declara��o de vari�veis
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
