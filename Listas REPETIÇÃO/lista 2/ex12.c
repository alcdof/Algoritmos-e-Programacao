#include <stdio.h>

int main(void){

    int i, cont = 0, soma = 0;
    float media;

    for(i=200; i>=1; i--){
        if(i % 2 != 0 && i % 5 != 0){
            printf("%d\t", i);
        }
        if(i % 3 == 0 && i % 5 == 0){
            cont++;
            soma = soma + i;
        }
    }
    media = soma/(float)cont;
    printf("\nA media dos numeros divisiveis por 3 e por 5 eh: %.1f", media);

    return 0;
}