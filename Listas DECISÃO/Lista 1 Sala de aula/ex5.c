#include <stdio.h>

int main(void)
{
    int a, b, c, meio, maior, menor;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    printf("Informe o terceiro numero: ");
    scanf("%d", &c);

    if (a>b && a>c){
        maior = a;
        if (b>c){
            meio = b;
            menor = c;
        }
        else{
            meio = c;
            menor = b;
        }
    }
    else if (a<b && a>c){
        meio = a;
        if (b>c){
            maior = b;
            menor = c;
        }
        else{
            maior = c;
            menor = b;
        }
    }
    else if (a<b && a<c){
        menor = a;
        if (b>c){
            maior = b;
            meio = c;
        }
        else{
            meio = b;
            maior = c;
        }
    }
    else if (a>b && a<c){
        meio = a;
        if(c>b){
            maior = c;
            menor = b;
        }
    }

    printf("%d = maior, %d = meio, %d = menor", maior, meio, menor);

    return 0;
}