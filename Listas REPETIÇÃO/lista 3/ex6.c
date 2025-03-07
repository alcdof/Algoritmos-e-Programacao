#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num = 1, cont1 = 0, cont2 = 0, cont3 = 0, soma = 0;
    float media;

    while(num != 0){
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num > 0){
            cont1++;
        }
        else if(num < 0 && num % 2 == 0){
            cont2++;
        }
        else if(num % 3 == 0 && num != 0){
            cont3++;
            soma = soma + abs(num);
        }
    }
    
    if(cont3 > 0){
        media = (float)soma / cont3;
    }

    printf("\nNumeros positivos: %d\n", cont1);
    printf("Numeros negativos que sao pares: %d\n", cont2);
    printf("A media dos numeros divisiveis por 3 eh: %.1f\n", media);

    return 0;
}